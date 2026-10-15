#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldEmailBindingDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0DC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0E00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__SHOW_B__71_0_OFFSET UNITYSDK_OFFSET(0x1BEF0E10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldEmailBindingDialog___c_TypeDefinitionIndex = 8810;

	class HandheldEmailBindingDialog___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__71_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x12760);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0x12768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__71_0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__SHOW_B__71_0_OFFSET))(this, a1);
		}

	};
}
