#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D05C930)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05C970)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__REACTIVATEACCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D05C980)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerCXHandheld___c_TypeDefinitionIndex = 8754;

	class BindManagerCXHandheld___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCB50);
		}

		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "<>c")->GetStaticField(0xCB58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C_CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__5_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__REACTIVATEACCOUNT_B__5_0_OFFSET))(this, a1);
		}

	};
}
