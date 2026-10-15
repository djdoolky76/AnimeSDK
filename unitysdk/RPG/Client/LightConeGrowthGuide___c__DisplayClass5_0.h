#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LightConeRecommendData; }
namespace System { class Action; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD395870)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD3958F0)

namespace RPG::Client
{
	class LightConeGrowthGuide___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__0(::RPG::Client::LightConeRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE___C__DISPLAYCLASS5_0__REQUESTRECOMMENDDATA_B__0_OFFSET))(this, a1);
		}

	};
}
