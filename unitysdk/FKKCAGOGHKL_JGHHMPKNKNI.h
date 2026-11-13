#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableFloatProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define FKKCAGOGHKL_JGHHMPKNKNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAAEC00)

inline static constexpr unsigned int FKKCAGOGHKL_JGHHMPKNKNI_TypeDefinitionIndex = 60621;

	class FKKCAGOGHKL_JGHHMPKNKNI : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JPBOIHHMFMO()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "JGHHMPKNKNI")->GetStaticField(0x67570);
		}

		static ::UnityEngine::ConsoleVariableFloatProperty* StaticGet_JEMBOMGGEFO()
		{
			return (::UnityEngine::ConsoleVariableFloatProperty*)UnitySDK::FromName("", "JGHHMPKNKNI")->GetStaticField(0x67580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKKCAGOGHKL_JGHHMPKNKNI_CCTOR_OFFSET))();
		}

	};
