#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BFJJAGFDDGA_OFFSET UNITYSDK_OFFSET(0x1B8CAE70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BJKGAIIEDLA_OFFSET UNITYSDK_OFFSET(0x1B8CA910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BKPIJPODGBM_OFFSET UNITYSDK_OFFSET(0x1B8C9F70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BNGFEGAGHEB_OFFSET UNITYSDK_OFFSET(0x1B8CB580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BPCFCEBMEPJ_1_OFFSET UNITYSDK_OFFSET(0x1B8C9F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BPCFCEBMEPJ_OFFSET UNITYSDK_OFFSET(0x1B8C9F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_10_OFFSET UNITYSDK_OFFSET(0x1B8CBE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_1_OFFSET UNITYSDK_OFFSET(0x1B8CA8F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_2_OFFSET UNITYSDK_OFFSET(0x1B8CA900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_3_OFFSET UNITYSDK_OFFSET(0x1B8CB430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_5_OFFSET UNITYSDK_OFFSET(0x1B8CB6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_7_OFFSET UNITYSDK_OFFSET(0x1B8CB7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_8_OFFSET UNITYSDK_OFFSET(0x1B8CBCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_9_OFFSET UNITYSDK_OFFSET(0x1B8CB130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_OFFSET UNITYSDK_OFFSET(0x1B8CA880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CANOPGBDBGF_OFFSET UNITYSDK_OFFSET(0x1B8C95F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CGOGAFFCBDG_OFFSET UNITYSDK_OFFSET(0x1B8CAE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_1_OFFSET UNITYSDK_OFFSET(0x1B8C9EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_2_OFFSET UNITYSDK_OFFSET(0x1B8C9EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_OFFSET UNITYSDK_OFFSET(0x1B8C9E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CNLNDJBIEEE_OFFSET UNITYSDK_OFFSET(0x1B8C9F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_COLOKDFJIFL_OFFSET UNITYSDK_OFFSET(0x1B8CC0B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CONJBGICJOG_OFFSET UNITYSDK_OFFSET(0x1B8CA1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_1_OFFSET UNITYSDK_OFFSET(0x1B8CA890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_2_OFFSET UNITYSDK_OFFSET(0x1B8CB260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_3_OFFSET UNITYSDK_OFFSET(0x1B8CB3A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_4_OFFSET UNITYSDK_OFFSET(0x1B8CB3B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_5_OFFSET UNITYSDK_OFFSET(0x1B8CB3F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_6_OFFSET UNITYSDK_OFFSET(0x1B8CB690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_7_OFFSET UNITYSDK_OFFSET(0x1B8CB920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_8_OFFSET UNITYSDK_OFFSET(0x1B8CBB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_9_OFFSET UNITYSDK_OFFSET(0x1B8CC0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_EEFKECPNBFF_OFFSET UNITYSDK_OFFSET(0x1B8C91D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_EGFALNLEJHH_OFFSET UNITYSDK_OFFSET(0x1B8C90A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GCAMMIAOEFA_OFFSET UNITYSDK_OFFSET(0x1B8CA690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GENELMLDHNH_OFFSET UNITYSDK_OFFSET(0x1B8C9F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1B8C9FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GLGHBNEKAGD_OFFSET UNITYSDK_OFFSET(0x1B8C9330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_HOGDIIDDHJP_OFFSET UNITYSDK_OFFSET(0x1B8C9F90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_JHHKIEPELJM_OFFSET UNITYSDK_OFFSET(0x1B8C9F80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_JJKKIPAOAGE_OFFSET UNITYSDK_OFFSET(0x1B8C9F60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KJKBAANHIAB_OFFSET UNITYSDK_OFFSET(0x1B8C9F50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KKEIDPBDGHA_OFFSET UNITYSDK_OFFSET(0x1B8C8F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KKENNAOMJFO_OFFSET UNITYSDK_OFFSET(0x1B8CB950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KOCFLKFINKG_OFFSET UNITYSDK_OFFSET(0x1B8C9490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LMGDJDEKMAH_OFFSET UNITYSDK_OFFSET(0x1B8C9F00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LNGBAHKFCOM_OFFSET UNITYSDK_OFFSET(0x1B8CA6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LOOCJEPCMJH_OFFSET UNITYSDK_OFFSET(0x1B8CAE90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_MHELGKFFODD_OFFSET UNITYSDK_OFFSET(0x1B8C91E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_NIHHOMOIPMF_OFFSET UNITYSDK_OFFSET(0x1B8CAEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_NMGCDNHJNIF_OFFSET UNITYSDK_OFFSET(0x1B8C9FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_10_OFFSET UNITYSDK_OFFSET(0x1B8CBF80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_1_OFFSET UNITYSDK_OFFSET(0x1B8CAEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_2_OFFSET UNITYSDK_OFFSET(0x1B8CAEC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_3_OFFSET UNITYSDK_OFFSET(0x1B8CAFF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_4_OFFSET UNITYSDK_OFFSET(0x1B8CB270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_6_OFFSET UNITYSDK_OFFSET(0x1B8CB570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_8_OFFSET UNITYSDK_OFFSET(0x1B8CBBA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_9_OFFSET UNITYSDK_OFFSET(0x1B8CBE40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_OFFSET UNITYSDK_OFFSET(0x1B8CAD00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PEEFHJLAPID_OFFSET UNITYSDK_OFFSET(0x1B8C9FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B8C9990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1B8C9720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8CA260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8CA1E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessBehavior_TypeDefinitionIndex = 43946;

	class ESPostProcessBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*>** StaticGet_s_mapVolumeComCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x388B0);
		}
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>** StaticGet_OnScreenEffectFieldHandleTypeDropdown_NonKeyframeFieldVersion()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x388B8);
		}
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>** StaticGet_OnScreenEffectFieldHandleTypeDropdown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Config::ScreenEffectFieldHandleType>**)Il2CppClass::FromTypeDefinitionIndex(ESPostProcessBehavior_TypeDefinitionIndex)->GetStaticField(0x388C0);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* OTHER_GROUP_NAME; // 0x0
		// static const ::System::String* POST_PROCESS_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* POST_PROCESS_TEMP_SELECT_SPLIT_CHAR; // 0x0
		::System::String* _tempSelect; // 0x58
		::System::String* fadeInCurve; // 0x60
		::System::String* fadeOutCurve; // 0x68
		::System::Int32 priority; // 0x70
		::System::Boolean enableInterrupt; // 0x74
		::System::Boolean enablePermanent; // 0x75
		::System::Boolean canPlayInCoopNonAuthority; // 0x76
		::System::Boolean ignoreTimescale; // 0x77
		::System::Boolean ignoreWorldTimescale; // 0x78
		::System::Boolean ignoreOwnerTimescale; // 0x79
		::System::Boolean ignoreWitchTimescale; // 0x7A
		::System::Boolean holdPermanently; // 0x7B
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::Volume* m_stVolume; // 0x80
		::System::Single m_fTimelineTrueTime; // 0x88
		::System::Single m_fTimelineClipIn; // 0x8C
		::System::Single m_fTimelineMaxDuration; // 0x90
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* m_stFadeInCurve; // 0x98
		::UnityEngine::AnimationCurve* m_stFadeOutCurve; // 0xA0
		::System::Boolean m_bVolComPreIsActive; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Single KKEIDPBDGHA(::System::Single& HIIOCANBKAM, ::System::Single& MDPPNMIPDMP)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KKEIDPBDGHA_OFFSET))(this, HIIOCANBKAM, MDPPNMIPDMP);
		}

		::System::Boolean EEFKECPNBFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_EEFKECPNBFF_OFFSET))(this);
		}

		::System::Single MHELGKFFODD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_MHELGKFFODD_OFFSET))(this);
		}

		::System::Single GLGHBNEKAGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GLGHBNEKAGD_OFFSET))(this);
		}

		::System::Single KOCFLKFINKG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KOCFLKFINKG_OFFSET))(this);
		}

		::System::Boolean CANOPGBDBGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CANOPGBDBGF_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* CJIDLIAFPPO(::System::String* BJMNGDLEBEN, ::System::String* JIGIKDEFPOD, ::System::Single JOFGIANGHMK, ::UnityEngine::ScriptableObject*& NGLKIKLLLFL, ::System::Boolean NGCBMFJPDJC, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GJDMKDBLOFL, ::System::String* PNNNGKLKFLG)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::UnityEngine::ScriptableObject*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_OFFSET))(this, BJMNGDLEBEN, JIGIKDEFPOD, JOFGIANGHMK, NGLKIKLLLFL, NGCBMFJPDJC, GJDMKDBLOFL, PNNNGKLKFLG);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* CJIDLIAFPPO_1(::System::String* LIFIDOINPKP, ::System::String* AACHCKBMDJP, ::System::Single JOFGIANGHMK, ::UnityEngine::ScriptableObject*& JKDDDBANHKB, ::System::String*& IMILJHBDOGJ)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_1_OFFSET))(this, LIFIDOINPKP, AACHCKBMDJP, JOFGIANGHMK, JKDDDBANHKB, IMILJHBDOGJ);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* CJIDLIAFPPO_2(::System::String* LIFIDOINPKP, ::System::String* AACHCKBMDJP, ::System::Single JOFGIANGHMK, ::MoleMole::Config::ConfigEntityScreenEffectBase*& NICPODMKBEG, ::UnityEngine::ScriptableObject*& JKDDDBANHKB, ::MoleMole::Config::ConfigEntityScreenEffectBase*& NJKEKKFGAKN, ::UnityEngine::ScriptableObject*& KCPGNBJBBJL, ::System::String*& IMILJHBDOGJ)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CJIDLIAFPPO_2_OFFSET))(this, LIFIDOINPKP, AACHCKBMDJP, JOFGIANGHMK, NICPODMKBEG, JKDDDBANHKB, NJKEKKFGAKN, KCPGNBJBBJL, IMILJHBDOGJ);
		}

		::System::Void LMGDJDEKMAH(::MoleMole::Config::ConfigEntityScreenEffectBase* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LMGDJDEKMAH_OFFSET))(this, LJBPECKCCEA);
		}

		::System::Boolean GENELMLDHNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GENELMLDHNH_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* CNLNDJBIEEE()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CNLNDJBIEEE_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* BPCFCEBMEPJ(::System::String* LIFIDOINPKP)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BPCFCEBMEPJ_OFFSET))(this, LIFIDOINPKP);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* BPCFCEBMEPJ_1(::System::String* OIIHCACKLHD, ::System::String* LIFIDOINPKP)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BPCFCEBMEPJ_1_OFFSET))(this, OIIHCACKLHD, LIFIDOINPKP);
		}

		::System::Type* KJKBAANHIAB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KJKBAANHIAB_OFFSET))(this);
		}

		::System::Type* JJKKIPAOAGE()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_JJKKIPAOAGE_OFFSET))(this);
		}

		::System::String* BKPIJPODGBM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BKPIJPODGBM_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType JHHKIEPELJM()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_JHHKIEPELJM_OFFSET))(this);
		}

		::System::Void HOGDIIDDHJP(::System::Single CLMNLPKFBFA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_HOGDIIDDHJP_OFFSET))(this, CLMNLPKFBFA);
		}

		::System::Void PEEFHJLAPID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_PEEFHJLAPID_OFFSET))(this);
		}

		::System::Void NMGCDNHJNIF(::System::Single DEECFELCBJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_NMGCDNHJNIF_OFFSET))(this, DEECFELCBJK);
		}

		::UnityEngine::Rendering::Volume* get_Volume()
		{
			return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GET_VOLUME_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* CONJBGICJOG()
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CONJBGICJOG_OFFSET))(this);
		}

		::System::Void GCAMMIAOEFA(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_GCAMMIAOEFA_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Boolean EGFALNLEJHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_EGFALNLEJHH_OFFSET))(this);
		}

		::System::Boolean LNGBAHKFCOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LNGBAHKFCOM_OFFSET))(this);
		}

		::UnityEngine::Texture* CAGKBJEMGNI(::UnityEngine::Texture* HKBIOEKPFDJ, ::UnityEngine::Texture* OMBOLOHFOLO)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Vector3 DFKPJLIBJOI_1(::UnityEngine::Vector3 HKBIOEKPFDJ, ::UnityEngine::Vector3 OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_1_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Gradient* CAGKBJEMGNI_1(::UnityEngine::Gradient* HKBIOEKPFDJ, ::UnityEngine::Gradient* OMBOLOHFOLO)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_1_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Boolean CAGKBJEMGNI_2(::System::Boolean HKBIOEKPFDJ, ::System::Boolean OMBOLOHFOLO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_2_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Void BJKGAIIEDLA(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Single DJBEGONLAGI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BJKGAIIEDLA_OFFSET))(this, PHLFMCCNEGD, DJBEGONLAGI);
		}

		::UnityEngine::Vector2 OIJDDJBJBCP(::UnityEngine::Vector2 HKBIOEKPFDJ, ::UnityEngine::Vector2 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Void CGOGAFFCBDG(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CGOGAFFCBDG_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Single BFJJAGFDDGA(::System::Boolean GEGOALONGBI)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BFJJAGFDDGA_OFFSET))(this, GEGOALONGBI);
		}

		::System::Boolean LOOCJEPCMJH(::System::Single GEGOALONGBI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_LOOCJEPCMJH_OFFSET))(this, GEGOALONGBI);
		}

		::UnityEngine::Texture* OIJDDJBJBCP_1(::UnityEngine::Texture* HKBIOEKPFDJ, ::UnityEngine::Texture* OMBOLOHFOLO)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_1_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Void NIHHOMOIPMF(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_NIHHOMOIPMF_OFFSET))(this, AHAFNGEDPLI);
		}

		::UnityEngine::Color OIJDDJBJBCP_2(::UnityEngine::Color HKBIOEKPFDJ, ::UnityEngine::Color OMBOLOHFOLO)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_2_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Int32 OIJDDJBJBCP_3(::System::Int32 HKBIOEKPFDJ, ::System::Int32 OMBOLOHFOLO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_3_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Gradient* DFKPJLIBJOI_2(::UnityEngine::Gradient* HKBIOEKPFDJ, ::UnityEngine::Gradient* OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_2_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Vector4 OIJDDJBJBCP_4(::UnityEngine::Vector4 HKBIOEKPFDJ, ::UnityEngine::Vector4 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_4_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Boolean DFKPJLIBJOI_3(::System::Boolean HKBIOEKPFDJ, ::System::Boolean OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_3_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Color DFKPJLIBJOI_4(::UnityEngine::Color HKBIOEKPFDJ, ::UnityEngine::Color OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_4_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Vector4 DFKPJLIBJOI_5(::UnityEngine::Vector4 HKBIOEKPFDJ, ::UnityEngine::Vector4 OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_5_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::System::Int32 CAGKBJEMGNI_3(::System::Int32 HKBIOEKPFDJ, ::System::Int32 OMBOLOHFOLO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_3_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Gradient* OIJDDJBJBCP_6(::UnityEngine::Gradient* HKBIOEKPFDJ, ::UnityEngine::Gradient* OMBOLOHFOLO)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_6_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Boolean BNGFEGAGHEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_BNGFEGAGHEB_OFFSET))(this);
		}

		::UnityEngine::Texture* DFKPJLIBJOI_6(::UnityEngine::Texture* HKBIOEKPFDJ, ::UnityEngine::Texture* OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_6_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Vector2 CAGKBJEMGNI_5(::UnityEngine::Vector2 HKBIOEKPFDJ, ::UnityEngine::Vector2 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_5_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Vector4 CAGKBJEMGNI_7(::UnityEngine::Vector4 HKBIOEKPFDJ, ::UnityEngine::Vector4 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_7_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Single DFKPJLIBJOI_7(::System::Single HKBIOEKPFDJ, ::System::Single OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_7_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::System::Boolean KKENNAOMJFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_KKENNAOMJFO_OFFSET))(this);
		}

		::UnityEngine::Vector2 DFKPJLIBJOI_8(::UnityEngine::Vector2 HKBIOEKPFDJ, ::UnityEngine::Vector2 OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_8_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}

		::UnityEngine::Vector3 OIJDDJBJBCP_8(::UnityEngine::Vector3 HKBIOEKPFDJ, ::UnityEngine::Vector3 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_8_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Vector3 CAGKBJEMGNI_8(::UnityEngine::Vector3 HKBIOEKPFDJ, ::UnityEngine::Vector3 OMBOLOHFOLO)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_8_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Single CAGKBJEMGNI_9(::System::Single HKBIOEKPFDJ, ::System::Single OMBOLOHFOLO)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_9_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Boolean OIJDDJBJBCP_9(::System::Boolean HKBIOEKPFDJ, ::System::Boolean OMBOLOHFOLO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_9_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::UnityEngine::Color CAGKBJEMGNI_10(::UnityEngine::Color HKBIOEKPFDJ, ::UnityEngine::Color OMBOLOHFOLO)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_CAGKBJEMGNI_10_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Single OIJDDJBJBCP_10(::System::Single HKBIOEKPFDJ, ::System::Single OMBOLOHFOLO)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_OIJDDJBJBCP_10_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO);
		}

		::System::Void COLOKDFJIFL(::System::Single LFHAFHLKKAK, ::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_COLOKDFJIFL_OFFSET))(this, LFHAFHLKKAK, PBKKBBHOCLC);
		}

		::System::Int32 DFKPJLIBJOI_9(::System::Int32 HKBIOEKPFDJ, ::System::Int32 OMBOLOHFOLO, ::System::Single FOIKIGDJLKN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSBEHAVIOR_DFKPJLIBJOI_9_OFFSET))(this, HKBIOEKPFDJ, OMBOLOHFOLO, FOIKIGDJLKN);
		}
	};
}
