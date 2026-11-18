#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_BFCNFDIGEDK.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class DJAHFGLKCIJ;
class JGNFGDHCNLN;
class KAOHIFFJNFF;
namespace MoleMole::Config { class AnimatorEventEffectEntry; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_AbilityScriptParm; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_FollowControl; }
namespace SimpleJSON { class JSONNode; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_AAHEFLCOINE_OFFSET UNITYSDK_OFFSET(0x15AF9930)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ACKBIEPOLOA_OFFSET UNITYSDK_OFFSET(0x15AF7940)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ADDOLJJEPMP_OFFSET UNITYSDK_OFFSET(0x15AF7E60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_AMLLPABJJEC_OFFSET UNITYSDK_OFFSET(0x15AF65E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ANNGMPCAOFH_OFFSET UNITYSDK_OFFSET(0x15AF6CA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_BEMBIANKABF_OFFSET UNITYSDK_OFFSET(0x15AF7AA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_BMJCOHANHJP_OFFSET UNITYSDK_OFFSET(0x15AF27C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x15AF2AF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DFEPDCMILFB_1_OFFSET UNITYSDK_OFFSET(0x15AF46A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DFEPDCMILFB_OFFSET UNITYSDK_OFFSET(0x15AF9E40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DGBFKIKKFLD_OFFSET UNITYSDK_OFFSET(0x15AF8E20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFECJKOFFOD_OFFSET UNITYSDK_OFFSET(0x15AFA180)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EGKKOFJEJOL_OFFSET UNITYSDK_OFFSET(0x15AF82F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EIJGBLAJLPG_OFFSET UNITYSDK_OFFSET(0x15AFA310)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FJMKBFFAAHM_OFFSET UNITYSDK_OFFSET(0x15AF5CA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x15AF16C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GCECOHPFALI_OFFSET UNITYSDK_OFFSET(0x15AF8DD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0x15AF2AD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x15AF1670)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x15AF15C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x15AF15E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x15AF1660)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GIGODNLKEPO_OFFSET UNITYSDK_OFFSET(0x15AF47D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HBECPDGHJKN_OFFSET UNITYSDK_OFFSET(0x15AF6A60)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HBJBDNMNHEO_OFFSET UNITYSDK_OFFSET(0x15AF7FC0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HCJPCDIHDBK_OFFSET UNITYSDK_OFFSET(0x15AF8CF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HNFCMMFDOOO_OFFSET UNITYSDK_OFFSET(0x15AF6820)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_IAAOMBHMDHP_OFFSET UNITYSDK_OFFSET(0x15AF5650)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_IKFDJMFFIFF_OFFSET UNITYSDK_OFFSET(0x15AF8890)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_JDJCAOABOFO_OFFSET UNITYSDK_OFFSET(0x15AF8730)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_KBMIHDBLMAC_OFFSET UNITYSDK_OFFSET(0x15AF8550)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_KMNMMFEJBDO_OFFSET UNITYSDK_OFFSET(0x15AF60E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LAELEKEOJLG_OFFSET UNITYSDK_OFFSET(0x15AF7BE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LHOHAAAELGG_OFFSET UNITYSDK_OFFSET(0x15AF8800)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LIIJAPNNDGP_OFFSET UNITYSDK_OFFSET(0x15AF79C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LJGAJCILAHG_OFFSET UNITYSDK_OFFSET(0x15AF7B40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LMDFMJDJHDM_OFFSET UNITYSDK_OFFSET(0x15AF8BD0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_MCFGPGCJMLB_OFFSET UNITYSDK_OFFSET(0x15AF9B10)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_MEEGKBDFKDO_OFFSET UNITYSDK_OFFSET(0x15AF2730)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_NPOIGPKBKNM_OFFSET UNITYSDK_OFFSET(0x15AFA120)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OAOBDCICAOI_1_OFFSET UNITYSDK_OFFSET(0x15AF70D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OAOBDCICAOI_OFFSET UNITYSDK_OFFSET(0x15AF8920)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OJAFBPCEOMM_OFFSET UNITYSDK_OFFSET(0x15AF9A10)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15AF7B80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15AF1600)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PCBPPFKBLEB_OFFSET UNITYSDK_OFFSET(0x15AF54D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PCLHNPCKJOP_OFFSET UNITYSDK_OFFSET(0x15AF7EB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PFNGHCBHCFI_OFFSET UNITYSDK_OFFSET(0x15AFA420)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PICPMGFOIDL_OFFSET UNITYSDK_OFFSET(0x15AF5C10)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PLNLDJGKDPE_OFFSET UNITYSDK_OFFSET(0x15AF7F70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0x15AF2AE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x15AF15D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x15AF15F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AF7570)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF72E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_TypeDefinitionIndex = 56686;

	class ZNetEffectPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_s_CreatedPrefabs()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x4F930);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_k_EmptyParticlesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x4F938);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_s_ProcessedDirectors()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x4F940);
		}
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::System::Object*>** StaticGet_OnExportTableTypeDropdown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x4F948);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_k_EmptyDirectorsList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x4F950);
		}
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		// static const ::System::String* PREVIEW_GROUP_STR; // 0x0
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* effectAutoDynamicInfo; // 0x18
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x20
		::System::Byte _padding0[0x8];
		::System::String* fxGuid; // 0x30
		::UnityEngine::GameObject* prefabGameObject; // 0x38
		::System::Boolean updateParticle; // 0x40
		::System::Boolean particleUseRandom; // 0x41
		::System::Byte _padding1[0x2];
		::System::UInt32 particleRandomSeed; // 0x44
		::System::Boolean updateDirector; // 0x48
		::System::Boolean updateITimeControl; // 0x49
		::System::Boolean searchHierarchy; // 0x4A
		::System::Boolean active; // 0x4B
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x4C
		::UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset; // 0x50
		::System::Double m_Duration; // 0x58
		::System::Boolean m_SupportLoop; // 0x60
		::System::Boolean _controllingDirectors_k__BackingField; // 0x61
		::System::Boolean _controllingParticles_k__BackingField; // 0x62
		::System::Byte _padding2[0x5];
		::System::String* guid_Editor; // 0x68
		::JGNFGDHCNLN* template_; // 0x70
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> bindingTransform; // 0x78
		::System::Byte _padding3[0x8];
		::System::String* bindingPath; // 0x88
		::UnityEngine::Timeline::TimelineClip* clip; // 0x90
		::UnityEngine::Timeline::TrackAsset* trackAsset; // 0x98
		::UnityEngine::GameObject* goCtx; // 0xA0
		::UnityEngine::Playables::PlayableGraph graph; // 0xA8
		::System::Boolean controlScale; // 0xB8
		::System::Byte _padding4[0x3];
		::System::Single timeScale; // 0xBC
		::System::Int32 previewLayerOverride; // 0xC0
		::MoleMole::Timeline::ZNetEffectPlayableAsset_BFCNFDIGEDK exportTableType; // 0xC4
		::System::Collections::Generic::List_1<::System::Int32>* animatorZoneTags; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags_strVer; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTagsBlackList; // 0xD8
		::System::Boolean _CanShowInTag_k__BackingField; // 0xE0
		::System::Byte _padding5[0x7];
		::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* followControl; // 0xE8
		::System::Boolean hasAbilityData; // 0xF0
		::System::Byte _padding6[0x7];
		::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* abiltyData; // 0xF8
		::System::Boolean amcEndClear; // 0x100
		::System::Byte _padding7[0x3];
		::System::Int32 previewBeginFadeOutFrame; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET))();
		}

		::System::Boolean get_controllingDirectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET))(this);
		}

		::System::Void set_controllingDirectors(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_controllingParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET))(this);
		}

		::System::Void set_controllingParticles(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}

		::System::Boolean get_CanShowInTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET))(this);
		}

		::System::Void set_CanShowInTag(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}

		::System::Void GIGODNLKEPO(::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* LIGJKJBKCNO, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* AHJDAFMMALM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GIGODNLKEPO_OFFSET))(this, LIGJKJBKCNO, AHJDAFMMALM);
		}

		::DJAHFGLKCIJ* ACKBIEPOLOA()
		{
			return ((::DJAHFGLKCIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ACKBIEPOLOA_OFFSET))(this);
		}

		::System::Boolean LIIJAPNNDGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LIIJAPNNDGP_OFFSET))(this);
		}

		::System::Boolean LJGAJCILAHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LJGAJCILAHG_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* PICPMGFOIDL(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PICPMGFOIDL_OFFSET))(IAPKABMDJNF);
		}

		::System::Boolean OKJCHFGIKBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OKJCHFGIKBH_OFFSET))(this);
		}

		::System::Void ADDOLJJEPMP(::MoleMole::Config::AnimatorEventEffectEntry* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ADDOLJJEPMP_OFFSET))(this, NFFNEFLKPDG);
		}

		::System::Void PLNLDJGKDPE(::DJAHFGLKCIJ* OEFMLHOPIAN)
		{
			return ((::System::Void(*)(::PVOID, ::DJAHFGLKCIJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PLNLDJGKDPE_OFFSET))(this, OEFMLHOPIAN);
		}

		::UnityEngine::GameObject* BEMBIANKABF()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_BEMBIANKABF_OFFSET))(this);
		}

		::System::Void HBJBDNMNHEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HBJBDNMNHEO_OFFSET))(this);
		}

		static ::System::Void FJMKBFFAAHM(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* ACHKMJKCPFL, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN, ::UnityEngine::Transform* GHNIMIANFBF)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_FJMKBFFAAHM_OFFSET))(ACHKMJKCPFL, MHPNGBGGMMN, PCIPDLEGOJN, GHNIMIANFBF);
		}

		::System::Void KMNMMFEJBDO(::UnityEngine::GameObject* MHHIBHLEKHO, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* AHJDAFMMALM, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_KMNMMFEJBDO_OFFSET))(this, MHHIBHLEKHO, AHJDAFMMALM, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Boolean EGKKOFJEJOL(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EGKKOFJEJOL_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void LAELEKEOJLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LAELEKEOJLG_OFFSET))(this);
		}

		::System::Void HNFCMMFDOOO(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HNFCMMFDOOO_OFFSET))(this, MHHIBHLEKHO, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void JDJCAOABOFO(::MoleMole::Config::AnimatorEventEffectEntry* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_JDJCAOABOFO_OFFSET))(this, NFFNEFLKPDG);
		}

		::MoleMole::Config::EffectAutoDynamicValue* LHOHAAAELGG()
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LHOHAAAELGG_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* KBMIHDBLMAC(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_KBMIHDBLMAC_OFFSET))(this, NJOAJLDJCCJ);
		}

		::SimpleJSON::JSONNode* IKFDJMFFIFF(::KAOHIFFJNFF* OMCEPIKBLPO)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::KAOHIFFJNFF*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_IKFDJMFFIFF_OFFSET))(this, OMCEPIKBLPO);
		}

		static ::UnityEngine::Playables::Playable OAOBDCICAOI(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* EOCLCFNBBAP)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OAOBDCICAOI_OFFSET))(MHPNGBGGMMN, EOCLCFNBBAP);
		}

		::System::Void HCJPCDIHDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HCJPCDIHDBK_OFFSET))(this);
		}

		::System::Void HBECPDGHJKN(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_HBECPDGHJKN_OFFSET))(this, MHHIBHLEKHO, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void AMLLPABJJEC(::UnityEngine::GameObject* MHHIBHLEKHO, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_AMLLPABJJEC_OFFSET))(this, MHHIBHLEKHO, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void GCECOHPFALI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GCECOHPFALI_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* DGBFKIKKFLD(::DJAHFGLKCIJ* OEFMLHOPIAN)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::DJAHFGLKCIJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DGBFKIKKFLD_OFFSET))(this, OEFMLHOPIAN);
		}

		::System::Boolean AAHEFLCOINE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_AAHEFLCOINE_OFFSET))(this);
		}

		::System::Void OJAFBPCEOMM(::MoleMole::Config::AnimatorEventEffectEntry* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OJAFBPCEOMM_OFFSET))(this, NFFNEFLKPDG);
		}

		::System::Void IAAOMBHMDHP(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>* LIGJKJBKCNO, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN, ::System::Boolean OMHMAGDHHBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_IAAOMBHMDHP_OFFSET))(this, LIGJKJBKCNO, MHPNGBGGMMN, PCIPDLEGOJN, OMHMAGDHHBA);
		}

		static ::System::Void LMDFMJDJHDM(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Playables::Playable FMMONKDPKFN, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::System::Int32 EAECOJGEGFP)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_LMDFMJDJHDM_OFFSET))(MHPNGBGGMMN, FMMONKDPKFN, HKOFGPMIFHB, EAECOJGEGFP);
		}

		::System::Void MCFGPGCJMLB(::MoleMole::Config::AnimatorEventEffectEntry* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_MCFGPGCJMLB_OFFSET))(this, NFFNEFLKPDG);
		}

		static ::System::Void DFEPDCMILFB(::UnityEngine::Transform* IMLLDOHDCNC, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>* NIGDMPCPILP)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DFEPDCMILFB_OFFSET))(IMLLDOHDCNC, NIGDMPCPILP);
		}

		::System::Void PCLHNPCKJOP(::MoleMole::Config::AnimatorEventEffectEntry* NFFNEFLKPDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PCLHNPCKJOP_OFFSET))(this, NFFNEFLKPDG);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* MEEGKBDFKDO(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_MEEGKBDFKDO_OFFSET))(IAPKABMDJNF);
		}

		::System::Void NPOIGPKBKNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_NPOIGPKBKNM_OFFSET))(this);
		}

		::System::Void BMJCOHANHJP(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_BMJCOHANHJP_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}

		static ::System::Void ANNGMPCAOFH(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* ACHKMJKCPFL, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ANNGMPCAOFH_OFFSET))(ACHKMJKCPFL, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::Void PCBPPFKBLEB(::UnityEngine::GameObject* IAPKABMDJNF, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* PCIPDLEGOJN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PCBPPFKBLEB_OFFSET))(this, IAPKABMDJNF, MHPNGBGGMMN, PCIPDLEGOJN);
		}

		::System::String* EFECJKOFFOD(::System::Single CIIPCCLOHLH)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFECJKOFFOD_OFFSET))(this, CIIPCCLOHLH);
		}

		::KAOHIFFJNFF* EIJGBLAJLPG(::DJAHFGLKCIJ* OEFMLHOPIAN, ::System::Single CIIPCCLOHLH)
		{
			return ((::KAOHIFFJNFF*(*)(::PVOID, ::DJAHFGLKCIJ*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EIJGBLAJLPG_OFFSET))(this, OEFMLHOPIAN, CIIPCCLOHLH);
		}

		::System::String* PFNGHCBHCFI(::System::String*& CIOAFOKNMJC)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_PFNGHCBHCFI_OFFSET))(this, CIOAFOKNMJC);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* DFEPDCMILFB_1(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_DFEPDCMILFB_1_OFFSET))(this, NJOAJLDJCCJ);
		}

		static ::UnityEngine::Playables::Playable OAOBDCICAOI_1(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* EOCLCFNBBAP)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_OAOBDCICAOI_1_OFFSET))(HKOFGPMIFHB, MHPNGBGGMMN, EOCLCFNBBAP);
		}
	};
}
