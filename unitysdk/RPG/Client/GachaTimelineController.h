#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class GachaModule_DrawInfoCache; }
namespace RPG::GameCore { class GachaCutsceneConfig; }
namespace RPG::GameCore { class GachaTimelineConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPG_CLIENT_GACHATIMELINECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD09F910)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_DDOBNODLFDI_OFFSET UNITYSDK_OFFSET(0xD09E220)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_GFCJIEPNGMC_OFFSET UNITYSDK_OFFSET(0xD09ED50)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_LBEAKAGBNMJ_OFFSET UNITYSDK_OFFSET(0xD09EEF0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_LDFCOCBHDGD_OFFSET UNITYSDK_OFFSET(0xD09F590)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_LHKNGJBAAIA_OFFSET UNITYSDK_OFFSET(0xD09F870)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_LLFDIIJKKHG_OFFSET UNITYSDK_OFFSET(0xD09EC70)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_OJAGHJAKJBO_OFFSET UNITYSDK_OFFSET(0xD09E470)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD09F7B0)
#define RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD09D840)

namespace RPG::Client
{
	class GachaTimelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x18
		::RPG::GameCore::GachaCutsceneConfig* BCOIKMNICIM; // 0x20
		::RPG::GameCore::GachaTimelineConfig* GPJAIPBLGGI; // 0x28
		::UnityEngine::Material* OAOEINKGPGN; // 0x30
		::System::Boolean NGKEFBPLJBE; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::GachaModule_DrawInfoCache* ONKFLNPHHBE; // 0x40
		// static const ::System::String* CGKEFDLCFMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_START_OFFSET))(this);
		}

		::System::Void DDOBNODLFDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_DDOBNODLFDI_OFFSET))(this, a1);
		}

		::System::Void OJAGHJAKJBO(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_OJAGHJAKJBO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::TrackAsset* LBEAKAGBNMJ(::System::String* a1, ::UnityEngine::Timeline::TimelineAsset* a2)
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_LBEAKAGBNMJ_OFFSET))(this, a1, a2);
		}

		::System::Void LDFCOCBHDGD(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_LDFCOCBHDGD_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LHKNGJBAAIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_LHKNGJBAAIA_OFFSET))(this, a1);
		}

		::System::Boolean LLFDIIJKKHG(::Il2CppArray<::System::String*>* a1, ::UnityEngine::Timeline::TrackAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_LLFDIIJKKHG_OFFSET))(this, a1, a2);
		}

		::System::Void GFCJIEPNGMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHATIMELINECONTROLLER_GFCJIEPNGMC_OFFSET))(this, a1);
		}

	};
}
