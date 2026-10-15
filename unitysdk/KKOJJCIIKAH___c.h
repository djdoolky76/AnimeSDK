#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KKOJJCIIKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4D06C0)
#define KKOJJCIIKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D0700)
#define KKOJJCIIKAH___C__GETUNSEENINSCHEDULELEVELGROUPIDS_B__2_0_OFFSET UNITYSDK_OFFSET(0xB4D0710)

inline static constexpr unsigned int KKOJJCIIKAH___c_TypeDefinitionIndex = 82083;

	class KKOJJCIIKAH___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x548C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x548C8);
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
