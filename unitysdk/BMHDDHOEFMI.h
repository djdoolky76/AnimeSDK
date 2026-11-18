#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BMHDDHOEFMI__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B1180)

inline static constexpr unsigned int BMHDDHOEFMI_TypeDefinitionIndex = 79162;

class BMHDDHOEFMI : public ::System::Object
{
public:
	::System::Int32 LJMPPBEMEPP; // 0x10
	::System::Single MDPPNMIPDMP; // 0x14
	::System::Int32 PMGFIHJAJHL; // 0x18
	::System::Single FAOPLCFLJLE; // 0x1C
	::System::Int32 JHFKDGBCOBA; // 0x20
	::System::Boolean CGFLLPOCDJM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHDDHOEFMI__CTOR_OFFSET))(this);
	}
};
