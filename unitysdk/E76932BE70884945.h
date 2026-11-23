#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDB6B240C077D69E/FE7DB76A1AFFCC23.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define E76932BE70884945__CTOR_OFFSET UNITYSDK_OFFSET(0x22631D0)

inline static constexpr unsigned int E76932BE70884945_TypeDefinitionIndex = 16103;

struct alignas(8) E76932BE70884945
{
	::UnityEngine::GameObject* ABA0DE6630FC9C46; // 0x10
	::EDB6B240C077D69E::FE7DB76A1AFFCC23 A48F46A207996C65; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* A0B8B5F0C5E8D621, ::EDB6B240C077D69E::FE7DB76A1AFFCC23 F562DA1C00CE60C6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::EDB6B240C077D69E::FE7DB76A1AFFCC23))((::PBYTE)hIl2Cpp + E76932BE70884945__CTOR_OFFSET))(this, A0B8B5F0C5E8D621, F562DA1C00CE60C6);
	}
};
