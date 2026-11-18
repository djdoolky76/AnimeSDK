#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIZenkovFriendMarketSwitchRoleGarmentPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D5F90)
#define MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovFriendMarketSwitchRoleGarmentPageController__RefreshAvatarRTInSkinPanel_d__15_TypeDefinitionIndex = 62803;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	struct alignas(8) UIZenkovFriendMarketSwitchRoleGarmentPageController__RefreshAvatarRTInSkinPanel_d__15
	{
		::MoleMole::UIZenkovFriendMarketSwitchRoleGarmentPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::MoleMole::AvatarShowSetting* _avatarSetting_5__2; // 0x30
		::Foundation::AssetPath _avatarPath_5__3; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Int32 avatarID; // 0x4C
		::System::UInt32 skinID; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVFRIENDMARKETSWITCHROLEGARMENTPAGECONTROLLER__REFRESHAVATARRTINSKINPANEL_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
