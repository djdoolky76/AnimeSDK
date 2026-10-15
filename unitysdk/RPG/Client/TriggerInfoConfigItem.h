#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_CLIENT_TRIGGERINFOCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE331D00)

namespace RPG::Client
{
	class TriggerInfoConfigItem : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::RPG::GameCore::LevelTriggerInfo* Info; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGERINFOCONFIGITEM_CTOR_OFFSET))(this);
		}

	};
}
