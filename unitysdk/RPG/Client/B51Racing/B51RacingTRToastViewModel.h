#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGTRTOASTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD118410)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingTRToastViewModel_TypeDefinitionIndex = 84821;

	class B51RacingTRToastViewModel : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 TrID; // 0x18
		::System::UInt32 EnemyID; // 0x1C
		::RPG::Client::TextID TitleText; // 0x20
		::RPG::Client::TextID ContentText; // 0x30
		::System::UInt32 VoiceID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGTRTOASTVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
