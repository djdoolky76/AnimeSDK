#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfig; }
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfigs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDAMICBNNNF_CMFEGAGLPGM_OFFSET UNITYSDK_OFFSET(0xE2571A0)
#define DDAMICBNNNF_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xE2571F0)
#define DDAMICBNNNF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xE256F30)
#define DDAMICBNNNF_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xE257150)

inline static constexpr unsigned int DDAMICBNNNF_TypeDefinitionIndex = 73303;

	class DDAMICBNNNF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>** StaticGet_GMIOIPNILMI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>**)UnitySDK::FromName("", "DDAMICBNNNF")->GetStaticField(0x5F960);
		}

		static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs**)UnitySDK::FromName("", "DDAMICBNNNF")->GetStaticField(0x5F968);
		}

		// static const ::System::String* ICEPLFPKAHC; // 0x0
		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAMICBNNNF_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAMICBNNNF_IGBFHCJEHNK_OFFSET))();
		}

		static ::System::Void CMFEGAGLPGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAMICBNNNF_CMFEGAGLPGM_OFFSET))();
		}

		static ::RPG::GameCore::AdventureCharacterFloatingTemplateConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + DDAMICBNNNF_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
