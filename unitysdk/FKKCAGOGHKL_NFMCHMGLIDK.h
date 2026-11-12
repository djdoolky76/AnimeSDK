#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_NFMCHMGLIDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x16771EF0)

inline static constexpr unsigned int FKKCAGOGHKL_NFMCHMGLIDK_TypeDefinitionIndex = 60597;

	class FKKCAGOGHKL_NFMCHMGLIDK : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_DLGLKPDEMNO()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "NFMCHMGLIDK")->GetStaticField(0x66B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_NFMCHMGLIDK_CCTOR_OFFSET))();
		}

	};
