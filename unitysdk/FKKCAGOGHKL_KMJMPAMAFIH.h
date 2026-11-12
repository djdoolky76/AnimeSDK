#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_KMJMPAMAFIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16771190)

inline static constexpr unsigned int FKKCAGOGHKL_KMJMPAMAFIH_TypeDefinitionIndex = 60615;

	class FKKCAGOGHKL_KMJMPAMAFIH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "KMJMPAMAFIH")->GetStaticField(0x26560);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_HJKJJAHGAKK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KMJMPAMAFIH")->GetStaticField(0x26570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_KMJMPAMAFIH_CCTOR_OFFSET))();
		}

	};
