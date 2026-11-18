#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAOGMMOAFGH.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class ENGKPGFGGLM;
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ABORTCURRENTREQUEST_OFFSET UNITYSDK_OFFSET(0x180F3FD0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGEPRELOADMAINCHARACTERTOTEAM_OFFSET UNITYSDK_OFFSET(0x180F4240)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGETEAMTOPRELOADMAINCHARACTER_OFFSET UNITYSDK_OFFSET(0x180F3E90)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_DELAYUNLOADMAINCHARACTERAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x180F4310)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLEENTITYTOREMOVE_OFFSET UNITYSDK_OFFSET(0x180F4400)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLELEVELTEAMREPLACE_OFFSET UNITYSDK_OFFSET(0x180F3BE0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLESWITCHREQUEST_OFFSET UNITYSDK_OFFSET(0x180F4040)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_INTERNALHANDLESWITCHREQUEST_OFFSET UNITYSDK_OFFSET(0x180F46B0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x180F3AF0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x180F4360)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_PRELOADMAINCHARACTERAVATARENTITY_OFFSET UNITYSDK_OFFSET(0x180F3E10)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x180F3840)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_TRYUNFREEZESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x180F45F0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_UNLOADPRELOADEDTEAM_OFFSET UNITYSDK_OFFSET(0x180F3C50)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x180F4790)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x180F4820)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x180F48B0)
#define MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x180F4940)

namespace MoleMole
{
	inline static constexpr unsigned int MainCharacterPreloadSubsystem_TypeDefinitionIndex = 83998;

	class MainCharacterPreloadSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* PreloadedTeam; // 0x10
		::GAOGMMOAFGH _switchRequest; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _entityToRemove; // 0x40
		::System::Boolean IsMainCharacterPreloaded; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 CachedLocalAvatarIndex; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void HandleLevelTeamReplace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLELEVELTEAMREPLACE_OFFSET))(this);
		}

		::System::Void PreloadMainCharacterAvatarEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_PRELOADMAINCHARACTERAVATARENTITY_OFFSET))(this, entity);
		}

		::System::Void ChangeTeamToPreloadMainCharacter(::System::Action* onSuccess, ::System::Action* onFailed, ::System::Action* onCanceled, ::System::Func_1<::System::Boolean>* validateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGETEAMTOPRELOADMAINCHARACTER_OFFSET))(this, onSuccess, onFailed, onCanceled, validateFunc);
		}

		::System::Void ChangePreloadMainCharacterToTeam(::System::Action* onSuccess, ::System::Action* onFailed, ::System::Action* onCanceled, ::System::Func_1<::System::Boolean>* validateFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_CHANGEPRELOADMAINCHARACTERTOTEAM_OFFSET))(this, onSuccess, onFailed, onCanceled, validateFunc);
		}

		::System::Void AbortCurrentRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ABORTCURRENTREQUEST_OFFSET))(this);
		}

		::System::Void DelayUnloadMainCharacterAvatarEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_DELAYUNLOADMAINCHARACTERAVATARENTITY_OFFSET))(this);
		}

		::System::Void UnloadPreloadedTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_UNLOADPRELOADEDTEAM_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void HandleEntityToRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLEENTITYTOREMOVE_OFFSET))(this);
		}

		::System::Void HandleSwitchRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_HANDLESWITCHREQUEST_OFFSET))(this);
		}

		::System::Void InternalHandleSwitchRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_INTERNALHANDLESWITCHREQUEST_OFFSET))(this);
		}

		::System::Void TryUnfreezeSwitchAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM_TRYUNFREEZESWITCHAVATAR_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCHARACTERPRELOADSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
