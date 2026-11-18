#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeInitTransformBehavior.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x142CF560)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x142CF2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x142CF540)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitSetPos_TypeDefinitionIndex = 39639;

	class ESEmptyNodeInitSetPos : public ::MoleMole::EffectSimulate::ESEmptyNodeInitTransformBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETPOS_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
