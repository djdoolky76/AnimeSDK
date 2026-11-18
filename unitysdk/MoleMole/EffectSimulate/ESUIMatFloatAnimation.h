#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESUIMatFloatAnimation_NDJHKIAGJMC.h"

namespace MoleMole::EffectSimulate { class FloatCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_DLDPKDBONAJ_OFFSET UNITYSDK_OFFSET(0x12B2B740)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x12B2BC70)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x12B2BCB0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_HGKONHBBDNP_OFFSET UNITYSDK_OFFSET(0x12B2BAE0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_IIKHBHEDFIF_OFFSET UNITYSDK_OFFSET(0x12B2B8D0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_IKFFPJCBECD_OFFSET UNITYSDK_OFFSET(0x12B2BE10)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_KGHBBDNMFDE_OFFSET UNITYSDK_OFFSET(0x12B2BC00)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_LGFOHFFGAHD_OFFSET UNITYSDK_OFFSET(0x12B2BAD0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_MEKOCMKPLKD_OFFSET UNITYSDK_OFFSET(0x12B2BB70)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x12B2BCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2BD80)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESUIMatFloatAnimation_TypeDefinitionIndex = 77257;

	class ESUIMatFloatAnimation
	{
	public:
		::System::Single xBaseVal; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single DLDPKDBONAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_DLDPKDBONAJ_OFFSET))(this);
		}

		::System::String* IIKHBHEDFIF(::MoleMole::EffectSimulate::FloatCurve* GIMHHMOMJBI, ::System::Single AHAFNGEDPLI, ::System::Single GEGOALONGBI, ::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_IIKHBHEDFIF_OFFSET))(this, GIMHHMOMJBI, AHAFNGEDPLI, GEGOALONGBI, GEJCKFFFKCL);
		}

		::System::Void MEKOCMKPLKD(::UnityEngine::Material* KNNDDLMOKCG, ::System::Single GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_MEKOCMKPLKD_OFFSET))(this, KNNDDLMOKCG, GEGOALONGBI);
		}

		::System::Single KGHBBDNMFDE(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_KGHBBDNMFDE_OFFSET))(this, KNNDDLMOKCG);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_SET_XKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean IKFFPJCBECD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_IKFFPJCBECD_OFFSET))(this);
		}

		static ::System::Void HGKONHBBDNP(::UnityEngine::AnimationCurve* PAAFCGCBADL, ::System::Single MPAMOGGNEEM, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_NDJHKIAGJMC& param_2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_NDJHKIAGJMC&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_HGKONHBBDNP_OFFSET))(PAAFCGCBADL, MPAMOGGNEEM, param_2);
		}

		static ::System::Single LGFOHFFGAHD(::System::Single EHPJNLMOPAL, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_NDJHKIAGJMC& param_1)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESUIMatFloatAnimation_NDJHKIAGJMC&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESUIMATFLOATANIMATION_LGFOHFFGAHD_OFFSET))(EHPJNLMOPAL, param_1);
		}
	};
}
