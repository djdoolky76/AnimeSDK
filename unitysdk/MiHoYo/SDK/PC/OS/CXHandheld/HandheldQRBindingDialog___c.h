#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldQRBindingDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF4AD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF4B10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__SHOW_B__40_0_OFFSET UNITYSDK_OFFSET(0x1BEF4B20)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldQRBindingDialog___c_TypeDefinitionIndex = 8817;

	class HandheldQRBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*>** StaticGet___9__40_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x128D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x128D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__40_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldQRBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__SHOW_B__40_0_OFFSET))(this, a1);
		}

	};
}
