#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_CCBMALPFCCE_OFFSET UNITYSDK_OFFSET(0xF3DF140)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3DF260)
#define RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF3DF0B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int IdleLiveAddGiftToShowBehaviour_TypeDefinitionIndex = 48822;

	class IdleLiveAddGiftToShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GiftIds; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void CCBMALPFCCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_IDLELIVEADDGIFTTOSHOWBEHAVIOUR_CCBMALPFCCE_OFFSET))(this);
		}

	};
}
