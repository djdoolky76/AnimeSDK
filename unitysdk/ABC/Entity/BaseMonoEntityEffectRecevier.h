#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_ENTITY_BASEMONOENTITYEFFECTRECEVIER_A7CB2D52C443A5E6_OFFSET UNITYSDK_OFFSET(0x2397C70)
#define ABC_ENTITY_BASEMONOENTITYEFFECTRECEVIER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Entity
{
	inline static constexpr unsigned int BaseMonoEntityEffectRecevier_TypeDefinitionIndex = 3591;

	class BaseMonoEntityEffectRecevier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void A7CB2D52C443A5E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_BASEMONOENTITYEFFECTRECEVIER_A7CB2D52C443A5E6_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_BASEMONOENTITYEFFECTRECEVIER__CTOR_OFFSET))(this);
		}
	};
}
