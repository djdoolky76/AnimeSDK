#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

namespace MoleMole::EffectSimulate { class EffectMeshRendererBillboardComponent; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_ENLHJJEFIAJ_OFFSET UNITYSDK_OFFSET(0x1BA62890)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_FHMBABCCFCG_OFFSET UNITYSDK_OFFSET(0x1BA627A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_KDCHBGOMCMG_OFFSET UNITYSDK_OFFSET(0x1BA62BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_LKGOKMKJCAK_OFFSET UNITYSDK_OFFSET(0x1BA628F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x1BA62B50)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_NJIEHPFKNDB_OFFSET UNITYSDK_OFFSET(0x1BA62980)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1BA624F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA628D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMeshRenderer_TypeDefinitionIndex = 38936;

	class ESMeshRenderer : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* m_stBillboardCom; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void FHMBABCCFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_FHMBABCCFCG_OFFSET))(this);
		}

		::System::Boolean ENLHJJEFIAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_ENLHJJEFIAJ_OFFSET))(this);
		}

		::System::Void LKGOKMKJCAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_LKGOKMKJCAK_OFFSET))(this);
		}

		::System::Void NJIEHPFKNDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_NJIEHPFKNDB_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean KDCHBGOMCMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMESHRENDERER_KDCHBGOMCMG_OFFSET))(this);
		}
	};
}
