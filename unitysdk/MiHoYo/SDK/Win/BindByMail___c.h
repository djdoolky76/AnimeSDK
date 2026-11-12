#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class BindByMail; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDBYMAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE729E0)
#define MIHOYO_SDK_WIN_BINDBYMAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE72A20)
#define MIHOYO_SDK_WIN_BINDBYMAIL___C__SHOW_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CE72A30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindByMail___c_TypeDefinitionIndex = 9514;

	class BindByMail___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26850);
		}

		static ::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>** StaticGet___9__33_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::BindByMail*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__33_0(::MiHoYo::SDK::Win::BindByMail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::BindByMail*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDBYMAIL___C__SHOW_B__33_0_OFFSET))(this, a1);
		}

	};
}
