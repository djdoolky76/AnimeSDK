#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"
class PBHBHNNFDCM;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveSpineController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B0E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D3B2650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET UNITYSDK_OFFSET(0x1D3B1750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET UNITYSDK_OFFSET(0x1D3B11A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3B13A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3B2920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET UNITYSDK_OFFSET(0x1D3B2BB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET UNITYSDK_OFFSET(0x1D3B1C90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET UNITYSDK_OFFSET(0x1D3B2520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET UNITYSDK_OFFSET(0x1D3B1D60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET UNITYSDK_OFFSET(0x1D3B1990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET UNITYSDK_OFFSET(0x1D3B1890)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET UNITYSDK_OFFSET(0x1D3B1AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET UNITYSDK_OFFSET(0x1D3B1F70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET UNITYSDK_OFFSET(0x1D3B25E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpineControlService_TypeDefinitionIndex = 77717;

	class SpineControlService : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveSpineController* _SpineController; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::IdleLiveSpineAnimTriggerType>* _SpineTriggerDict; // 0x20
		::System::Collections::Generic::List_1<::PBHBHNNFDCM*>* _Triggers; // 0x28
		::System::Single _IdleInterval; // 0x30
		::System::UInt32 _SameNodeStayCount; // 0x34
		::System::Int32 _IdlePerformTimer; // 0x38
		::System::UInt32 _SameNodeStayCntCeil; // 0x3C
		// static const ::System::Object _ON_THANKS_GIFT_TRIGGER_TYPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void InitService(::RPG::Client::ActivityIdleLive::IdleLiveSpineController* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveSpineController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTriggerSpine(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET))(this, a1);
		}

		::System::Void _OnThanksGift(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET))(this, a1);
		}

		::System::Void _OnUnlockIdUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnPlaySpineAnimGroupId(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET))(this, a1);
		}

		::System::Void _OnStageRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _TriggerStaySameNodeTooLongSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET))(this);
		}

		::System::Void _OnShowQuestion(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET))(this, a1);
		}

		::System::Void _TryPlayIdleActionPeriodically()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET))(this);
		}

		::System::Void _BuildSpineTriggerDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET))(this);
		}

		::System::Void _BuildTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET))(this);
		}

		::System::Void _ClearUnlockTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET))(this);
		}

	};
}
