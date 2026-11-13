#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/LoginPattern.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class LoginDataModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1721F070)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x17227910)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__10_OFFSET UNITYSDK_OFFSET(0x17227340)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__11_OFFSET UNITYSDK_OFFSET(0x17227650)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__12_OFFSET UNITYSDK_OFFSET(0x17227AF0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__13_OFFSET UNITYSDK_OFFSET(0x172283C0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__15_OFFSET UNITYSDK_OFFSET(0x17228480)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__17_OFFSET UNITYSDK_OFFSET(0x17228010)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__18_OFFSET UNITYSDK_OFFSET(0x172280D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__19_OFFSET UNITYSDK_OFFSET(0x17228160)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x172279D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__20_OFFSET UNITYSDK_OFFSET(0x172281A0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__21_OFFSET UNITYSDK_OFFSET(0x17228260)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__22_OFFSET UNITYSDK_OFFSET(0x172282F0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__23_OFFSET UNITYSDK_OFFSET(0x17228330)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0x17227A90)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__3_OFFSET UNITYSDK_OFFSET(0x17228510)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__4_OFFSET UNITYSDK_OFFSET(0x172285D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__5_OFFSET UNITYSDK_OFFSET(0x17228610)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__6_OFFSET UNITYSDK_OFFSET(0x172286D0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__7_OFFSET UNITYSDK_OFFSET(0x17228B60)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__8_OFFSET UNITYSDK_OFFSET(0x17228C20)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__9_OFFSET UNITYSDK_OFFSET(0x172271A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass36_0_TypeDefinitionIndex = 9397;

	class BindManager___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__23; // 0x10
		::System::Action* __9__18; // 0x18
		::System::Action* __9__19; // 0x20
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*>* __9__11; // 0x28
		::MiHoYo::SDK::Win::BindManager* __4__this; // 0x30
		::System::Action* __9__17; // 0x38
		::System::Action* __9__22; // 0x40
		::System::Action* __9__20; // 0x48
		::MiHoYo::SDK::JSONNode* model; // 0x50
		::System::Action* __9__21; // 0x58
		::MiHoYo::SDK::LoginPattern pattern; // 0x60
		::System::Int32 index; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__9(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__9_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCheckAccount_b__10(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__10_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCheckAccount_b__11(::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::LoginDataModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__11_OFFSET))(this, a1);
		}

		::System::Void _OnCheckAccount_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__0_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__1_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__2(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__2_OFFSET))(this, a1);
		}

		::System::Void _OnCheckAccount_b__12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__12_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__17()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__17_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__18_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__19()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__19_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__20_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__21()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__21_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__22_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__23(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__23_OFFSET))(this, a1);
		}

		::System::Void _OnCheckAccount_b__13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__13_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__15_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__3_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__4(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__4_OFFSET))(this, a1);
		}

		::System::Void _OnCheckAccount_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__5_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__6(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCheckAccount_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__7_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_0__ONCHECKACCOUNT_B__8_OFFSET))(this);
		}

	};
}
