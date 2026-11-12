#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS52_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEFF10)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS52_0___ONRANKBOARDRECEIVED_B__0_OFFSET UNITYSDK_OFFSET(0xCEF0B00)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowFriendRankViewModel___c__DisplayClass52_0_TypeDefinitionIndex = 84923;

	class RealityShowFriendRankViewModel___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::System::UInt32 challengeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS52_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnRankBoardReceived_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS52_0___ONRANKBOARDRECEIVED_B__0_OFFSET))(this, a1);
		}

	};
}
