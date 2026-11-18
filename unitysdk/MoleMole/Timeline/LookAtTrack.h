#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMPHFINMHJD.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class JIJFLKBAMIL;
namespace MoleMole::Timeline { class LookAtClipAsset; }
namespace MoleMole::Timeline { class LookAtIKConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_LOOKATTRACK_CANCUSTOMRECORD_OFFSET UNITYSDK_OFFSET(0x198D9DA0)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CCFEKLCDGNL_OFFSET UNITYSDK_OFFSET(0x198DC550)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CNBMFICEAGG_OFFSET UNITYSDK_OFFSET(0x198DD640)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CREATELAYERPLAYABLE_OFFSET UNITYSDK_OFFSET(0x198D9E60)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CREATEPOSTPROCESSPLAYABLE_OFFSET UNITYSDK_OFFSET(0x198DC700)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CREATERECORDABLECLIP_OFFSET UNITYSDK_OFFSET(0x198DC950)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET UNITYSDK_OFFSET(0x198DCA50)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET UNITYSDK_OFFSET(0x198DD3F0)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_FJEBEIAIGIM_OFFSET UNITYSDK_OFFSET(0x198DD620)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_FOCELABFJEC_OFFSET UNITYSDK_OFFSET(0x198DD630)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x198DCA90)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GDIEJLEBKEL_OFFSET UNITYSDK_OFFSET(0x198DD650)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_APPLYLAYERAVATARMASK_OFFSET UNITYSDK_OFFSET(0x198D9C50)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_HASLAYERPLAYABLE_OFFSET UNITYSDK_OFFSET(0x198D9C40)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_INCLIPMODE_OFFSET UNITYSDK_OFFSET(0x198D9DE0)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x198D9C10)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_ISADDITIVE_OFFSET UNITYSDK_OFFSET(0x198D9C30)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_LAYERAVATARMASK_OFFSET UNITYSDK_OFFSET(0x198D9D80)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_GET_LAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0x198D9D90)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_ILFOFFJLIPD_OFFSET UNITYSDK_OFFSET(0x198DD660)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET UNITYSDK_OFFSET(0x198DCA10)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x198D9E20)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_MDGFDDJGCFB_OFFSET UNITYSDK_OFFSET(0x198DD540)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_MFBPHEIOFPK_OFFSET UNITYSDK_OFFSET(0x198DC420)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_MHCFJPIDDHD_OFFSET UNITYSDK_OFFSET(0x198DD610)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_ONLAYERCONNECTED_OFFSET UNITYSDK_OFFSET(0x198DC870)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_PENOKLEOBDM_OFFSET UNITYSDK_OFFSET(0x198DD550)
#define MOLEMOLE_TIMELINE_LOOKATTRACK_SET_INFINITECLIP_OFFSET UNITYSDK_OFFSET(0x198D9C20)
#define MOLEMOLE_TIMELINE_LOOKATTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x198DD430)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtTrack_TypeDefinitionIndex = 70427;

	class LookAtTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::AnimationClip* m_InfiniteClip; // 0xB0
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> characterRoot; // 0xB8
		::System::Byte _padding0[0x8];
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> lookAtTarget; // 0xC8
		::System::Byte _padding1[0x8];
		::MoleMole::Timeline::LookAtIKConfig* ikConfig; // 0xD8
		::DMPHFINMHJD m_BlendMode; // 0xE0
		::System::Byte _padding2[0x4];
		::UnityEngine::AvatarMask* m_AvatarMask; // 0xE8
		::JIJFLKBAMIL* m_RuntimeSampler; // 0xF0
		::UnityEngine::Animations::AnimationScriptPlayable m_IKPlayable; // 0xF8
		::System::Boolean isValid; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* get_infiniteClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_INFINITECLIP_OFFSET))(this);
		}

		::System::Void set_infiniteClip(::UnityEngine::AnimationClip* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_SET_INFINITECLIP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_isAdditive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_ISADDITIVE_OFFSET))(this);
		}

		::System::Boolean get_hasLayerPlayable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_HASLAYERPLAYABLE_OFFSET))(this);
		}

		::System::Boolean get_applyLayerAvatarMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_APPLYLAYERAVATARMASK_OFFSET))(this);
		}

		::UnityEngine::AvatarMask* get_layerAvatarMask()
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_LAYERAVATARMASK_OFFSET))(this);
		}

		::System::Single get_layerWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_LAYERWEIGHT_OFFSET))(this);
		}

		::System::Boolean CanCustomRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CANCUSTOMRECORD_OFFSET))(this);
		}

		::System::Boolean get_inClipMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GET_INCLIPMODE_OFFSET))(this);
		}

		::System::Boolean IsCustomGetSceneGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateLayerPlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CREATELAYERPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}

		::UnityEngine::Playables::Playable CreatePostProcessPlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CREATEPOSTPROCESSPLAYABLE_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ);
		}

		::System::Void OnLayerConnected(::UnityEngine::Animations::AnimationLayerMixerPlayable FMMONKDPKFN, ::System::Int32 EEGBEFGJJBM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationLayerMixerPlayable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ONLAYERCONNECTED_OFFSET))(this, FMMONKDPKFN, EEGBEFGJJBM);
		}

		::UnityEngine::Timeline::TimelineClip* CreateRecordableClip(::UnityEngine::AnimationClip* KMAHIPDADPL)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CREATERECORDABLECLIP_OFFSET))(this, KMAHIPDADPL);
		}

		::System::Boolean IsCustomGetRecordAnimClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ISCUSTOMGETRECORDANIMCLIP_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* CustomGetRecordAnimClipImp()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CUSTOMGETRECORDANIMCLIPIMP_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA, ::UnityEngine::Timeline::IPropertyCollector* BHNDKLNKKNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GATHERPROPERTIES_OFFSET))(this, GALAOBFOBFA, BHNDKLNKKNK);
		}

		::UnityEngine::GameObject* CustomGetSceneGameObjectImp()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* MDGFDDJGCFB()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_MDGFDDJGCFB_OFFSET))(this);
		}

		::MoleMole::Timeline::LookAtClipAsset* PENOKLEOBDM()
		{
			return ((::MoleMole::Timeline::LookAtClipAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_PENOKLEOBDM_OFFSET))(this);
		}

		static ::System::Boolean MFBPHEIOFPK(::System::String* CDIAPJHKGCH)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_MFBPHEIOFPK_OFFSET))(CDIAPJHKGCH);
		}

		::System::Boolean MHCFJPIDDHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_MHCFJPIDDHD_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* CCFEKLCDGNL()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CCFEKLCDGNL_OFFSET))(this);
		}

		::System::Boolean FJEBEIAIGIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_FJEBEIAIGIM_OFFSET))(this);
		}

		::System::Boolean FOCELABFJEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_FOCELABFJEC_OFFSET))(this);
		}

		::UnityEngine::GameObject* CNBMFICEAGG()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_CNBMFICEAGG_OFFSET))(this);
		}

		::System::Void GDIEJLEBKEL(::UnityEngine::Playables::PlayableDirector* MIALFKCCCPI, ::UnityEngine::Timeline::IPropertyCollector* KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_GDIEJLEBKEL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		static ::System::String* ILFOFFJLIPD(::System::String* CJBJONJDOLI)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATTRACK_ILFOFFJLIPD_OFFSET))(CJBJONJDOLI);
		}
	};
}
