#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x19B6A620)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19B6A610)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OngoingSubtitlePreviewBehaviour_TypeDefinitionIndex = 91528;

	class OngoingSubtitlePreviewBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Int32 ongoingGroupId; // 0x10
		::System::Int32 orderId; // 0x14
		::System::Int32 subtitlePos; // 0x18
		::System::Int32 languageType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWBEHAVIOUR_KOPLHACOBFC_OFFSET))(this);
		}
	};
}
