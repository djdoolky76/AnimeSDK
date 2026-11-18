#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNGEKLMPBAC;

#define NMNEMKAGLAN_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1729D9A0)
#define NMNEMKAGLAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1729D990)

inline static constexpr unsigned int NMNEMKAGLAN_TypeDefinitionIndex = 85467;

class NMNEMKAGLAN : public ::System::Object
{
public:
	::DNGEKLMPBAC* IBHKKFECBCD; // 0x10

	::System::Void _ctor(::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + NMNEMKAGLAN__CTOR_OFFSET))(this, ECKMPOAABAL);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMNEMKAGLAN_LJMIPGJJELP_OFFSET))(this);
	}
};
