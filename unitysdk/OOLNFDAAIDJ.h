#pragma once
#include "unitysdk/unitysdk.h"

#define OOLNFDAAIDJ_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18459320)
#define OOLNFDAAIDJ_MLMLEKKJJID_OFFSET UNITYSDK_OFFSET(0x18459330)
#define OOLNFDAAIDJ_ONREADY_OFFSET UNITYSDK_OFFSET(0x18459200)
#define OOLNFDAAIDJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18459240)
#define OOLNFDAAIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18459290)

inline static constexpr unsigned int OOLNFDAAIDJ_TypeDefinitionIndex = 78305;

class OOLNFDAAIDJ
{
public:
	::System::Int32 MELBCKNOMAM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLNFDAAIDJ__CTOR_OFFSET))(this);
	}

	::System::Void OnReady()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLNFDAAIDJ_ONREADY_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLNFDAAIDJ_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLNFDAAIDJ_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void MLMLEKKJJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOLNFDAAIDJ_MLMLEKKJJID_OFFSET))(this);
	}
};
