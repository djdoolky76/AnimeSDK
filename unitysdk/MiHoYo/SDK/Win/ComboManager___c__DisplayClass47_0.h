#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__0_OFFSET UNITYSDK_OFFSET(0x1E077870)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__1_OFFSET UNITYSDK_OFFSET(0x1E0778D0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__2_OFFSET UNITYSDK_OFFSET(0x1E077900)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__3_OFFSET UNITYSDK_OFFSET(0x1E077960)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__4_OFFSET UNITYSDK_OFFSET(0x1E0779C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E077860)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass47_0_TypeDefinitionIndex = 20726;

	class ComboManager___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _Bind_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__0_OFFSET))(this);
		}

		::System::Void _Bind_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__1_OFFSET))(this);
		}

		::System::Void _Bind_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__2_OFFSET))(this);
		}

		::System::Void _Bind_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__3_OFFSET))(this);
		}

		::System::Void _Bind_b__4(::MiHoYo::SDK::NetworkResponseModel* response, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS47_0__BIND_B__4_OFFSET))(this, response, account);
		}
	};
}
