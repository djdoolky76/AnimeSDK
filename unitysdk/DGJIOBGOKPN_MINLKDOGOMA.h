#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGJIOBGOKPN;
namespace System { class Action; }

#define DGJIOBGOKPN_MINLKDOGOMA_KLBFPHLAEDJ_OFFSET UNITYSDK_OFFSET(0x16B9C4E0)
#define DGJIOBGOKPN_MINLKDOGOMA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9C4D0)

inline static constexpr unsigned int DGJIOBGOKPN_MINLKDOGOMA_TypeDefinitionIndex = 73889;

class DGJIOBGOKPN_MINLKDOGOMA : public ::System::Object
{
public:
	::DGJIOBGOKPN* KLHPEBKNIFB; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18
	::System::Int32 BCOCGKMPHJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIOBGOKPN_MINLKDOGOMA__CTOR_OFFSET))(this);
	}

	::System::Void KLBFPHLAEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJIOBGOKPN_MINLKDOGOMA_KLBFPHLAEDJ_OFFSET))(this);
	}
};
