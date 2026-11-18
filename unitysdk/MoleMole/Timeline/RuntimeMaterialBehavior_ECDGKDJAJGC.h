#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialCompRecorderInfo; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ECDGKDJAJGC_PBPDHGLPEDM_OFFSET UNITYSDK_OFFSET(0x15AE9350)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ECDGKDJAJGC__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE8A20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior_ECDGKDJAJGC_TypeDefinitionIndex = 56338;

	class RuntimeMaterialBehavior_ECDGKDJAJGC : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* FJBENGODHLK; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ECDGKDJAJGC__CTOR_OFFSET))(this);
		}

		::System::Boolean PBPDHGLPEDM(::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo* PIPIEOFJBCP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ECDGKDJAJGC_PBPDHGLPEDM_OFFSET))(this, PIPIEOFJBCP);
		}
	};
}
