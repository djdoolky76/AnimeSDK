#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define CGHMJEKOHNP_LFBOCIBEHJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0D290)

	class CGHMJEKOHNP_LFBOCIBEHJO : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_JOMKKCOEHAJ()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "LFBOCIBEHJO")->GetStaticField(0x42D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHMJEKOHNP_LFBOCIBEHJO_CCTOR_OFFSET))();
		}

	};
