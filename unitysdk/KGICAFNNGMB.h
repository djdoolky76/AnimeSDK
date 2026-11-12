#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define KGICAFNNGMB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC80660)

inline static constexpr unsigned int KGICAFNNGMB_TypeDefinitionIndex = 58794;

	class KGICAFNNGMB : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FCFEJCBJOFL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x3C9D0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_KACNBNBIAIA()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x3C9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGICAFNNGMB_CCTOR_OFFSET))();
		}

	};
