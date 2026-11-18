#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class COCJHGGDBCA;

#define NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER_SETNPCENTITY_OFFSET UNITYSDK_OFFSET(0xEEAF030)
#define NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xEEAF080)

namespace NPCCrowd
{
	inline static constexpr unsigned int MonoNPCCrowdEntityRuntimeDebugger_TypeDefinitionIndex = 47766;

	class MonoNPCCrowdEntityRuntimeDebugger : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 INVALID_ID = 0x0; // 0x0
		::COCJHGGDBCA* entity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER__CTOR_OFFSET))(this);
		}

		::System::Void SetNPCEntity(::COCJHGGDBCA* crowd)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_MONONPCCROWDENTITYRUNTIMEDEBUGGER_SETNPCENTITY_OFFSET))(this, crowd);
		}
	};
}
