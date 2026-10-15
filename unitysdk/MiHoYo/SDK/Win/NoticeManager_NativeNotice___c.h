#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountPlatformPlugin_MessageHandler; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD7EB00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD7EB30)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__TRYONSETSERVERID_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BD7EB40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_NativeNotice___c_TypeDefinitionIndex = 9397;

	class NoticeManager_NativeNotice___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x359A0);
		}

		static ::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler** StaticGet___9__9_0()
		{
			return (::MiHoYo::SDK::AccountPlatformPlugin_MessageHandler**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x359A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C_CTOR_OFFSET))(this);
		}

		::System::Void _TryOnSetServerID_b__9_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NATIVENOTICE___C__TRYONSETSERVERID_B__9_0_OFFSET))(this, a1);
		}

	};
}
