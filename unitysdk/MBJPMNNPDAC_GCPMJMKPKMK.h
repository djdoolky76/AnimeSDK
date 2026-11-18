#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MBJPMNNPDAC_GCPMJMKPKMK_AKHJCLEPGFF_OFFSET UNITYSDK_OFFSET(0x18523A70)
#define MBJPMNNPDAC_GCPMJMKPKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x18523A60)

inline static constexpr unsigned int MBJPMNNPDAC_GCPMJMKPKMK_TypeDefinitionIndex = 62293;

class MBJPMNNPDAC_GCPMJMKPKMK : public ::System::Object
{
public:
	::System::Int32 DOBNLIPMOAH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJPMNNPDAC_GCPMJMKPKMK__CTOR_OFFSET))(this);
	}

	::System::Boolean AKHJCLEPGFF(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBJPMNNPDAC_GCPMJMKPKMK_AKHJCLEPGFF_OFFSET))(this, HAAEBCOBKFF);
	}
};
