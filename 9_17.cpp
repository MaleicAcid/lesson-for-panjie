#include<stdio.h>
#include<math.h>
#define PI 3.14159
#define RAD 3.14159/180
void main() {
	double lat1 = (31+25.8/60);
	double dif_lat = (6+38.7/60);
	double lon1 = (121+12.5/60);
	double dif_lon = (16+17.1/60);

	double lat2 = lat1 + dif_lat;
	double lon2 = lon1 + dif_lon;

	printf("lat2=%f\n",lat2);
	printf("lon2=%f\n",lon2);

	int lat2deg = int(lat2);
	printf("lat2deg=%d\n", lat2deg);
	double lat2min = (lat2-lat2deg)*60;
	printf("lat2min=%f\n", lat2min);
	printf("到达纬度:%d ° %.1f′\n", lat2deg,lat2min);


	int lon2deg = int(lon2);
	printf("lon2deg=%d\n", lon2deg);
	double lon2min = (lon2-lon2deg)*60;
	printf("lon2min=%f\n", lon2min);
	printf("到达经度:%d ° %.1f′\n", lon2deg,lon2min);
}
