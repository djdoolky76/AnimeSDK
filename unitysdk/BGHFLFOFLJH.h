#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMHGFFANPML.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BGHFLFOFLJH__CTOR_OFFSET UNITYSDK_OFFSET(0x7C9650)

inline static constexpr unsigned int BGHFLFOFLJH_TypeDefinitionIndex = 64884;

struct alignas(4) BGHFLFOFLJH
{
	::OMHGFFANPML NOOLOILNGPL; // 0x10
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x14

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::OMHGFFANPML OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::OMHGFFANPML))((::PBYTE)hIl2Cpp + BGHFLFOFLJH__CTOR_OFFSET))(this, OHOGDOMNHNK, OBNIAHNMHPF);
	}
};
