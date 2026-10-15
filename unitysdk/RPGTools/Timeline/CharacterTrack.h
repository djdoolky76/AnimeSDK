#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"

#define RPGTOOLS_TIMELINE_CHARACTERTRACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C52C0)

namespace RPGTools::Timeline
{
	class CharacterTrack : public ::RPGTools::Timeline::CustomUniqueNameTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERTRACK_CTOR_OFFSET))(this);
		}

	};
}
