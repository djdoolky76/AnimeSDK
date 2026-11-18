#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x10D63B30)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x10D63B40)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x10D63B10)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x10D63B20)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D63A70)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x10D634A0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x10D63060)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10D63830)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D63AC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EmoSyncAnimationBehavior_TypeDefinitionIndex = 64127;

	class EmoSyncAnimationBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::miHoYoEmotion::EmoSync* emoSync; // 0x18
		::System::String* voiceKey; // 0x20
		::System::String* avatarShowingKey; // 0x28
		::System::String* emoFacialKey; // 0x30
		::System::String* emoPoseKey; // 0x38
		::miHoYoEmotion::SequenceClipBakeData* bakeData; // 0x40
		::Foundation::AssetRequestHandle handler; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONBEHAVIOR_IFHNMAGGFAE_OFFSET))(this);
		}
	};
}
