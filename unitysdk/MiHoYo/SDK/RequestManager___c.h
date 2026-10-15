#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFA19C0)
#define MIHOYO_SDK_REQUESTMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFA1A00)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BFA1A10)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET UNITYSDK_OFFSET(0x1BFA1A20)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET UNITYSDK_OFFSET(0x1BFA1A40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c_TypeDefinitionIndex = 8064;

	class RequestManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257A0);
		}

		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257A8);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x257B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _RequestABTest_b__26_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET))(this, a1);
		}

		::System::String* _RequestABTest_b__26_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET))(this, a1);
		}

		::System::Void _RequestPayDialogABTestCN_b__27_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET))(this, a1);
		}

	};
}
