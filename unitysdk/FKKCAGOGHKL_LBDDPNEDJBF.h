#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_LBDDPNEDJBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15804B90)

inline static constexpr unsigned int FKKCAGOGHKL_LBDDPNEDJBF_TypeDefinitionIndex = 59339;

	class FKKCAGOGHKL_LBDDPNEDJBF : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x11DD0);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_BEHDFFOLNDM()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x11DE0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EIBPICHPLHP()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x11DF0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_GCBLEIDLMHM()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x11E00);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_NGIEDILEGOL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBDDPNEDJBF")->GetStaticField(0x11E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_LBDDPNEDJBF_CCTOR_OFFSET))();
		}

	};
