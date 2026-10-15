#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_MFAPFPBLKCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F9880)

inline static constexpr unsigned int FKKCAGOGHKL_MFAPFPBLKCE_TypeDefinitionIndex = 59325;

	class FKKCAGOGHKL_MFAPFPBLKCE : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_BNCCMMCKICC()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MFAPFPBLKCE")->GetStaticField(0x470F0);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JENAMNDGIAP()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "MFAPFPBLKCE")->GetStaticField(0x47100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_MFAPFPBLKCE_CCTOR_OFFSET))();
		}

	};
