#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAAE520)

inline static constexpr unsigned int FKKCAGOGHKL_GCHEOINFCDH_TypeDefinitionIndex = 60617;

	class FKKCAGOGHKL_GCHEOINFCDH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "GCHEOINFCDH")->GetStaticField(0x2F1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET))();
		}

	};
