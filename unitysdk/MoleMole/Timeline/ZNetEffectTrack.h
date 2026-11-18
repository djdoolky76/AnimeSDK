#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::EffectSimulate { class NapEffectSimulatorMgr; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_BEMBIANKABF_OFFSET UNITYSDK_OFFSET(0x1A73EA00)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_BPMKEKLABAP_OFFSET UNITYSDK_OFFSET(0x1A73F280)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CANCUSTOMRECORD_OFFSET UNITYSDK_OFFSET(0x1A73EA40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CNBMFICEAGG_OFFSET UNITYSDK_OFFSET(0x1A73F1C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_COLLEHFPFKO_OFFSET UNITYSDK_OFFSET(0x1A73E680)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A73D870)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1A73EE70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET UNITYSDK_OFFSET(0x1A73EBC0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET UNITYSDK_OFFSET(0x1A73EB20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_DMLGNEADDAB_OFFSET UNITYSDK_OFFSET(0x1A73E200)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ERRORMSG_OFFSET UNITYSDK_OFFSET(0x1A73E720)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FJEBEIAIGIM_OFFSET UNITYSDK_OFFSET(0x1A73F270)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FLKKJFHMJBH_OFFSET UNITYSDK_OFFSET(0x1A73F1B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FOCELABFJEC_OFFSET UNITYSDK_OFFSET(0x1A73F1E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A73EF20)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GDIEJLEBKEL_OFFSET UNITYSDK_OFFSET(0x1A73F240)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET UNITYSDK_OFFSET(0x1A73EB80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A73EAE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x1A73F1F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_LIDPHFBKAIL_OFFSET UNITYSDK_OFFSET(0x1A73F230)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_MDGFDDJGCFB_OFFSET UNITYSDK_OFFSET(0x1A73F260)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_MHCFJPIDDHD_OFFSET UNITYSDK_OFFSET(0x1A73F250)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_OLKDPLINLEH_OFFSET UNITYSDK_OFFSET(0x1A73F1D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONMUTESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1A73EDE0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONPASTETRACK_OFFSET UNITYSDK_OFFSET(0x1A73EE30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73F150)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectTrack_TypeDefinitionIndex = 91503;

	class ZNetEffectTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Playables::Playable mixerPlayable; // 0xB0
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> rootTransform; // 0xC0
		::System::Byte _padding0[0x8];
		::System::Boolean needResolve; // 0xD0
		::System::Byte _padding1[0x7];
		::MoleMole::Timeline::ZNetEffectPlayableAsset* m_stAsset; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, JEIDPPCEHLD, PHGBOCIDLEI);
		}

		::System::String* ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ERRORMSG_OFFSET))(this);
		}

		::System::Boolean CanCustomRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CANCUSTOMRECORD_OFFSET))(this);
		}

		::System::Boolean IsCustomGetSceneGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* CustomGetSceneGameObjectImp()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET))(this);
		}

		::System::Boolean IsCustomGetRecordAnimClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* CustomGetRecordAnimClipImp()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET))(this);
		}

		::System::Void OnMuteStateChange(::System::Boolean NGJMKJNOGJN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONMUTESTATECHANGE_OFFSET))(this, NGJMKJNOGJN);
		}

		::System::Void OnPasteTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_ONPASTETRACK_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GATHERPROPERTIES_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}

		::System::String* FLKKJFHMJBH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FLKKJFHMJBH_OFFSET))(this);
		}

		::UnityEngine::GameObject* CNBMFICEAGG()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_CNBMFICEAGG_OFFSET))(this);
		}

		::System::Void OLKDPLINLEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_OLKDPLINLEH_OFFSET))(this);
		}

		::System::Boolean FOCELABFJEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FOCELABFJEC_OFFSET))(this);
		}

		::UnityEngine::GameObject* BEMBIANKABF()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_BEMBIANKABF_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void LIDPHFBKAIL(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_LIDPHFBKAIL_OFFSET))(this, MIALFKCCCPI);
		}

		static ::System::Single DMLGNEADDAB(::MoleMole::EffectSimulate::NapEffectSimulatorMgr* DEALLHLACDE, ::MoleMole::Timeline::ZNetEffectPlayableAsset* FAJABONNCHA)
		{
			return ((::System::Single(*)(::MoleMole::EffectSimulate::NapEffectSimulatorMgr*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_DMLGNEADDAB_OFFSET))(DEALLHLACDE, FAJABONNCHA);
		}

		::System::Void GDIEJLEBKEL(::UnityEngine::Playables::PlayableDirector* MIALFKCCCPI, ::UnityEngine::Timeline::IPropertyCollector* KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_GDIEJLEBKEL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Boolean MHCFJPIDDHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_MHCFJPIDDHD_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* MDGFDDJGCFB()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_MDGFDDJGCFB_OFFSET))(this);
		}

		static ::System::Void COLLEHFPFKO(::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI, ::System::Single FKABKJMDLNP)
		{
			return ((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_COLLEHFPFKO_OFFSET))(PHGBOCIDLEI, FKABKJMDLNP);
		}

		::System::Boolean FJEBEIAIGIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_FJEBEIAIGIM_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable BPMKEKLABAP(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::UnityEngine::Timeline::TimelineClip* FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTTRACK_BPMKEKLABAP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}
	};
}
