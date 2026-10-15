#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define FKKCAGOGHKL_OPFCKJONLKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x157FAD70)

inline static constexpr unsigned int FKKCAGOGHKL_OPFCKJONLKA_TypeDefinitionIndex = 59328;

	class FKKCAGOGHKL_OPFCKJONLKA : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_MFMFIEHGBIB()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "OPFCKJONLKA")->GetStaticField(0x39510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_OPFCKJONLKA_CCTOR_OFFSET))();
		}

	};
