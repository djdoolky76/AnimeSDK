#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldWelcomeDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BED0710)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BED0750)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDWELCOMEDIALOG___C__SHOW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BED0760)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldWelcomeDialog___c_TypeDefinitionIndex = 8825;

	class HandheldWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldWelcomeDialog*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x16E80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x16E88);
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
