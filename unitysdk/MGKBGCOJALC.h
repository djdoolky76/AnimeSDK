#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterFaceExpressionConfig; }
namespace RPG::GameCore { class CharacterFaceExpressionMappingConfig; }
namespace System { class String; }

#define MGKBGCOJALC_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xC1D9250)
#define MGKBGCOJALC_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xC1D9160)
#define MGKBGCOJALC_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xC1D9200)

inline static constexpr unsigned int MGKBGCOJALC_TypeDefinitionIndex = 75411;

	class MGKBGCOJALC : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterFaceExpressionMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterFaceExpressionMappingConfig**)UnitySDK::FromName("", "MGKBGCOJALC")->GetStaticField(0x73280);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKBGCOJALC_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKBGCOJALC_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::CharacterFaceExpressionConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterFaceExpressionConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MGKBGCOJALC_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
