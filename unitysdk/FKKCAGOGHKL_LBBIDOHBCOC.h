#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define FKKCAGOGHKL_LBBIDOHBCOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x16771300)

inline static constexpr unsigned int FKKCAGOGHKL_LBBIDOHBCOC_TypeDefinitionIndex = 60623;

	class FKKCAGOGHKL_LBBIDOHBCOC : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_JBPMNFJMKIF()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBBIDOHBCOC")->GetStaticField(0x5BBB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_LBBIDOHBCOC_CCTOR_OFFSET))();
		}

	};
