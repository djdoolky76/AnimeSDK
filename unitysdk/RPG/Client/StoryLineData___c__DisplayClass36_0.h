#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCMFHHKJDEE;

#define RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE1427C0)
#define RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__GETSTORYLINEFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0xE142D50)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData___c__DisplayClass36_0_TypeDefinitionIndex = 67989;

	class StoryLineData___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::UInt32 floorID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetStoryLineFloor_b__0(::MCMFHHKJDEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCMFHHKJDEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__DISPLAYCLASS36_0__GETSTORYLINEFLOOR_B__0_OFFSET))(this, a1);
		}

	};
}
