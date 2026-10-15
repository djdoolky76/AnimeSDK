#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define FKKCAGOGHKL_CMJHDAOAPHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F74A0)

inline static constexpr unsigned int FKKCAGOGHKL_CMJHDAOAPHH_TypeDefinitionIndex = 59327;

	class FKKCAGOGHKL_CMJHDAOAPHH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_FFPJAFOHNAD()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "CMJHDAOAPHH")->GetStaticField(0x4FB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_CMJHDAOAPHH_CCTOR_OFFSET))();
		}

	};
