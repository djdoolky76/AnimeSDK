#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
namespace RPGTools::Timeline { class BlusherData; }

#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERTIMELINEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3BD5C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoFaceBlusherTimelineBehaviour_TypeDefinitionIndex = 49149;

	class EmoFaceBlusherTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BlusherData* BlusherData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERTIMELINEBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
