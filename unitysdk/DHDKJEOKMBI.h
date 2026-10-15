#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace RPG::GameCore { class CharacterEyeBloomMappingConfig; }
namespace System { class String; }

#define DHDKJEOKMBI_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xEBCC340)
#define DHDKJEOKMBI_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xEBCC250)
#define DHDKJEOKMBI_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xEBCC2F0)

inline static constexpr unsigned int DHDKJEOKMBI_TypeDefinitionIndex = 73293;

	class DHDKJEOKMBI : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterEyeBloomMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterEyeBloomMappingConfig**)UnitySDK::FromName("", "DHDKJEOKMBI")->GetStaticField(0x52370);
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
