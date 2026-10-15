#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPABFJKNGL;
namespace RPG::Client::B51Racing { class B51RacingDIYPageControl; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC788DA0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1___SUBMIT_B__1_OFFSET UNITYSDK_OFFSET(0xC78DF60)

namespace RPG::Client::B51Racing
{
	template <typename T>
	class B51RacingDIYPageControl___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::B51RacingDIYPageControl* __4__this; // 0x10
		::DBPABFJKNGL* carDIYService; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __Submit_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1___SUBMIT_B__1_OFFSET))(this);
		}

	};
}
