#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF39E0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1BCF4030)

namespace MiHoYo::SDK::Win
{
	template <typename T>
	class BindManager___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__4(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__4_OFFSET))(this, a1);
		}

	};
}
