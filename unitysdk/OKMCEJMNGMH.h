#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKMCEJMNGMH_FPLAFMNLJID_OFFSET UNITYSDK_OFFSET(0x1369A170)
#define OKMCEJMNGMH_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1369A1B0)
#define OKMCEJMNGMH_NNEGLIABPHI_OFFSET UNITYSDK_OFFSET(0x1369A1F0)
#define OKMCEJMNGMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1369A160)

inline static constexpr unsigned int OKMCEJMNGMH_TypeDefinitionIndex = 88755;

class OKMCEJMNGMH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCEJMNGMH__CTOR_OFFSET))(this);
	}

	::System::Void FPLAFMNLJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCEJMNGMH_FPLAFMNLJID_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCEJMNGMH_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void NNEGLIABPHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCEJMNGMH_NNEGLIABPHI_OFFSET))(this);
	}
};
