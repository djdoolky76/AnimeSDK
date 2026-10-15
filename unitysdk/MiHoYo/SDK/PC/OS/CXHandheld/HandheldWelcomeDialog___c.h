#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldWelcomeDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEFB810)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFB850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BEFB860)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	class HandheldWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x12B40);
		}

		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x12B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__26_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET))(this, a1);
		}

	};
}
