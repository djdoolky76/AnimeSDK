#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x16771030)

inline static constexpr unsigned int FKKCAGOGHKL_KLFNFKEKEPD_TypeDefinitionIndex = 60603;

	class FKKCAGOGHKL_KLFNFKEKEPD : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_NOKEDKHHMNK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x66B40);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_BAFLCCKGNLI()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x66B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET))();
		}

	};
