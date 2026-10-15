#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGKNPHGNNDI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7B5F80)

namespace RPG::Client::B51Racing
{
	class B51RacingScoreBoardPageViewModel : public ::System::Object
	{
	public:
		::System::Action* OnClose; // 0x10
		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* RankEntries; // 0x18
		::System::Int32 PlayerNewRank; // 0x20
		::System::Boolean IsCycleEnd; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 PlayerPrevRank; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGSCOREBOARDPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
