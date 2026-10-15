#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC31A90)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC31AD0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET UNITYSDK_OFFSET(0x1BC31AE0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET UNITYSDK_OFFSET(0x1BC31AF0)

namespace MiHoYo::SDK::Base::ABTestPlatform
{
	inline static constexpr unsigned int ABTestClient___c_TypeDefinitionIndex = 8856;

	class ABTestClient___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Base.ABTestPlatform", "<>c")->GetStaticField(0x2FDA0);
		}

		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Base.ABTestPlatform", "<>c")->GetStaticField(0x2FDA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Base.ABTestPlatform", "<>c")->GetStaticField(0x2FDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C_CTOR_OFFSET))(this);
		}

		::System::String* _RequestABTestConfig_b__2_0(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_0_OFFSET))(this, a1);
		}

		::System::String* _RequestABTestConfig_b__2_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_ABTESTCLIENT___C__REQUESTABTESTCONFIG_B__2_1_OFFSET))(this, a1);
		}

	};
}
