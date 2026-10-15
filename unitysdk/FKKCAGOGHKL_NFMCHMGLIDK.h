#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_NFMCHMGLIDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15805600)

inline static constexpr unsigned int FKKCAGOGHKL_NFMCHMGLIDK_TypeDefinitionIndex = 59320;

	class FKKCAGOGHKL_NFMCHMGLIDK : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_DLGLKPDEMNO()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "NFMCHMGLIDK")->GetStaticField(0x511A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_NFMCHMGLIDK_CCTOR_OFFSET))();
		}

	};
