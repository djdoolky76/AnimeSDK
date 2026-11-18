#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMLegIK;

#define LFDGABGKACJ_CHPMBELMEJJ_GIBDJDDKCJB_OFFSET UNITYSDK_OFFSET(0x15DF3E60)
#define LFDGABGKACJ_CHPMBELMEJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF3E50)

inline static constexpr unsigned int LFDGABGKACJ_CHPMBELMEJJ_TypeDefinitionIndex = 38973;

class LFDGABGKACJ_CHPMBELMEJJ : public ::System::Object
{
public:
	::AMLegIK* PEOGGNECDGO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_CHPMBELMEJJ__CTOR_OFFSET))(this);
	}

	::System::Void GIBDJDDKCJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDGABGKACJ_CHPMBELMEJJ_GIBDJDDKCJB_OFFSET))(this);
	}
};
