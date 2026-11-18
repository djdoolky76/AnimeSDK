#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOGGGIHCAE_CIFBPIABDBJ.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOBASEPERPSTAGE_START_OFFSET UNITYSDK_OFFSET(0x14AF7610)
#define MOLEMOLE_MONOBASEPERPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF7650)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBasePerpStage_TypeDefinitionIndex = 90069;

	class MonoBasePerpStage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AIOGGGIHCAE_CIFBPIABDBJ gameType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* bornPosName; // 0x20
		::System::Boolean IsActLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBASEPERPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBASEPERPSTAGE_START_OFFSET))(this);
		}
	};
}
