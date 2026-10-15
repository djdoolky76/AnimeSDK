#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Timeline/ManaVideoMixerBehaviour_MovieMixerState.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare::CriMana { class Player; }
namespace RPG::Client::Timeline { class ManaVideoClip; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ABHNFLMIHOE_OFFSET UNITYSDK_OFFSET(0xE2A6570)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_APHACIPFLDJ_OFFSET UNITYSDK_OFFSET(0xE2A61D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_BJFANEDNBAJ_OFFSET UNITYSDK_OFFSET(0xE2A6250)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2A7C40)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE2A7C10)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_FBOCDHJABBI_OFFSET UNITYSDK_OFFSET(0xE2A56D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET UNITYSDK_OFFSET(0xE2A56C0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GPNJLFLLAFK_OFFSET UNITYSDK_OFFSET(0xE2A7760)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_HEEFFMGDMHH_OFFSET UNITYSDK_OFFSET(0xE2A60A0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_HNFGIDMOKJF_OFFSET UNITYSDK_OFFSET(0xE2A5F10)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_IFCHEMGFPLD_OFFSET UNITYSDK_OFFSET(0xE2A6110)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_IHIBIGKDNLF_OFFSET UNITYSDK_OFFSET(0xE2A76F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_JLKHGANIICI_OFFSET UNITYSDK_OFFSET(0xE2A6420)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LAIGACHFNMD_OFFSET UNITYSDK_OFFSET(0xE2A59A0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LBLEFHKGLBI_OFFSET UNITYSDK_OFFSET(0xE2A5840)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LOFMDCLJJGA_OFFSET UNITYSDK_OFFSET(0xE2A5C50)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LPLGKLJOCAM_OFFSET UNITYSDK_OFFSET(0xE2A6310)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE2A78D0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE2A77F0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE2A79B0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE2A7A40)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xE2A7AD0)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE2A7B70)
#define RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE2A66F0)

namespace RPG::Client::Timeline
{
	inline static constexpr unsigned int ManaVideoMixerBehaviour_TypeDefinitionIndex = 73349;

	class ManaVideoMixerBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* m_PlayableDirector; // 0x10
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* m_clips; // 0x18
		::CriWare::CriManaMovieMaterial* m_boundMovieMaterial; // 0x20
		::System::Boolean m_frameSync; // 0x28
		::System::Byte _padding0[0x3];
		::System::Nullable* m_lastClipId; // 0x2C
		::System::Byte _padding1[0xC];
		::System::Double startTime; // 0x40
		::System::Double m_currentSeekingFrameTime; // 0x48
		::System::Single m_originalAudioVolume; // 0x50
		::System::Single m_originalSubAudioVolume; // 0x54
		::System::Single m_originalExtraAudioVolume; // 0x58
		::RPG::Client::Timeline::ManaVideoMixerBehaviour_MovieMixerState m_movieMixerState; // 0x5C
		static ::System::Double* StaticGet_cPreloadTimeSec()
		{
			return (::System::Double*)UnitySDK::FromName("RPG.Client.Timeline", "ManaVideoMixerBehaviour")->GetStaticField(0x6890);
		}

		static ::System::Int32* StaticGet_PROPERTY_TRANSPARENCY()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Timeline", "ManaVideoMixerBehaviour")->GetStaticField(0x6898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsEditMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GET_ISEDITMODE_OFFSET))();
		}

		::System::Void FBOCDHJABBI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_FBOCDHJABBI_OFFSET))(this, a1);
		}

		::System::Boolean LBLEFHKGLBI(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LBLEFHKGLBI_OFFSET))(this, a1);
		}

		::System::Boolean LAIGACHFNMD(::RPG::Client::Timeline::ManaVideoClip* a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LAIGACHFNMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LOFMDCLJJGA(::RPG::Client::Timeline::ManaVideoClip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Timeline::ManaVideoClip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LOFMDCLJJGA_OFFSET))(this, a1);
		}

		::System::Boolean HNFGIDMOKJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_HNFGIDMOKJF_OFFSET))(this);
		}

		::System::Boolean HEEFFMGDMHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_HEEFFMGDMHH_OFFSET))(this);
		}

		static ::System::Boolean IFCHEMGFPLD(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_IFCHEMGFPLD_OFFSET))(a1);
		}

		static ::System::Boolean APHACIPFLDJ(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_APHACIPFLDJ_OFFSET))(a1);
		}

		static ::System::Boolean BJFANEDNBAJ(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_BJFANEDNBAJ_OFFSET))(a1);
		}

		static ::System::Boolean LPLGKLJOCAM(::CriWare::CriMana::Player* a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_LPLGKLJOCAM_OFFSET))(a1);
		}

		::System::Void JLKHGANIICI(::UnityEngine::Timeline::TimelineClip* a1, ::RPG::Client::Timeline::ManaVideoClip* a2, ::System::Double a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::RPG::Client::Timeline::ManaVideoClip*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_JLKHGANIICI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABHNFLMIHOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ABHNFLMIHOE_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* GPNJLFLLAFK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_GPNJLFLLAFK_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void IHIBIGKDNLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_IHIBIGKDNLF_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMELINE_MANAVIDEOMIXERBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

	};
}
