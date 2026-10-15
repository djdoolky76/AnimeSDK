#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F8BF0)

inline static constexpr unsigned int FKKCAGOGHKL_KLFNFKEKEPD_TypeDefinitionIndex = 59326;

	class FKKCAGOGHKL_KLFNFKEKEPD : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_BAFLCCKGNLI()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x4FC20);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_NOKEDKHHMNK()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "KLFNFKEKEPD")->GetStaticField(0x4FC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_KLFNFKEKEPD_CCTOR_OFFSET))();
		}

	};
