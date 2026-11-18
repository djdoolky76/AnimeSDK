#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace MoleMole { class ConfigUIAvatarShowData_ShowSettingsLoadingState; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C18B0)
#define MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS26_0__LOADBUDDYSHOWSETTINGSASSET_B__0_OFFSET UNITYSDK_OFFSET(0x1B8C18C0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIAvatarShowData___c__DisplayClass26_0_TypeDefinitionIndex = 75161;

	class ConfigUIAvatarShowData___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath assetPath; // 0x10
		::System::Collections::Generic::List_1<::System::Action*>* callbacksToCompleteAfterSyncLoad; // 0x20
		::System::Action* complete; // 0x28
		::MoleMole::ConfigUIAvatarShowData_ShowSettingsLoadingState* loadingState; // 0x30
		::System::Boolean isAync; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 loadToken; // 0x3C
		::System::Int32 buddyID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadBuddyShowSettingsAsset_b__0(::MoleMole::ConfigBuddyAvatarShowSettings* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIAVATARSHOWDATA___C__DISPLAYCLASS26_0__LOADBUDDYSHOWSETTINGSASSET_B__0_OFFSET))(this, config);
		}
	};
}
