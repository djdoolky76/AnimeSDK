#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TimelineBindingType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO_PHJONBJNJCN_OFFSET UNITYSDK_OFFSET(0x1A0B6FB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B6F60)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int TrackBindInfo_TypeDefinitionIndex = 93089;

	class TrackBindInfo : public ::System::Object
	{
	public:
		::TimelineBindingType BindingType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* relativePath; // 0x18
		::System::String* trackGuid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO__CTOR_OFFSET))(this);
		}

		::System::Void PHJONBJNJCN(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Playables::PlayableDirector* GOCACFGOMCB, ::UnityEngine::Timeline::TimelineAsset* BHFILBOKCAL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::TimelineAsset*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_TRACKBINDINFO_PHJONBJNJCN_OFFSET))(this, IAPKABMDJNF, GOCACFGOMCB, BHFILBOKCAL);
		}
	};
}
