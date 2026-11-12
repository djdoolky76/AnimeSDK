#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD091270)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingChallengeMatchItemViewModel_TypeDefinitionIndex = 84810;

	class B51RacingChallengeMatchItemViewModel : public ::System::Object
	{
	public:
		::System::String* MinimapPath; // 0x10
		::System::String* DarkMinimapPath; // 0x18
		::System::String* HistoryBestDriverIconPath; // 0x20
		::RPG::Client::TextID HistoryBestDriverName; // 0x28
		::RPG::Client::TextID TrackName; // 0x38
		::System::UInt32 HistoryBestTime; // 0x48
		::System::UInt32 MatchID; // 0x4C
		::RPG::Client::TextID MatchName; // 0x50
		::System::Boolean IsSelected; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 PlayerBestTime; // 0x64
		::System::UInt32 TotalLaps; // 0x68
		::System::UInt32 TrackID; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCHALLENGEMATCHITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
