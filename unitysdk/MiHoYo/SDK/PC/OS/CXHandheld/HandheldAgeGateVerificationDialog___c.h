#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateVerificationDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D070BB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D070BF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET UNITYSDK_OFFSET(0x1D070C00)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateVerificationDialog___c_TypeDefinitionIndex = 8812;

	class HandheldAgeGateVerificationDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xDB60);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*>** StaticGet___9__43_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xDB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__43_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEVERIFICATIONDIALOG___C__SHOW_B__43_0_OFFSET))(this, a1);
		}

	};
}
