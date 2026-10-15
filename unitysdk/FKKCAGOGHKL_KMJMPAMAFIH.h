#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_KMJMPAMAFIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F8D50)

inline static constexpr unsigned int FKKCAGOGHKL_KMJMPAMAFIH_TypeDefinitionIndex = 59338;

	class FKKCAGOGHKL_KMJMPAMAFIH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_HJKJJAHGAKK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KMJMPAMAFIH")->GetStaticField(0x2FE20);
		}

		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "KMJMPAMAFIH")->GetStaticField(0x2FE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_KMJMPAMAFIH_CCTOR_OFFSET))();
		}

	};
