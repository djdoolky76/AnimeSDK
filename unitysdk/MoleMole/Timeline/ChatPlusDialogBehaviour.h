#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPDCHLNLEJP.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class TimelineData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ABOMOFCEGIK_OFFSET UNITYSDK_OFFSET(0x10D62D90)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_BMKHJAHJDFD_OFFSET UNITYSDK_OFFSET(0x10D60750)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_EPMGEPKPHBL_OFFSET UNITYSDK_OFFSET(0x10D62AB0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_HASSUBTITLE_OFFSET UNITYSDK_OFFSET(0x10D5FB90)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10D5FC40)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x10D5FC30)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10D62CA0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GOLJDFPDBBJ_OFFSET UNITYSDK_OFFSET(0x10D620A0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x10D62B10)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HNDDDJNDNPM_OFFSET UNITYSDK_OFFSET(0x10D628D0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HNNHMKEPHAI_OFFSET UNITYSDK_OFFSET(0x10D61150)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_IAMINLAHEEB_OFFSET UNITYSDK_OFFSET(0x10D60BF0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_JOAJINBDHJA_OFFSET UNITYSDK_OFFSET(0x10D62B30)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_JPDKEPKOMPP_OFFSET UNITYSDK_OFFSET(0x10D625E0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x10D62CB0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x10D62B00)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x10D62B20)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x10D62640)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_OEDHHIGEJDP_OFFSET UNITYSDK_OFFSET(0x10D62E80)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_OJOMGMNEJPB_OFFSET UNITYSDK_OFFSET(0x10D612F0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x10D61070)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x10D60FD0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x10D5FC50)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10D60470)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PJDIIHNMJND_OFFSET UNITYSDK_OFFSET(0x10D61380)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10D61190)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D62580)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogBehaviour_TypeDefinitionIndex = 56221;

	class ChatPlusDialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* NpcName; // 0x10
		::System::String* TextMapKey; // 0x18
		::System::String* VoID; // 0x20
		::System::Int32 priority; // 0x28
		::CPDCHLNLEJP subtitleSlot; // 0x2C
		::System::Boolean enableEmoSync; // 0x30
		::System::Byte _padding0[0x7];
		::miHoYoEmotion::EmoSync* emoSync; // 0x38
		::System::String* avatarShowingKey; // 0x40
		::System::String* emoFacialKey; // 0x48
		::System::String* emoPoseKey; // 0x50
		::UnityEngine::GameObject* followTarget; // 0x58
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0x60
		::System::Boolean disableMale; // 0x68
		::System::Boolean disableFemale; // 0x69
		::System::Byte _padding1[0x6];
		::UnityEngine::GameObject* _audioEmitter; // 0x70
		::System::Boolean _isPaused; // 0x78
		::System::Boolean _isLogicPaused; // 0x79
		::System::Boolean _needPlay; // 0x7A
		::System::Byte _padding2[0x1];
		::System::UInt32 _audioPendingId; // 0x7C
		::Foundation::AssetRequestHandle _emoHandler; // 0x80
		::miHoYoEmotion::SequenceClipBakeData* _bakeData; // 0xA0
		::MoleMole::TimelineData* _data; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasSubtitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_HASSUBTITLE_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Int32 get_InstanceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Boolean JPDKEPKOMPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_JPDKEPKOMPP_OFFSET))(this);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PJDIIHNMJND(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_PJDIIHNMJND_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void HNDDDJNDNPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HNDDDJNDNPM_OFFSET))(this);
		}

		::System::Void EPMGEPKPHBL(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_EPMGEPKPHBL_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
		}

		::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void JOAJINBDHJA(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_JOAJINBDHJA_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Boolean OJOMGMNEJPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_OJOMGMNEJPB_OFFSET))(this);
		}

		::System::Void ABOMOFCEGIK(::System::UInt32 GFOPLDDFDIA)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_ABOMOFCEGIK_OFFSET))(this, GFOPLDDFDIA);
		}

		::System::Void IAMINLAHEEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_IAMINLAHEEB_OFFSET))(this);
		}

		::System::Void HNNHMKEPHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_HNNHMKEPHAI_OFFSET))(this);
		}

		::System::Void GOLJDFPDBBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_GOLJDFPDBBJ_OFFSET))(this);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_KOPLHACOBFC_OFFSET))(this);
		}

		::System::Void OEDHHIGEJDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_OEDHHIGEJDP_OFFSET))(this);
		}

		::System::Void BMKHJAHJDFD(::System::Int32 KGBDJOIKAPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_BMKHJAHJDFD_OFFSET))(this, KGBDJOIKAPN);
		}
	};
}
