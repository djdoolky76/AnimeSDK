#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x15804810)

	class FKKCAGOGHKL_KLFNFKEKEPD : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_BAFLCCKGNLI()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x51010);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_NOKEDKHHMNK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x51020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET))();
		}

	};
