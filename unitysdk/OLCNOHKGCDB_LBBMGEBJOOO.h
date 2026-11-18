#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class OLCNOHKGCDB;

#define OLCNOHKGCDB_LBBMGEBJOOO_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x14F8ADA0)
#define OLCNOHKGCDB_LBBMGEBJOOO_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x14F8ADD0)
#define OLCNOHKGCDB_LBBMGEBJOOO__CTOR_OFFSET UNITYSDK_OFFSET(0x14F8AD90)

inline static constexpr unsigned int OLCNOHKGCDB_LBBMGEBJOOO_TypeDefinitionIndex = 68272;

class OLCNOHKGCDB_LBBMGEBJOOO : public ::System::Object
{
public:
	::OLCNOHKGCDB* KLHPEBKNIFB; // 0x10
	::AFMMAIKKACF* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNOHKGCDB_LBBMGEBJOOO__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNOHKGCDB_LBBMGEBJOOO_MJMKFFANPBL_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLCNOHKGCDB_LBBMGEBJOOO_PEJFEPJJDMI_OFFSET))(this);
	}
};
