#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatVectorAnimation_OPGFPEGMFMJ.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class Vector4Curve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_ACHCPCABEBM_OFFSET UNITYSDK_OFFSET(0x1A06C220)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_DLDPKDBONAJ_OFFSET UNITYSDK_OFFSET(0x1A06C2A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_EPHLDGCMPGA_OFFSET UNITYSDK_OFFSET(0x1A06C9C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x1A06CB80)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GDKDOHEHBNA_OFFSET UNITYSDK_OFFSET(0x1A06C9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CE60)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CBC0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CD80)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_IIKHBHEDFIF_OFFSET UNITYSDK_OFFSET(0x1A06C4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_KGHBBDNMFDE_OFFSET UNITYSDK_OFFSET(0x1A06CAE0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_LKGDJCGMALD_OFFSET UNITYSDK_OFFSET(0x1A06CFE0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_MEKOCMKPLKD_OFFSET UNITYSDK_OFFSET(0x1A06CA60)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CC10)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x1A06CDD0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06CF40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatVectorAnimation_TypeDefinitionIndex = 86842;

	class ESMatVectorAnimation
	{
	public:
		::System::Single xBaseVal; // 0xB8
		::System::Single yBaseVal; // 0xBC
		::System::Single zBaseVal; // 0xC0
		::System::Single wBaseVal; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 ACHCPCABEBM(::UnityEngine::Vector4 GEGOALONGBI, ::UnityEngine::NAPBatch::BatchItemValueType& LOACBJBANNC)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::NAPBatch::BatchItemValueType&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_ACHCPCABEBM_OFFSET))(this, GEGOALONGBI, LOACBJBANNC);
		}

		::UnityEngine::Vector4 DLDPKDBONAJ()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_DLDPKDBONAJ_OFFSET))(this);
		}

		::System::String* IIKHBHEDFIF(::MoleMole::EffectSimulate::Vector4Curve* GIMHHMOMJBI, ::System::Single AHAFNGEDPLI, ::System::Single GEGOALONGBI, ::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::Vector4Curve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_IIKHBHEDFIF_OFFSET))(this, GIMHHMOMJBI, AHAFNGEDPLI, GEGOALONGBI, GEJCKFFFKCL);
		}

		::System::Void MEKOCMKPLKD(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB, ::UnityEngine::Vector4 GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_MEKOCMKPLKD_OFFSET))(this, IKFBHKAEKDB, GEGOALONGBI);
		}

		::UnityEngine::Vector4 KGHBBDNMFDE(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_KGHBBDNMFDE_OFFSET))(this, IKFBHKAEKDB);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_XKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_YKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_ZKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_SET_WKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Single EPHLDGCMPGA(::System::Single EHPJNLMOPAL, ::MoleMole::EffectSimulate::ESMatVectorAnimation_OPGFPEGMFMJ& param_1)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESMatVectorAnimation_OPGFPEGMFMJ&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_EPHLDGCMPGA_OFFSET))(EHPJNLMOPAL, param_1);
		}

		::System::Boolean LKGDJCGMALD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_LKGDJCGMALD_OFFSET))(this);
		}

		static ::System::Void GDKDOHEHBNA(::UnityEngine::AnimationCurve* PAAFCGCBADL, ::System::Single MPAMOGGNEEM, ::MoleMole::EffectSimulate::ESMatVectorAnimation_OPGFPEGMFMJ& param_2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESMatVectorAnimation_OPGFPEGMFMJ&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATVECTORANIMATION_GDKDOHEHBNA_OFFSET))(PAAFCGCBADL, MPAMOGGNEEM, param_2);
		}
	};
}
