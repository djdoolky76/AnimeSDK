#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKMJPMFCNBK;
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZone; }
namespace System { class String; }

#define NPCCROWD_ANIMATION_ANIMATORZONESEGMENTWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0xE11AC80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorZoneSegmentWrap_TypeDefinitionIndex = 80199;

	class AnimatorZoneSegmentWrap : public ::System::Object
	{
	public:
		::PKMJPMFCNBK* zoneInfo; // 0x10
		::MoleMole::Config::AnimatorStateTimeSegment* segment; // 0x18
		::MoleMole::Config::AnimatorZone* zone; // 0x20

		::System::Void _ctor(::MoleMole::Config::AnimatorZone* zone, ::MoleMole::Config::AnimatorStateTimeSegment* segment, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZone*, ::MoleMole::Config::AnimatorStateTimeSegment*, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATORZONESEGMENTWRAP__CTOR_OFFSET))(this, zone, segment, key);
		}
	};
}
