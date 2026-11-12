#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace RPG::GameCore { class CharacterReplaceMaterialVariantConfig; }
namespace System { class String; }

#define PIJDOMOGHNF_CMFEGAGLPGM_OFFSET UNITYSDK_OFFSET(0xCB917F0)
#define PIJDOMOGHNF_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xCB918D0)
#define PIJDOMOGHNF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xCB91700)
#define PIJDOMOGHNF_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xCB917A0)

inline static constexpr unsigned int PIJDOMOGHNF_TypeDefinitionIndex = 75414;

	class PIJDOMOGHNF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterReplaceMaterialVariantConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterReplaceMaterialVariantConfig**)UnitySDK::FromName("", "PIJDOMOGHNF")->GetStaticField(0x71CB0);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDOMOGHNF_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDOMOGHNF_IGBFHCJEHNK_OFFSET))();
		}

		static ::System::Void CMFEGAGLPGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDOMOGHNF_CMFEGAGLPGM_OFFSET))();
		}

		static ::RPG::GameCore::CharacterReplaceMaterialVariant* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialVariant*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIJDOMOGHNF_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
