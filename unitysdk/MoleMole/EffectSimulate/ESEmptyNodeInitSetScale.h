#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeInitTransformBehavior.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x16203620)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x16203360)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x16203600)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitSetScale_TypeDefinitionIndex = 83881;

	class ESEmptyNodeInitSetScale : public ::MoleMole::EffectSimulate::ESEmptyNodeInitTransformBehavior
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETSCALE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
