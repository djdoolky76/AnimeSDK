#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define KGICAFNNGMB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3E6950)

inline static constexpr unsigned int KGICAFNNGMB_TypeDefinitionIndex = 57566;

	class KGICAFNNGMB : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_KACNBNBIAIA()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x47870);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FCFEJCBJOFL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x47880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGICAFNNGMB_CCTOR_OFFSET))();
		}

	};
