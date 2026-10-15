#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_AMPIIEAKPKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F5BF0)

inline static constexpr unsigned int FKKCAGOGHKL_AMPIIEAKPKH_TypeDefinitionIndex = 59323;

	class FKKCAGOGHKL_AMPIIEAKPKH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_MHDEIGBHJJK()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "AMPIIEAKPKH")->GetStaticField(0x4A210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_AMPIIEAKPKH_CCTOR_OFFSET))();
		}

	};
