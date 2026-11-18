#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNAGMHIBOFA;

#define DNAGMHIBOFA_ONDAEGPBBCO_IKICNFHPHJC_OFFSET UNITYSDK_OFFSET(0x158794B0)
#define DNAGMHIBOFA_ONDAEGPBBCO__CTOR_OFFSET UNITYSDK_OFFSET(0x158794A0)

inline static constexpr unsigned int DNAGMHIBOFA_ONDAEGPBBCO_TypeDefinitionIndex = 56367;

class DNAGMHIBOFA_ONDAEGPBBCO : public ::System::Object
{
public:
	::DNAGMHIBOFA* KLHPEBKNIFB; // 0x10
	::System::Boolean GGENOGKGEAP; // 0x18
	::System::Boolean BABIFHFEFAM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_ONDAEGPBBCO__CTOR_OFFSET))(this);
	}

	::System::Void IKICNFHPHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAGMHIBOFA_ONDAEGPBBCO_IKICNFHPHJC_OFFSET))(this);
	}
};
