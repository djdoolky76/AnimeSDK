#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class GameObject; }

#define GOFNGBNFAKN_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x743B60)

inline static constexpr unsigned int GOFNGBNFAKN_TypeDefinitionIndex = 56989;

struct alignas(8) GOFNGBNFAKN
{
	::UnityEngine::Vector3 JHCILKIBENN; // 0x10
	::UnityEngine::Vector3 MMEOKMHLAKA; // 0x1C
	::UnityEngine::GameObject* AIJKIFIEKFJ; // 0x28
	::UnityEngine::Vector3 JJBJAHCALBE; // 0x30

	::System::Void JMDEKPONKMF(::UnityEngine::RaycastHit& OFLHPPDJLNL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + GOFNGBNFAKN_JMDEKPONKMF_OFFSET))(this, OFLHPPDJLNL);
	}
};
