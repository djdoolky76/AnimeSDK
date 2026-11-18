#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatFloatAnimation_JONMJGBCFIH.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class FloatCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_ACHCPCABEBM_OFFSET UNITYSDK_OFFSET(0x19B36FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_DLDPKDBONAJ_OFFSET UNITYSDK_OFFSET(0x19B37030)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_EPHLDGCMPGA_OFFSET UNITYSDK_OFFSET(0x19B37420)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x19B375B0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_GDKDOHEHBNA_OFFSET UNITYSDK_OFFSET(0x19B37430)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19B375F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_IIKHBHEDFIF_OFFSET UNITYSDK_OFFSET(0x19B37220)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_IKFFPJCBECD_OFFSET UNITYSDK_OFFSET(0x19B37760)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_KGHBBDNMFDE_OFFSET UNITYSDK_OFFSET(0x19B37540)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_MEKOCMKPLKD_OFFSET UNITYSDK_OFFSET(0x19B374C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x19B37630)
#define MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19B376C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatFloatAnimation_TypeDefinitionIndex = 53857;

	class ESMatFloatAnimation
	{
	public:
		::System::Single xBaseVal; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 ACHCPCABEBM(::System::Single GEGOALONGBI, ::UnityEngine::NAPBatch::BatchItemValueType& LOACBJBANNC)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::UnityEngine::NAPBatch::BatchItemValueType&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_ACHCPCABEBM_OFFSET))(this, GEGOALONGBI, LOACBJBANNC);
		}

		::System::Single DLDPKDBONAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_DLDPKDBONAJ_OFFSET))(this);
		}

		::System::String* IIKHBHEDFIF(::MoleMole::EffectSimulate::FloatCurve* GIMHHMOMJBI, ::System::Single AHAFNGEDPLI, ::System::Single GEGOALONGBI, ::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::FloatCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_IIKHBHEDFIF_OFFSET))(this, GIMHHMOMJBI, AHAFNGEDPLI, GEGOALONGBI, GEJCKFFFKCL);
		}

		::System::Void MEKOCMKPLKD(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB, ::System::Single GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_MEKOCMKPLKD_OFFSET))(this, IKFBHKAEKDB, GEGOALONGBI);
		}

		::System::Single KGHBBDNMFDE(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_KGHBBDNMFDE_OFFSET))(this, IKFBHKAEKDB);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_SET_XKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Void GDKDOHEHBNA(::UnityEngine::AnimationCurve* PAAFCGCBADL, ::System::Single MPAMOGGNEEM, ::MoleMole::EffectSimulate::ESMatFloatAnimation_JONMJGBCFIH& param_2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESMatFloatAnimation_JONMJGBCFIH&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_GDKDOHEHBNA_OFFSET))(PAAFCGCBADL, MPAMOGGNEEM, param_2);
		}

		static ::System::Single EPHLDGCMPGA(::System::Single EHPJNLMOPAL, ::MoleMole::EffectSimulate::ESMatFloatAnimation_JONMJGBCFIH& param_1)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESMatFloatAnimation_JONMJGBCFIH&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_EPHLDGCMPGA_OFFSET))(EHPJNLMOPAL, param_1);
		}

		::System::Boolean IKFFPJCBECD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATFLOATANIMATION_IKFFPJCBECD_OFFSET))(this);
		}
	};
}
