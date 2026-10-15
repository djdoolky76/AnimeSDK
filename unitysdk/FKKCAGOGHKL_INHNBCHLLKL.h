#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_INHNBCHLLKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15804110)

inline static constexpr unsigned int FKKCAGOGHKL_INHNBCHLLKL_TypeDefinitionIndex = 59331;

	class FKKCAGOGHKL_INHNBCHLLKL : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "INHNBCHLLKL")->GetStaticField(0x30F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_INHNBCHLLKL_CCTOR_OFFSET))();
		}

	};
