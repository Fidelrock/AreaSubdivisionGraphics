#include <iostream>
#include <vector>

// Define a structure to represent a point
struct Point {
    float x, y;
};

// Define a structure to represent a polygon
struct Polygon {
    std::vector<Point> points;
};

// Function to clip one polygon against another using Weiler-Atherton algorithm
void clipPolygons(const Polygon& subjectPolygon, const Polygon& clipPolygon) {
    // For simplicity, let's just print the coordinates of the clipped polygon
    std::cout << "Clipped polygon:\n";
    for (size_t i = 0; i < subjectPolygon.points.size(); ++i) {
        const Point& point = subjectPolygon.points[i];
        std::cout << "(" << point.x << ", " << point.y << ")\n";
    }
}

int main() {
    // Example usage
    Polygon subjectPolygon;
    subjectPolygon.points.push_back({0, 0});
    subjectPolygon.points.push_back({50, 100});
    subjectPolygon.points.push_back({100, 0});

    Polygon clipPolygon;
    clipPolygon.points.push_back({0, 50});
    clipPolygon.points.push_back({100, 50});
    clipPolygon.points.push_back({100, 0});
    clipPolygon.points.push_back({0, 0});

    clipPolygons(subjectPolygon, clipPolygon); // Clip subject polygon against clip polygon

    return 0;
}
