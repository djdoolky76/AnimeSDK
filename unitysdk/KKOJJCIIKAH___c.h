#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System { class Action; }
namespace System { class Object; }

#define KKOJJCIIKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D7450)
#define KKOJJCIIKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D7490)
#define KKOJJCIIKAH___C__GETUNSEENINSCHEDULELEVELGROUPIDS_B__2_0_OFFSET UNITYSDK_OFFSET(0xB4D74A0)

	class KKOJJCIIKAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B160);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKOJJCIIKAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOJJCIIKAH___C_CTOR_OFFSET))(this);
		}

		::System::Void _GetUnseenInScheduleLevelGroupIDs_b__2_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + KKOJJCIIKAH___C__GETUNSEENINSCHEDULELEVELGROUPIDS_B__2_0_OFFSET))(this, a1);
		}

	};
