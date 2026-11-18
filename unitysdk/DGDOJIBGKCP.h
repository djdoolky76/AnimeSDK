#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DGDOJIBGKCP_CGELNMKAPJP_OFFSET UNITYSDK_OFFSET(0x7CB5C0)
#define DGDOJIBGKCP_OBJPGJPGPEA_OFFSET UNITYSDK_OFFSET(0x3F2230)

inline static constexpr unsigned int DGDOJIBGKCP_TypeDefinitionIndex = 74837;

struct alignas(4) DGDOJIBGKCP
{
	::System::Single NCCDJLDKFGA; // 0x10
	::UnityEngine::Vector3 _CBKNEHHKKFK_k__BackingField; // 0x14

	::UnityEngine::Vector3 OBJPGJPGPEA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDOJIBGKCP_OBJPGJPGPEA_OFFSET))(this);
	}

	::System::Void CGELNMKAPJP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DGDOJIBGKCP_CGELNMKAPJP_OFFSET))(this, EGEGIMGMJHN);
	}
};
