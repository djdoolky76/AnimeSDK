#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define CGHMJEKOHNP_LFBOCIBEHJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x115F3830)

inline static constexpr unsigned int CGHMJEKOHNP_LFBOCIBEHJO_TypeDefinitionIndex = 10888;

	class CGHMJEKOHNP_LFBOCIBEHJO : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JOMKKCOEHAJ()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "LFBOCIBEHJO")->GetStaticField(0x57790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHMJEKOHNP_LFBOCIBEHJO_CCTOR_OFFSET))();
		}

	};
