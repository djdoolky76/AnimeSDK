#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_STORY_CAPTUREANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A8CA0)

namespace RPGTools::Story
{
	class CaptureAnchorConfig : public ::System::Object
	{
	public:
		::System::String* GroupID; // 0x10
		::System::String* AnchorID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_STORY_CAPTUREANCHORCONFIG_CTOR_OFFSET))(this);
		}

	};
}
