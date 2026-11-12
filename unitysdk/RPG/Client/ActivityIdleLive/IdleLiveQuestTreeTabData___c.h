#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDE4820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCDE4860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_0_OFFSET UNITYSDK_OFFSET(0xCDE4870)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_1_OFFSET UNITYSDK_OFFSET(0xCDE48D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeTabData___c_TypeDefinitionIndex = 77706;

	class IdleLiveQuestTreeTabData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x205A0);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x205A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x205B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetChapterQuestListReward_b__3_0(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetChapterQuestListReward_b__3_1(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA___C__GETCHAPTERQUESTLISTREWARD_B__3_1_OFFSET))(this, a1);
		}

	};
}
