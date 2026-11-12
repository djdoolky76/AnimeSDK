#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RuanMadeCakeFeatureConfig; }
namespace RPG::GameCore { class RuanMadeCakeFeatureMap; }
namespace System { class String; }

#define BPELBPKAMCI_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xCB449A0)
#define BPELBPKAMCI_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xCB448B0)
#define BPELBPKAMCI_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xCB44950)

inline static constexpr unsigned int BPELBPKAMCI_TypeDefinitionIndex = 75421;

	class BPELBPKAMCI : public ::System::Object
	{
	public:
		static ::RPG::GameCore::RuanMadeCakeFeatureMap** StaticGet_JLCDNGKHHPJ()
		{
			return (::RPG::GameCore::RuanMadeCakeFeatureMap**)UnitySDK::FromName("", "BPELBPKAMCI")->GetStaticField(0x730F0);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPELBPKAMCI_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPELBPKAMCI_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::RuanMadeCakeFeatureConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::RuanMadeCakeFeatureConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + BPELBPKAMCI_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
