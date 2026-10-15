#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"

#define FKKCAGOGHKL_PGMMFHNAOKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x157FAE20)

inline static constexpr unsigned int FKKCAGOGHKL_PGMMFHNAOKG_TypeDefinitionIndex = 59337;

	class FKKCAGOGHKL_PGMMFHNAOKG : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ADHKECBDCPC()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x4FDF0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_IONJOHMBJEH()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x4FE00);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_GBELCIENEBE()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x4FE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_PGMMFHNAOKG_CCTOR_OFFSET))();
		}

	};
