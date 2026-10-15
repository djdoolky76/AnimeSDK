#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }

#define BEMLFGJGOKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B8880)

	class BEMLFGJGOKN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*>* GGHCKBHGHFC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMLFGJGOKN_CTOR_OFFSET))(this);
		}

	};
