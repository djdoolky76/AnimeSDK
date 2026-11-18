#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOHOLLOWEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFFD40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHollowEffectConfig_TypeDefinitionIndex = 67687;

	class MonoHollowEffectConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single EffectLastTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHOLLOWEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
