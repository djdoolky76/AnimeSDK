#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15803AE0)

	class FKKCAGOGHKL_GCHEOINFCDH : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_NAINKMNAELB()
		{
			return (::UnityEngine::ConsoleVariableStringProperty*)UnitySDK::FromName("", "GCHEOINFCDH")->GetStaticField(0x30F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_GCHEOINFCDH_CCTOR_OFFSET))();
		}

	};
