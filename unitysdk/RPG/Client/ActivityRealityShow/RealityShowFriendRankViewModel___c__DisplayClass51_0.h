#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIKNDKJDLG;
namespace RPG::Client::ActivityRealityShow { class RealityShowFriendRankTabViewModel; }
namespace RPG::Client::ActivityRealityShow { class RealityShowFriendRankViewModel; }

#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEEFCB0)
#define RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS51_0___REQUESTRANKBOARDS_B__0_OFFSET UNITYSDK_OFFSET(0xCEF0AD0)

namespace RPG::Client::ActivityRealityShow
{
	inline static constexpr unsigned int RealityShowFriendRankViewModel___c__DisplayClass51_0_TypeDefinitionIndex = 84922;

	class RealityShowFriendRankViewModel___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankTabViewModel* tab; // 0x10
		::RPG::Client::ActivityRealityShow::RealityShowFriendRankViewModel* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void __RequestRankBoards_b__0(::BJIKNDKJDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJIKNDKJDLG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREALITYSHOW_REALITYSHOWFRIENDRANKVIEWMODEL___C__DISPLAYCLASS51_0___REQUESTRANKBOARDS_B__0_OFFSET))(this, a1);
		}

	};
}
