#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define KGICAFNNGMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x19775A70)

inline static constexpr unsigned int KGICAFNNGMB_TypeDefinitionIndex = 58794;

	class KGICAFNNGMB : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_KACNBNBIAIA()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x4D8A0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FCFEJCBJOFL()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KGICAFNNGMB")->GetStaticField(0x4D8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGICAFNNGMB_CCTOR_OFFSET))();
		}

	};
