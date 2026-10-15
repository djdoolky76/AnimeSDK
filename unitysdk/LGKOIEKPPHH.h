#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterAtlasFaceMappingConfig; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }

#define LGKOIEKPPHH_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xB694110)
#define LGKOIEKPPHH_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB694020)
#define LGKOIEKPPHH_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xB6940C0)

inline static constexpr unsigned int LGKOIEKPPHH_TypeDefinitionIndex = 73291;

	class LGKOIEKPPHH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterAtlasFaceMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterAtlasFaceMappingConfig**)UnitySDK::FromName("", "LGKOIEKPPHH")->GetStaticField(0x600F0);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKOIEKPPHH_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKOIEKPPHH_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::CharacterAtlasFaceSet* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterAtlasFaceSet*(*)(::System::String*))((::PBYTE)hIl2Cpp + LGKOIEKPPHH_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
