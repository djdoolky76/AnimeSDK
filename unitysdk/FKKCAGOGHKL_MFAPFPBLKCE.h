#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_MFAPFPBLKCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x158054A0)

inline static constexpr unsigned int FKKCAGOGHKL_MFAPFPBLKCE_TypeDefinitionIndex = 59325;

	class FKKCAGOGHKL_MFAPFPBLKCE : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JENAMNDGIAP()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "MFAPFPBLKCE")->GetStaticField(0x4B9A0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_BNCCMMCKICC()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "MFAPFPBLKCE")->GetStaticField(0x4B9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_MFAPFPBLKCE_CCTOR_OFFSET))();
		}

	};
