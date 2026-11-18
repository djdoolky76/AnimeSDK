#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define KNHMILFLEMM_LLPABFHEKOH_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x168225E0)
#define KNHMILFLEMM_LLPABFHEKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x168225D0)

inline static constexpr unsigned int KNHMILFLEMM_LLPABFHEKOH_TypeDefinitionIndex = 72182;

class KNHMILFLEMM_LLPABFHEKOH : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM_LLPABFHEKOH__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHMILFLEMM_LLPABFHEKOH_LIDNPLMPHAL_OFFSET))(this);
	}
};
