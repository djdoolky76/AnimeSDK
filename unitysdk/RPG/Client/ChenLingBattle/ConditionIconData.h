#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_CONDITIONICONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

namespace RPG::Client::ChenLingBattle
{
	struct alignas(8) ConditionIconData
	{
		::RPG::GameCore::ChenLingIconType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Path; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChenLingIconType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingIconType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITIONICONDATA_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
