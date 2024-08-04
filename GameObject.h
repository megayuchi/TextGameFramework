#pragma once

enum FLIGHT_OBJECT_STATUS
{
	FLIGHT_OBJECT_STATUS_ALIVE,
	FLIGHT_OBJECT_STATUS_DEAD,
};

struct FLIGHT_OBJECT
{
	int x;
	int y;
	int	Width;
	int Height;
	FLIGHT_OBJECT_STATUS status;
	ULONGLONG	DeadTick;	// ����� �ð�
	WCHAR* pBits;
};

FLIGHT_OBJECT* CreatePlayer();
FLIGHT_OBJECT* CreateEnemyRandom();
FLIGHT_OBJECT* CreateAmmo(FLIGHT_OBJECT* pShooter);
void DeleteFlightObject(FLIGHT_OBJECT* pObject);
BOOL MoveEmemy(FLIGHT_OBJECT* pObj);
void ChangeFlightObjectStatusToDead(FLIGHT_OBJECT* pObject, ULONGLONG CurTick);