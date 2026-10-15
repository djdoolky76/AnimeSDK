#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCBAB30)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBAB70)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__REACTIVATEACCOUNT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BCBAB80)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX___c_TypeDefinitionIndex = 9076;

	class BindManagerCX___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x38DF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x38DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C_CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__6_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__REACTIVATEACCOUNT_B__6_0_OFFSET))(this, a1);
		}

	};
}
