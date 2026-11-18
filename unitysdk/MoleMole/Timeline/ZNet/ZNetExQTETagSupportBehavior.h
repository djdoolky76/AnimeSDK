#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class MihoyoEffectTagControlTrack; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_BJOFPKGEOAE_OFFSET UNITYSDK_OFFSET(0x14BDCD90)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_EPIOIAHKJKC_OFFSET UNITYSDK_OFFSET(0x14BDCE30)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GEKAEHDMMJO_OFFSET UNITYSDK_OFFSET(0x14BDCA00)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x14BDC9E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GIIDJNLILIB_OFFSET UNITYSDK_OFFSET(0x14BDCE80)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x14BDCE20)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_KCAOOCBBBLJ_OFFSET UNITYSDK_OFFSET(0x14BDD3E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_LGBBKHEPMLD_OFFSET UNITYSDK_OFFSET(0x14BDD610)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x14BDCE10)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14BDC810)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14BDC890)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14BDC7C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x14BDC9F0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14BDC4B0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BDC910)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportBehavior_TypeDefinitionIndex = 83913;

	class ZNetExQTETagSupportBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* mainTLDirector; // 0x10
		::UnityEngine::Timeline::GroupTrack* volG; // 0x18
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* volTagData; // 0x20
		::UnityEngine::Timeline::TimelineAsset* lightTL; // 0x28
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* lightTagData; // 0x30
		::UnityEngine::Playables::PlayableDirector* lightDirector; // 0x38
		::UnityEngine::Timeline::GroupTrack* modelEffectG; // 0x40
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* modelEffectTagData; // 0x48
		::System::Collections::Generic::HashSet_1<::UnityEngine::Light*>* m_setLightComShowMap; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GEKAEHDMMJO(::UnityEngine::Timeline::AnimationTrack* FNBLEBLLEIA, ::System::Boolean AMGAAHMANDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GEKAEHDMMJO_OFFSET))(this, FNBLEBLLEIA, AMGAAHMANDM);
		}

		::System::Void BJOFPKGEOAE(::UnityEngine::Timeline::TrackAsset* HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_BJOFPKGEOAE_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void EPIOIAHKJKC(::UnityEngine::Timeline::TrackAsset* HAAEBCOBKFF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_EPIOIAHKJKC_OFFSET))(this, HAAEBCOBKFF);
		}

		::System::Void GIIDJNLILIB(::UnityEngine::Playables::PlayableDirector* DFEGPHMMCOO, ::UnityEngine::Timeline::GroupTrack* DDILDALKHLG, ::UnityEngine::Timeline::TimelineAsset* FJCOBGNKCFB, ::UnityEngine::Playables::PlayableDirector* FJEDGAAPKKC, ::UnityEngine::Timeline::GroupTrack* NDHPBIABCLB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::GroupTrack*, ::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_GIIDJNLILIB_OFFSET))(this, DFEGPHMMCOO, DDILDALKHLG, FJCOBGNKCFB, FJEDGAAPKKC, NDHPBIABCLB);
		}

		::System::Void KCAOOCBBBLJ(::UnityEngine::Timeline::AnimationTrack* FNBLEBLLEIA, ::System::Boolean AMGAAHMANDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::AnimationTrack*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_KCAOOCBBBLJ_OFFSET))(this, FNBLEBLLEIA, AMGAAHMANDM);
		}

		::System::Void LGBBKHEPMLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTBEHAVIOR_LGBBKHEPMLD_OFFSET))(this);
		}
	};
}
