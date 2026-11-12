#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE5B900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE5B940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___ENTERNEXTNODESTANDALONE_B__69_0_OFFSET UNITYSDK_OFFSET(0xCE5B990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___REENTERCURNODESTANDALONE_B__68_0_OFFSET UNITYSDK_OFFSET(0xCE5B950)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int StageProgressViewModel___c_TypeDefinitionIndex = 77770;

	class StageProgressViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x27280);
		}

		static ::System::Action_1<::RPG::Client::BaseGameFlow*>** StaticGet___9__69_0()
		{
			return (::System::Action_1<::RPG::Client::BaseGameFlow*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x27288);
		}

		static ::System::Action_1<::RPG::Client::BaseGameFlow*>** StaticGet___9__68_0()
		{
			return (::System::Action_1<::RPG::Client::BaseGameFlow*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x27290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void __ReEnterCurNodeStandalone_b__68_0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___REENTERCURNODESTANDALONE_B__68_0_OFFSET))(this, a1);
		}

		::System::Void __EnterNextNodeStandalone_b__69_0(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_STAGEPROGRESSVIEWMODEL___C___ENTERNEXTNODESTANDALONE_B__69_0_OFFSET))(this, a1);
		}

	};
}
