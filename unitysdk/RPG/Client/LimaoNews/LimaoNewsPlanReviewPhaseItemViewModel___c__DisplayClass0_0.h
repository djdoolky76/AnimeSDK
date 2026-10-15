#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsPlanPhaseData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD3CD5C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xD3CD6F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xD3CD990)

namespace RPG::Client::LimaoNews
{
	class LimaoNewsPlanReviewPhaseItemViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsPlanService* planService; // 0x10
		::RPG::Client::LimaoNews::LimaoNewsWindowService* windowService; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsPlanPhaseData* phaseData; // 0x20
		::System::Boolean isFinished; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 planID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__0_OFFSET))(this);
		}

		::System::Void _Create_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPLANREVIEWPHASEITEMVIEWMODEL___C__DISPLAYCLASS0_0__CREATE_B__1_OFFSET))(this);
		}

	};
}
