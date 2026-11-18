#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ILGPPMGBHIJ_KHIEKBAKJGJ_OFFSET UNITYSDK_OFFSET(0x75A1E0)
#define ILGPPMGBHIJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x75A160)

inline static constexpr unsigned int ILGPPMGBHIJ_TypeDefinitionIndex = 89526;

struct alignas(4) ILGPPMGBHIJ
{
	::System::Single DDPPCLDJMHF; // 0x10
	::System::Single PFPNPKNBNFI; // 0x14
	::System::Single KCGAEAKJJOC; // 0x18
	::System::Single DDMHJIOEBLN; // 0x1C
	::System::Single LJPKKLNHNMD; // 0x20
	::UnityEngine::Vector3 JHIJLNJECKO; // 0x24
	::UnityEngine::Vector3 OBOHBBHHDMJ; // 0x30
	::System::Boolean BGIIEOJCNEM; // 0x3C

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGPPMGBHIJ_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Vector3 KHIEKBAKJGJ()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGPPMGBHIJ_KHIEKBAKJGJ_OFFSET))(this);
	}
};
