#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PMHBCBFDKEK;
class ScreenPlayData;
namespace System { class Action; }

#define PMHBCBFDKEK_LJNINONJOMA_BOIBGFNCKKP_OFFSET UNITYSDK_OFFSET(0x13724980)
#define PMHBCBFDKEK_LJNINONJOMA_JPLIGBKNNAN_OFFSET UNITYSDK_OFFSET(0x13724A80)
#define PMHBCBFDKEK_LJNINONJOMA_LLOBLPABDPO_OFFSET UNITYSDK_OFFSET(0x13724B20)
#define PMHBCBFDKEK_LJNINONJOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13724970)

inline static constexpr unsigned int PMHBCBFDKEK_LJNINONJOMA_TypeDefinitionIndex = 47320;

class PMHBCBFDKEK_LJNINONJOMA : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::PMHBCBFDKEK* KLHPEBKNIFB; // 0x18
	::System::Action* FFMGICPLKFB; // 0x20
	::ScreenPlayData* LJBPECKCCEA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHBCBFDKEK_LJNINONJOMA__CTOR_OFFSET))(this);
	}

	::System::Void BOIBGFNCKKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHBCBFDKEK_LJNINONJOMA_BOIBGFNCKKP_OFFSET))(this);
	}

	::System::Void JPLIGBKNNAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHBCBFDKEK_LJNINONJOMA_JPLIGBKNNAN_OFFSET))(this);
	}

	::System::Void LLOBLPABDPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHBCBFDKEK_LJNINONJOMA_LLOBLPABDPO_OFFSET))(this);
	}
};
