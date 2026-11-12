#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }

#define DHDKJEOKMBI_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xF44A9C0)
#define DHDKJEOKMBI_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xF44A8D0)
#define DHDKJEOKMBI_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xF44A970)

inline static constexpr unsigned int DHDKJEOKMBI_TypeDefinitionIndex = 75409;

	class DHDKJEOKMBI : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterEyeBloomMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterEyeBloomMappingConfig**)UnitySDK::FromName("", "DHDKJEOKMBI")->GetStaticField(0x5EE70);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDKJEOKMBI_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDKJEOKMBI_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::CharacterEyeBloomConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterEyeBloomConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + DHDKJEOKMBI_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
