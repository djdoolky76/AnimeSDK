#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESMatTexUVAnimation_AGJEHJGCPBB.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::EffectSimulate { class UVCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_ACHCPCABEBM_OFFSET UNITYSDK_OFFSET(0x180CDD80)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_CNAPEDKLBFE_OFFSET UNITYSDK_OFFSET(0x180CEC10)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_DLDPKDBONAJ_OFFSET UNITYSDK_OFFSET(0x180CDE00)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_EHJBLFNPNML_OFFSET UNITYSDK_OFFSET(0x180CE750)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_FOFNJCIGEFM_OFFSET UNITYSDK_OFFSET(0x180CE010)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CEA80)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_HFOEDKBHNJL_OFFSET UNITYSDK_OFFSET(0x180CE740)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_IIKHBHEDFIF_OFFSET UNITYSDK_OFFSET(0x180CE230)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_KGHBBDNMFDE_OFFSET UNITYSDK_OFFSET(0x180CE0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_LKGDJCGMALD_OFFSET UNITYSDK_OFFSET(0x180CECD0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_MEKOCMKPLKD_OFFSET UNITYSDK_OFFSET(0x180CE050)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_OPAICKNDIAF_OFFSET UNITYSDK_OFFSET(0x180CE170)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CEAD0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE830)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE910)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET UNITYSDK_OFFSET(0x180CE9F0)
#define MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x180CEB60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESMatTexUVAnimation_TypeDefinitionIndex = 46266;

	class ESMatTexUVAnimation
	{
	public:
		::System::String* m_sSetPropName; // 0xB8
		::System::Single xBaseVal; // 0xC0
		::System::Single yBaseVal; // 0xC4
		::System::Single zBaseVal; // 0xC8
		::System::Single wBaseVal; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 ACHCPCABEBM(::UnityEngine::Vector4 GEGOALONGBI, ::UnityEngine::NAPBatch::BatchItemValueType& LOACBJBANNC)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::NAPBatch::BatchItemValueType&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_ACHCPCABEBM_OFFSET))(this, GEGOALONGBI, LOACBJBANNC);
		}

		::UnityEngine::Vector4 DLDPKDBONAJ()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_DLDPKDBONAJ_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* FOFNJCIGEFM()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_FOFNJCIGEFM_OFFSET))(this);
		}

		::System::Void MEKOCMKPLKD(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB, ::UnityEngine::Vector4 GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_MEKOCMKPLKD_OFFSET))(this, IKFBHKAEKDB, GEGOALONGBI);
		}

		::UnityEngine::Vector4 KGHBBDNMFDE(::UnityEngine::MaterialPropertyBlock* IKFBHKAEKDB)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_KGHBBDNMFDE_OFFSET))(this, IKFBHKAEKDB);
		}

		::System::Void OPAICKNDIAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_OPAICKNDIAF_OFFSET))(this);
		}

		::System::String* IIKHBHEDFIF(::MoleMole::EffectSimulate::UVCurve* GIMHHMOMJBI, ::System::Single AHAFNGEDPLI, ::System::Single GEGOALONGBI, ::System::Int32 GEJCKFFFKCL)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::EffectSimulate::UVCurve*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_IIKHBHEDFIF_OFFSET))(this, GIMHHMOMJBI, AHAFNGEDPLI, GEGOALONGBI, GEJCKFFFKCL);
		}

		::System::Single get_xKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_XKEYFRAME_OFFSET))(this);
		}

		::System::Void set_xKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_XKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_yKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_YKEYFRAME_OFFSET))(this);
		}

		::System::Void set_yKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_YKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_zKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_ZKEYFRAME_OFFSET))(this);
		}

		::System::Void set_zKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_ZKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Single get_wKeyFrame()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_GET_WKEYFRAME_OFFSET))(this);
		}

		::System::Void set_wKeyFrame(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_SET_WKEYFRAME_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Void EHJBLFNPNML(::UnityEngine::AnimationCurve* PAAFCGCBADL, ::System::Single MPAMOGGNEEM, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_AGJEHJGCPBB& param_2)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_AGJEHJGCPBB&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_EHJBLFNPNML_OFFSET))(PAAFCGCBADL, MPAMOGGNEEM, param_2);
		}

		::System::Void CNAPEDKLBFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_CNAPEDKLBFE_OFFSET))(this);
		}

		static ::System::Single HFOEDKBHNJL(::System::Single EHPJNLMOPAL, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_AGJEHJGCPBB& param_1)
		{
			return ((::System::Single(*)(::System::Single, ::MoleMole::EffectSimulate::ESMatTexUVAnimation_AGJEHJGCPBB&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_HFOEDKBHNJL_OFFSET))(EHPJNLMOPAL, param_1);
		}

		::System::Boolean LKGDJCGMALD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESMATTEXUVANIMATION_LKGDJCGMALD_OFFSET))(this);
		}
	};
}
