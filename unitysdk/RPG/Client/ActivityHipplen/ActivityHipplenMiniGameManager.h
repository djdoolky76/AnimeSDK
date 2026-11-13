#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenMiniGameManager_InnerState.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenGameConfig.h"
class ELMBLCNMADI;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMainController; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameBase; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameManager; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ADD__ONEVENT_OFFSET UNITYSDK_OFFSET(0x1CCB5970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB4CA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CCB4D40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CCB56B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_FIREEVENT_OFFSET UNITYSDK_OFFSET(0x1CCB3660)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GETGAME_OFFSET UNITYSDK_OFFSET(0x1CCB5760)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_CANRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1CCB5EC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_CANSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1CCB61C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0x1CCB6210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x1CCB61A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x1CCB4C20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CCB4DD0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_LOADCHARACTER_OFFSET UNITYSDK_OFFSET(0x1CCB6060)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_MARKCANSTART_OFFSET UNITYSDK_OFFSET(0x1CCB5B30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_NOTIFYGAMEGRADECHANGED_OFFSET UNITYSDK_OFFSET(0x1CCB5AC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0x1CCB2D10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1CCB60E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1CCB5B80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1CCB58E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTERGAMEFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CCB5800)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTERGAMEGRADECHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CCB5870)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REMOVE__ONEVENT_OFFSET UNITYSDK_OFFSET(0x1CCB5A60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REPORT_OFFSET UNITYSDK_OFFSET(0x1CCB5F90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_RESTART_OFFSET UNITYSDK_OFFSET(0x1CCB5D00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0x1CCB5C40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_SET_ISINTRIAL_OFFSET UNITYSDK_OFFSET(0x1CCB6220)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_SET_MAINCTRL_OFFSET UNITYSDK_OFFSET(0x1CCB61B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1CCB57A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1CCB4CB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_UNREGISTEREVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x1CCB59D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameManager_TypeDefinitionIndex = 77908;

	class ActivityHipplenMiniGameManager : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameBase* _CurrentGame; // 0x10
		::System::Action_1<::RPG::GameCore::HipplenGameGradeType>* _OnGameFinished; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* _MainCtrl_k__BackingField; // 0x20
		::System::Action_1<::RPG::GameCore::HipplenGameGradeType>* _OnGameGradeChanged; // 0x28
		::ELMBLCNMADI* _GameReporter; // 0x30
		::System::Action_1<::System::Object*>* _OnEvent; // 0x38
		::UnityEngine::Transform* _Root; // 0x40
		::System::Boolean _IsInTrial_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager_InnerState _State; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameManager*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_OFFSET))(a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGameConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameBase* GetGame()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GETGAME_OFFSET))(this);
		}

		::System::Void StartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_STARTGAME_OFFSET))(this);
		}

		::System::Void RegisterGameFinishedCallback(::System::Action_1<::RPG::GameCore::HipplenGameGradeType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::HipplenGameGradeType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTERGAMEFINISHEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RegisterGameGradeChangedCallback(::System::Action_1<::RPG::GameCore::HipplenGameGradeType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::HipplenGameGradeType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTERGAMEGRADECHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnGameFinished(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ONGAMEFINISHED_OFFSET))(this, a1);
		}

		::System::Void FireEvent(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_FIREEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterEventListener(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REGISTEREVENTLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnregisterEventListener(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_UNREGISTEREVENTLISTENER_OFFSET))(this, a1);
		}

		::System::Void NotifyGameGradeChanged(::RPG::GameCore::HipplenGameGradeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_NOTIFYGAMEGRADECHANGED_OFFSET))(this, a1);
		}

		::System::Void MarkCanStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_MARKCANSTART_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_RESUME_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_RESTART_OFFSET))(this);
		}

		::System::Void Report()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REPORT_OFFSET))(this);
		}

		::System::Void LoadCharacter(::RPG::GameCore::HipplenMiniGameLoadCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenMiniGameLoadCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_LOADCHARACTER_OFFSET))(this, a1);
		}

		::System::Void OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenMainController* get_MainCtrl()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenMainController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_MAINCTRL_OFFSET))(this);
		}

		::System::Void set_MainCtrl(::RPG::Client::ActivityHipplen::ActivityHipplenMainController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenMainController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_SET_MAINCTRL_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRestartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_CANRESTARTGAME_OFFSET))(this);
		}

		::System::Boolean get_CanStartGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_CANSTARTGAME_OFFSET))(this);
		}

		::System::Boolean get_IsInTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_GET_ISINTRIAL_OFFSET))(this);
		}

		::System::Void set_IsInTrial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_SET_ISINTRIAL_OFFSET))(this, a1);
		}

		::System::Void add__OnEvent(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_ADD__ONEVENT_OFFSET))(this, a1);
		}

		::System::Void remove__OnEvent(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEMANAGER_REMOVE__ONEVENT_OFFSET))(this, a1);
		}

	};
}
