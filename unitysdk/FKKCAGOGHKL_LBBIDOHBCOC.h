#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

#define FKKCAGOGHKL_LBBIDOHBCOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F8EC0)

inline static constexpr unsigned int FKKCAGOGHKL_LBBIDOHBCOC_TypeDefinitionIndex = 59346;

	class FKKCAGOGHKL_LBBIDOHBCOC : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_JBPMNFJMKIF()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "LBBIDOHBCOC")->GetStaticField(0x4FC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_LBBIDOHBCOC_CCTOR_OFFSET))();
		}

	};
