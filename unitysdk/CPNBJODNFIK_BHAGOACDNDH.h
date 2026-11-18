#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPNBJODNFIK;
namespace System { class Action; }

#define CPNBJODNFIK_BHAGOACDNDH_EJKIGBOPIJB_OFFSET UNITYSDK_OFFSET(0x1688AED0)
#define CPNBJODNFIK_BHAGOACDNDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1688AEC0)

inline static constexpr unsigned int CPNBJODNFIK_BHAGOACDNDH_TypeDefinitionIndex = 49708;

class CPNBJODNFIK_BHAGOACDNDH : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::CPNBJODNFIK* KLHPEBKNIFB; // 0x18
	::System::Action* BLLNHDIDKPA; // 0x20
	::System::Int32 FKOFGJJLOEC; // 0x28
	::System::Int32 PAEEEHKILOC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_BHAGOACDNDH__CTOR_OFFSET))(this);
	}

	::System::Void EJKIGBOPIJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_BHAGOACDNDH_EJKIGBOPIJB_OFFSET))(this);
	}
};
