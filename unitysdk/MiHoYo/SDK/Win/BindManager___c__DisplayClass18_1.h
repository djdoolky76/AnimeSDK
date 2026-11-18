#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE47A40)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1CE480F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass18_1_TypeDefinitionIndex = 20676;

	template <typename T>
	class BindManager___c__DisplayClass18_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverseaVerifyPhonePluginUI_b__4(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS18_1__SHOWOVERSEAVERIFYPHONEPLUGINUI_B__4_OFFSET))(this, response);
		}
	};
}
