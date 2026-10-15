#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define KGICAFNNGMB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3ED7B0)

inline static constexpr unsigned int KGICAFNNGMB_TypeDefinitionIndex = 57566;

	class KGICAFNNGMB : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FCFEJCBJOFL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x51A70);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_KACNBNBIAIA()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x51A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGICAFNNGMB_CCTOR_OFFSET))();
		}

	};
