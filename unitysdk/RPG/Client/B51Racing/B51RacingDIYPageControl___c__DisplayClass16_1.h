#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPABFJKNGL;
namespace RPG::Client::B51Racing { class B51RacingDIYPageControl; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC787440)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPAGECONTROL___C__DISPLAYCLASS16_1___SUBMIT_B__1_OFFSET UNITYSDK_OFFSET(0xC787450)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPageControl___c__DisplayClass16_1_TypeDefinitionIndex = 81779;

	template <typename T>
	class B51RacingDIYPageControl___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::DBPABFJKNGL* carDIYService; // 0x10
		::RPG::Client::B51Racing::B51RacingDIYPageControl* __4__this; // 0x18
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
