#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class BindMiHoYo; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMIHOYO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCD7960)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD79A0)
#define MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BCD79B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindMiHoYo___c_TypeDefinitionIndex = 9503;

	class BindMiHoYo___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindMiHoYo*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2DBC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x2DBC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__29_0(::MiHoYo::SDK::Win::BindMiHoYo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindMiHoYo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMIHOYO___C__SHOW_B__29_0_OFFSET))(this, a1);
		}

	};
}
