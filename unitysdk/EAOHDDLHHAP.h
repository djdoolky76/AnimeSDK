#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Mesh; }

#define EAOHDDLHHAP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x12CDF400)
#define EAOHDDLHHAP_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x12CDF620)

inline static constexpr unsigned int EAOHDDLHHAP_TypeDefinitionIndex = 48995;

	class EAOHDDLHHAP : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_JOLBNAJKDEJ()
		{
			return (::UnityEngine::Mesh**)UnitySDK::FromName("", "EAOHDDLHHAP")->GetStaticField(0x6FB10);
		}

		static ::System::Boolean* StaticGet_DLIMEMCMFHJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EAOHDDLHHAP")->GetStaticField(0x15AB0);
		}

		static ::UnityEngine::Mesh* ACMKLFOMPFC()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + EAOHDDLHHAP_ACMKLFOMPFC_OFFSET))();
		}

		static ::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAOHDDLHHAP_BJMNKLGEMPM_OFFSET))();
		}

	};
