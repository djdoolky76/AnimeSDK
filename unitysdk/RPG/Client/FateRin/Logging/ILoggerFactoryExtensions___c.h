#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Diagnostics { class StackFrame; }
namespace System::Reflection { class MethodBase; }

#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD92CE50)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD92CE90)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD92CEA0)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_1_OFFSET UNITYSDK_OFFSET(0xD92CF30)
#define RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_2_OFFSET UNITYSDK_OFFSET(0xD92CFC0)

namespace RPG::Client::FateRin::Logging
{
	inline static constexpr unsigned int ILoggerFactoryExtensions___c_TypeDefinitionIndex = 83818;

	class ILoggerFactoryExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodBase*, ::System::Type*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Reflection::MethodBase*, ::System::Type*>**)UnitySDK::FromName("RPG.Client.FateRin.Logging", "<>c")->GetStaticField(0x5F6D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.FateRin.Logging", "<>c")->GetStaticField(0x5F6D8);
		}

		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.FateRin.Logging", "<>c")->GetStaticField(0x5F6E0);
		}

		static ::System::Func_2<::System::Diagnostics::StackFrame*, ::System::Reflection::MethodBase*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Diagnostics::StackFrame*, ::System::Reflection::MethodBase*>**)UnitySDK::FromName("RPG.Client.FateRin.Logging", "<>c")->GetStaticField(0x5F6E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodBase* __FindCallerType_b__1_0(::System::Diagnostics::StackFrame* a1)
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID, ::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_0_OFFSET))(this, a1);
		}

		::System::Type* __FindCallerType_b__1_1(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_1_OFFSET))(this, a1);
		}

		::System::Boolean __FindCallerType_b__1_2(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_LOGGING_ILOGGERFACTORYEXTENSIONS___C___FINDCALLERTYPE_B__1_2_OFFSET))(this, a1);
		}

	};
}
