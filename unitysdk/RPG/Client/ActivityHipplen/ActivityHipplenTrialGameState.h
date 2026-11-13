#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameConfig.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameStateType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenTrialGameState_TrialStep.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NMMNJLDKJMD_ABBHBIKKFIG;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialData; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA6940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCBFD40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x1CCBFED0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1CCBFEB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x1CCBF6F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1CCBFEF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_PROGRESSTRIAL_OFFSET UNITYSDK_OFFSET(0x1CCBFCF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1CCBF740)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1CCBFC30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET UNITYSDK_OFFSET(0x1CCBFEE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x1CCBFEC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CREATESWITCHCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CCBFA70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET UNITYSDK_OFFSET(0x1CCBFE00)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrialGameState_TypeDefinitionIndex = 77855;

	class ActivityHipplenTrialGameState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig _GameConfig_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* TrialData; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialGameState_TrialStep CurrentStep; // 0x28
		::System::Boolean _CanSwitchAutoMode_k__BackingField; // 0x2C
		::System::Boolean _SkipMissionCheck; // 0x2D
		::System::Void _ctor(::RPG::Client::ActivityHipplen::ActivityHipplenTrialData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTrialData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType get_StateType()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_STATETYPE_OFFSET))(this);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnFinish(::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONFINISH_OFFSET))(this, a1);
		}

		::System::Void ProgressTrial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_PROGRESSTRIAL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSettleHipplenWorkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__ONSETTLEHIPPLENWORKSCRSP_OFFSET))(this, a1, a2);
		}

		::NMMNJLDKJMD_ABBHBIKKFIG* _CreateSwitchContext()
		{
			return ((::NMMNJLDKJMD_ABBHBIKKFIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE__CREATESWITCHCONTEXT_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig get_GameConfig()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_GAMECONFIG_OFFSET))(this);
		}

		::System::Void set_GameConfig(::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_GAMECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_CanSwitchAutoMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_CANSWITCHAUTOMODE_OFFSET))(this);
		}

		::System::Void set_CanSwitchAutoMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_SET_CANSWITCHAUTOMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE_GET_TITLE_OFFSET))(this);
		}

	};
}
