#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class OverseaGuestBindMail; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD8B530)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8B570)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BD8B580)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail___c_TypeDefinitionIndex = 9496;

	class OverseaGuestBindMail___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2BC70);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::OverseaGuestBindMail*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2BC78);
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
