#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"

#define FKKCAGOGHKL_PGMMFHNAOKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x16773330)

inline static constexpr unsigned int FKKCAGOGHKL_PGMMFHNAOKG_TypeDefinitionIndex = 60614;

	class FKKCAGOGHKL_PGMMFHNAOKG : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_GBELCIENEBE()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x66BB0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_IONJOHMBJEH()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x66BC0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ADHKECBDCPC()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "PGMMFHNAOKG")->GetStaticField(0x66BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_PGMMFHNAOKG_CCTOR_OFFSET))();
		}

	};
