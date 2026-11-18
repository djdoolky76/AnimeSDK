#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define KANECPEBLOO_ACLNHPDHDNB_OFFSET UNITYSDK_OFFSET(0x176365D0)
#define KANECPEBLOO_FFNKPEBHIJM_OFFSET UNITYSDK_OFFSET(0x17636410)
#define KANECPEBLOO_HLNKIPBCBOL_OFFSET UNITYSDK_OFFSET(0x17635FC0)

inline static constexpr unsigned int KANECPEBLOO_TypeDefinitionIndex = 79568;

class KANECPEBLOO : public ::System::Object
{
public:
	static ::System::Void HLNKIPBCBOL(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KANECPEBLOO_HLNKIPBCBOL_OFFSET))(KCNOHOOPNAH);
	}

	static ::System::Void FFNKPEBHIJM(::UnityEngine::GameObject* EIJEBBIIOEE)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KANECPEBLOO_FFNKPEBHIJM_OFFSET))(EIJEBBIIOEE);
	}

	static ::System::Void ACLNHPDHDNB(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KANECPEBLOO_ACLNHPDHDNB_OFFSET))(KCNOHOOPNAH);
	}
};
