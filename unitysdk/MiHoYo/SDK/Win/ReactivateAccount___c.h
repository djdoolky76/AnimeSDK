#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class ReactivateAccount; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDBDD0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDBE10)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__SHOW_B__12_0_OFFSET UNITYSDK_OFFSET(0x1BDDBE20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccount___c_TypeDefinitionIndex = 9547;

	class ReactivateAccount___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23930);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x23938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__12_0(::MiHoYo::SDK::Win::ReactivateAccount* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ReactivateAccount*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT___C__SHOW_B__12_0_OFFSET))(this, a1);
		}

	};
}
