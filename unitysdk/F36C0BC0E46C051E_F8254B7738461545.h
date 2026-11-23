#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class F36C0BC0E46C051E;
namespace UnityEngine::InputSystem { class InputAction; }

#define F36C0BC0E46C051E_F8254B7738461545_A57100F48E879EBD_OFFSET UNITYSDK_OFFSET(0x26CF550)
#define F36C0BC0E46C051E_F8254B7738461545__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB3C0)

inline static constexpr unsigned int F36C0BC0E46C051E_F8254B7738461545_TypeDefinitionIndex = 6665;

struct alignas(8) F36C0BC0E46C051E_F8254B7738461545
{
	::F36C0BC0E46C051E* A057A0348837F8C1; // 0x10

	::System::Void _ctor(::F36C0BC0E46C051E* BDF36F9092680C0B)
	{
		return ((::System::Void(*)(::PVOID, ::F36C0BC0E46C051E*))((::PBYTE)hIl2Cpp + F36C0BC0E46C051E_F8254B7738461545__CTOR_OFFSET))(this, BDF36F9092680C0B);
	}

	::UnityEngine::InputSystem::InputAction* A57100F48E879EBD()
	{
		return ((::UnityEngine::InputSystem::InputAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + F36C0BC0E46C051E_F8254B7738461545_A57100F48E879EBD_OFFSET))(this);
	}
};
