#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CHLIAIJFBJF;
class KLEFGGIHGMI;
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define RPG_CLIENT_IRIRUNTIMESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xD33C190)
#define RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET UNITYSDK_OFFSET(0xD33C0D0)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD33C070)
#define RPG_CLIENT_IRIRUNTIMESTATE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD33C010)
#define RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET UNITYSDK_OFFSET(0xD33C140)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIRuntimeState_TypeDefinitionIndex = 68892;

	class IRIRuntimeState : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CHLIAIJFBJF* BHHAMGJHDON; // 0x18
		::RPG::Client::OpenWorld::StreamingItemData* GCHGILECIEC; // 0x20
		::KLEFGGIHGMI* FKBJADHDHFO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::OpenWorld::StreamingItemData* a1, ::CHLIAIJFBJF* a2, ::KLEFGGIHGMI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::CHLIAIJFBJF*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIRUNTIMESTATE_UNINIT_OFFSET))(this);
		}

	};
}
