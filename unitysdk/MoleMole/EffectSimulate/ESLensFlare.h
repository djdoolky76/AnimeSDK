#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareComponentSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class LensFlareDataSRP_NativeSRP; }

#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x180CCB10)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_GET_LENSFLAREDATASHOWER_OFFSET UNITYSDK_OFFSET(0x180CCCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x180CD060)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x180CD050)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x180CC6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_SET_LENSFLAREDATASHOWER_OFFSET UNITYSDK_OFFSET(0x180CCD40)
#define MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x180CCEC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLensFlare_TypeDefinitionIndex = 50549;

	class ESLensFlare : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* m_stCom; // 0x58
		::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP* comCache; // 0x60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* intensity; // 0x68
		::MoleMole::EffectSimulate::FloatKeyframeCurve* scale; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* get_lensFlareDataShower()
		{
			return ((::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_GET_LENSFLAREDATASHOWER_OFFSET))(this);
		}

		::System::Void set_lensFlareDataShower(::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::LensFlareDataSRP_NativeSRP*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_SET_LENSFLAREDATASHOWER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLENSFLARE_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
