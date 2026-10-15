#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_LBDDPNEDJBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F8F70)

inline static constexpr unsigned int FKKCAGOGHKL_LBDDPNEDJBF_TypeDefinitionIndex = 59339;

	class FKKCAGOGHKL_LBDDPNEDJBF : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EIBPICHPLHP()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x13B40);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_GCBLEIDLMHM()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x13B50);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_BEHDFFOLNDM()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x13B60);
		}

		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x13B70);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_NGIEDILEGOL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x13B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_LBDDPNEDJBF_CCTOR_OFFSET))();
		}

	};
