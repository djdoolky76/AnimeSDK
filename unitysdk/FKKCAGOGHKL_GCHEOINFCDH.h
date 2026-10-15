#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F7EC0)

inline static constexpr unsigned int FKKCAGOGHKL_GCHEOINFCDH_TypeDefinitionIndex = 59340;

	class FKKCAGOGHKL_GCHEOINFCDH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "GCHEOINFCDH")->GetStaticField(0x2FE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET))();
		}

	};
