#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C35C810)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C35C850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C35C860)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c_TypeDefinitionIndex = 8733;

	class AgeGateManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCAC0);
		}

		static ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__8_0(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET))(this, a1);
		}

	};
}
