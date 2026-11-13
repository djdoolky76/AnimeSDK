#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C361D50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C361D90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_0_OFFSET UNITYSDK_OFFSET(0x1C361DA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_1_OFFSET UNITYSDK_OFFSET(0x1C361F60)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerBase___c_TypeDefinitionIndex = 8746;

	class BindManagerBase___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCE60);
		}

		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCE68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_0_OFFSET))(this);
		}

		::System::Void _ShowEmailBindingDialog_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERBASE___C__SHOWEMAILBINDINGDIALOG_B__19_1_OFFSET))(this);
		}

	};
}
