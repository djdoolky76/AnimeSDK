#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B6613C9D7676EEFB;
namespace System { class Action; }

#define B3DCB534F7BDD139_EFC38FE2D6ED5533_E5DCBCAC52BD9ED7_OFFSET UNITYSDK_OFFSET(0x3D69520)
#define B3DCB534F7BDD139_EFC38FE2D6ED5533__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B3DCB534F7BDD139_EFC38FE2D6ED5533_TypeDefinitionIndex = 10983;

class B3DCB534F7BDD139_EFC38FE2D6ED5533 : public ::System::Object
{
public:
	::B6613C9D7676EEFB* A0EB125A66A994BD; // 0x10
	::System::Action* F3CC6178234F35E2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3DCB534F7BDD139_EFC38FE2D6ED5533__CTOR_OFFSET))(this);
	}

	::System::Void E5DCBCAC52BD9ED7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B3DCB534F7BDD139_EFC38FE2D6ED5533_E5DCBCAC52BD9ED7_OFFSET))(this);
	}
};
