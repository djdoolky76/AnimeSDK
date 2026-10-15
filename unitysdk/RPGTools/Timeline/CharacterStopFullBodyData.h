#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CDBC0)

namespace RPGTools::Timeline
{
	class CharacterStopFullBodyData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYDATA_CTOR_OFFSET))(this);
		}

	};
}
