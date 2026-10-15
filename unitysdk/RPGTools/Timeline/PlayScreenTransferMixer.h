#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPGTools::Timeline { class PlayScreenTransferBehaviour; }
namespace RPGTools::Timeline { class ScreenTransferTextBehaviour; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_BMIHEGFLGNH_OFFSET UNITYSDK_OFFSET(0xE9155F0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE915640)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_DENPGLJMLDM_OFFSET UNITYSDK_OFFSET(0xE915400)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_INDDLFBPNNH_OFFSET UNITYSDK_OFFSET(0xE914C30)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_JBACDOFJABC_OFFSET UNITYSDK_OFFSET(0xE915030)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_LCPDJNKDHNJ_OFFSET UNITYSDK_OFFSET(0xE915190)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_MINHKHNPKHN_OFFSET UNITYSDK_OFFSET(0xE914D40)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_NFLLEAKIJAI_OFFSET UNITYSDK_OFFSET(0xE914F20)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE914270)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xE9142F0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE914420)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE9144C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlayScreenTransferMixer_TypeDefinitionIndex = 48216;

	class PlayScreenTransferMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPG::GameCore::PlayScreenTransfer* _TransferData; // 0x10
		::UnityEngine::Playables::PlayableDirector* _Director; // 0x18
		::System::Boolean _IsPauseByText; // 0x20
		::System::Boolean _CanResumeByText; // 0x21
		// static const ::System::Object _BeginWaitTime; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void INDDLFBPNNH(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a3, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_INDDLFBPNNH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LCPDJNKDHNJ(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a3, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_LCPDJNKDHNJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BMIHEGFLGNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_BMIHEGFLGNH_OFFSET))(this, a1);
		}

		::System::Void DENPGLJMLDM(::UnityEngine::Playables::Playable a1, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_DENPGLJMLDM_OFFSET))(this, a1, a2);
		}

		::System::Boolean MINHKHNPKHN(::UnityEngine::Playables::Playable a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::ScreenTransferType a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Single, ::System::Single, ::RPG::GameCore::ScreenTransferType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_MINHKHNPKHN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::PlayScreenTransfer* NFLLEAKIJAI(::System::Single a1, ::System::Single a2, ::RPG::GameCore::ScreenTransferType a3, ::RPGTools::Timeline::PlayScreenTransferBehaviour* a4, ::RPGTools::Timeline::ScreenTransferTextBehaviour* a5)
		{
			return ((::RPG::GameCore::PlayScreenTransfer*(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::ScreenTransferType, ::RPGTools::Timeline::PlayScreenTransferBehaviour*, ::RPGTools::Timeline::ScreenTransferTextBehaviour*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_NFLLEAKIJAI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JBACDOFJABC(::RPG::GameCore::PlayScreenTransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERMIXER_JBACDOFJABC_OFFSET))(this, a1);
		}

	};
}
