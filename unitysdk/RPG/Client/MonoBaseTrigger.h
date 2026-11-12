#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoTriggerRegion; }

#define RPG_CLIENT_MONOBASETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C42C0)
#define RPG_CLIENT_MONOBASETRIGGER_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0xE1C4280)
#define RPG_CLIENT_MONOBASETRIGGER_START_OFFSET UNITYSDK_OFFSET(0xE1C4130)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBaseTrigger_TypeDefinitionIndex = 70859;

	class MonoBaseTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoTriggerRegion* ECBAOBGDJBL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_START_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBASETRIGGER_MEJPCPBPMNM_OFFSET))(this);
		}

	};
}
