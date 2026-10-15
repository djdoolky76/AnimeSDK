#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class OverseaGuestBindMail; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDB1D60)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB1DA0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BDB1DB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail___c_TypeDefinitionIndex = 9496;

	class OverseaGuestBindMail___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22030);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::Win::OverseaGuestBindMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaGuestBindMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET))(this, a1);
		}

	};
}
