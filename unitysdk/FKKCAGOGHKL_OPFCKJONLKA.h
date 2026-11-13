#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define FKKCAGOGHKL_OPFCKJONLKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAB14A0)

inline static constexpr unsigned int FKKCAGOGHKL_OPFCKJONLKA_TypeDefinitionIndex = 60605;

	class FKKCAGOGHKL_OPFCKJONLKA : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_MFMFIEHGBIB()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "OPFCKJONLKA")->GetStaticField(0x44B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_OPFCKJONLKA_CCTOR_OFFSET))();
		}

	};
