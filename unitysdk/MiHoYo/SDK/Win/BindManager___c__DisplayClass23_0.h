#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1721C540)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x172262C0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x17226370)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__2_OFFSET UNITYSDK_OFFSET(0x172264A0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__3_OFFSET UNITYSDK_OFFSET(0x17226800)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__4_OFFSET UNITYSDK_OFFSET(0x17226620)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass23_0_TypeDefinitionIndex = 9394;

	class BindManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userData; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__4; // 0x18
		::System::String* ticket; // 0x20
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__0_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__1_OFFSET))(this);
		}

		::System::Void _ShowBindMail_b__2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__2_OFFSET))(this, a1);
		}

		::System::Void _ShowBindMail_b__4(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__4_OFFSET))(this, a1);
		}

		::System::Void _ShowBindMail_b__3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS23_0__SHOWBINDMAIL_B__3_OFFSET))(this, a1, a2);
		}

	};
}
