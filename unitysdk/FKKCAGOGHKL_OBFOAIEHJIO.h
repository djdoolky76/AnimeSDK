#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_OBFOAIEHJIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAB0DA0)

inline static constexpr unsigned int FKKCAGOGHKL_OBFOAIEHJIO_TypeDefinitionIndex = 60609;

	class FKKCAGOGHKL_OBFOAIEHJIO : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_OIMKBNDCCNP()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "OBFOAIEHJIO")->GetStaticField(0x10AF0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_DCFIFHAABNO()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "OBFOAIEHJIO")->GetStaticField(0x10B00);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_LJEFHDNDKIH()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "OBFOAIEHJIO")->GetStaticField(0x10B10);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_KJAOFOBOABP()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "OBFOAIEHJIO")->GetStaticField(0x10B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_OBFOAIEHJIO_CCTOR_OFFSET))();
		}

	};
