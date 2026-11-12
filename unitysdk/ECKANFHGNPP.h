#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2InitialFillMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableIntProperty.h"

#define ECKANFHGNPP_BOKFHPNIIEO_OFFSET UNITYSDK_OFFSET(0x13AC50C0)
#define ECKANFHGNPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x13AC5130)

inline static constexpr unsigned int ECKANFHGNPP_TypeDefinitionIndex = 71286;

	class ECKANFHGNPP : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_OPJDJAIMMOG()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "ECKANFHGNPP")->GetStaticField(0x72CA0);
		}

		static ::UnityEngine::ConsoleVariableIntProperty* StaticGet_LEKFCCMACGM()
		{
			return (::UnityEngine::ConsoleVariableIntProperty*)UnitySDK::FromName("", "ECKANFHGNPP")->GetStaticField(0x72CB0);
		}

		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_LDEAODNEGCG()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)UnitySDK::FromName("", "ECKANFHGNPP")->GetStaticField(0x72CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECKANFHGNPP_CCTOR_OFFSET))();
		}

		static ::RPG::Client::EPedestrianV2InitialFillMode BOKFHPNIIEO()
		{
			return ((::RPG::Client::EPedestrianV2InitialFillMode(*)())((::PBYTE)hIl2Cpp + ECKANFHGNPP_BOKFHPNIIEO_OFFSET))();
		}

	};
