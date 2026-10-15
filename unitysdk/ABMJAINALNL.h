#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class DGDCNMMBMKA;
class KLKMCNOECAL;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPGTools { class MonoTimelineEffect; }
namespace RPGTools::Timeline { class MonoEffectFollowTimelinePlugin; }
namespace RPGTools::Timeline::VFX { class VFXTimelineClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define ABMJAINALNL_AMMIBAEMJPI_OFFSET UNITYSDK_OFFSET(0xB10BE60)
#define ABMJAINALNL_CONECKKGNJM_OFFSET UNITYSDK_OFFSET(0xB10B580)
#define ABMJAINALNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB10CC20)
#define ABMJAINALNL_DKOJIGMNLFJ_OFFSET UNITYSDK_OFFSET(0xB10A540)
#define ABMJAINALNL_FEPJOHJOFFN_OFFSET UNITYSDK_OFFSET(0xB10C1B0)
#define ABMJAINALNL_GJFGPGOODEO_OFFSET UNITYSDK_OFFSET(0xB10C790)
#define ABMJAINALNL_HLNLBFKMBDC_OFFSET UNITYSDK_OFFSET(0xB10B7C0)
#define ABMJAINALNL_JJLHLLGNPJJ_OFFSET UNITYSDK_OFFSET(0xB10C6C0)
#define ABMJAINALNL_JKGFAGBNLAC_OFFSET UNITYSDK_OFFSET(0xB10B890)
#define ABMJAINALNL_KONJEANMPEC_OFFSET UNITYSDK_OFFSET(0xB10BFF0)
#define ABMJAINALNL_MAOBABABLAH_OFFSET UNITYSDK_OFFSET(0xB10CBD0)
#define ABMJAINALNL_MGAJCJPEKGL_OFFSET UNITYSDK_OFFSET(0xB10C4A0)
#define ABMJAINALNL_MKCIKFOPFJB_OFFSET UNITYSDK_OFFSET(0xB10A770)
#define ABMJAINALNL_MLBPFLNIDHJ_OFFSET UNITYSDK_OFFSET(0xB10C2E0)
#define ABMJAINALNL_NOELJCEPAPE_OFFSET UNITYSDK_OFFSET(0xB10A430)
#define ABMJAINALNL_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB10B2D0)
#define ABMJAINALNL_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB10A120)
#define ABMJAINALNL_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB109FC0)
#define ABMJAINALNL_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB10A070)
#define ABMJAINALNL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB10B3A0)

	class ABMJAINALNL : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Object* NCPNKDBIINJ; // 0x10
		::UnityEngine::Transform* CHGLKBIEMFK; // 0x18
		::UnityEngine::Timeline::TrackAsset* CIBMFKKGFGN; // 0x20
		::DGDCNMMBMKA* PGNKDKLMBJJ; // 0x28
		::UnityEngine::Playables::PlayableDirector* LDALFGDPLLF; // 0x30
		::RPG::Client::MonoEffect* AHLFACIHKKK; // 0x38
		::UnityEngine::GameObject* HCLHNCAMGHL; // 0x40
		::RPGTools::MonoTimelineEffect* LJOGFMELNBH; // 0x48
		::RPGTools::Timeline::MonoEffectFollowTimelinePlugin* EJCBMGAJDIG; // 0x50
		::RPGTools::Timeline::VFX::VFXTimelineClip* OBKONNDLKDL; // 0x58
		::System::Single ECCLDCEPAKI; // 0x60
		::System::Boolean NGKEFBPLJBE; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMJAINALNL_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ABMJAINALNL_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ABMJAINALNL_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + ABMJAINALNL_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + ABMJAINALNL_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ABMJAINALNL_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NOELJCEPAPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMJAINALNL_NOELJCEPAPE_OFFSET))(this);
		}

		::System::Void DKOJIGMNLFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMJAINALNL_DKOJIGMNLFJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* CONECKKGNJM(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABMJAINALNL_CONECKKGNJM_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* MLBPFLNIDHJ(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABMJAINALNL_MLBPFLNIDHJ_OFFSET))(this, a1);
		}

		::System::Void HLNLBFKMBDC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABMJAINALNL_HLNLBFKMBDC_OFFSET))(this, a1);
		}

		::System::Boolean MGAJCJPEKGL(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + ABMJAINALNL_MGAJCJPEKGL_OFFSET))(this, a1);
		}

		::System::Void JKGFAGBNLAC(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + ABMJAINALNL_JKGFAGBNLAC_OFFSET))(this, a1, a2);
		}

		::System::Void AMMIBAEMJPI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABMJAINALNL_AMMIBAEMJPI_OFFSET))(this, a1);
		}

		::System::Void KONJEANMPEC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABMJAINALNL_KONJEANMPEC_OFFSET))(this, a1);
		}

		::System::Void FEPJOHJOFFN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABMJAINALNL_FEPJOHJOFFN_OFFSET))(this, a1);
		}

		::System::Void JJLHLLGNPJJ(::RPG::Client::MonoEffectPluginFollow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + ABMJAINALNL_JJLHLLGNPJJ_OFFSET))(this, a1);
		}

		::System::Void GJFGPGOODEO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ABMJAINALNL_GJFGPGOODEO_OFFSET))(this, a1);
		}

		::System::Void MKCIKFOPFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMJAINALNL_MKCIKFOPFJB_OFFSET))(this);
		}

		::System::Void MAOBABABLAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABMJAINALNL_MAOBABABLAH_OFFSET))(this, a1);
		}

	};
