#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESEmptyNodeInitTransformBehavior.h"

namespace MoleMole::EffectSimulate { class EffectMeshRendererBillboardComponent; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x1B8C8B60)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1B8C8750)
#define MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C8B40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESEmptyNodeInitSetRot_TypeDefinitionIndex = 63156;

	class ESEmptyNodeInitSetRot : public ::MoleMole::EffectSimulate::ESEmptyNodeInitTransformBehavior
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* m_stBillboardCom; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESEMPTYNODEINITSETROT_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
