#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressOngoingViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkResultData; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3D1BB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS15_0__PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xD3D3F50)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsPlanService___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPlanService* __4__this; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* startViewModel; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsWorkResultData* resultData; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressOngoingViewModel* ongoingViewModel; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayWorkResultPerformanceAndShowResultPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANSERVICE___C__DISPLAYCLASS15_0__PLAYWORKRESULTPERFORMANCEANDSHOWRESULTPAGE_B__0_OFFSET))(this);
		}

	};
}
