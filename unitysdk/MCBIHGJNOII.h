#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCBIHGJNOII_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB873A50)
#define MCBIHGJNOII_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xB873C40)
#define MCBIHGJNOII_LLKNHOGPEAH_OFFSET UNITYSDK_OFFSET(0xB873CE0)

	class MCBIHGJNOII : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>** StaticGet_KNLDGAEEMCH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>**)UnitySDK::FromName("", "MCBIHGJNOII")->GetStaticField(0x6E740);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCBIHGJNOII_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCBIHGJNOII_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::NPCAppearancePreset* LLKNHOGPEAH(::System::String* a1)
		{
			return ((::RPG::GameCore::NPCAppearancePreset*(*)(::System::String*))((::PBYTE)hIl2Cpp + MCBIHGJNOII_LLKNHOGPEAH_OFFSET))(a1);
		}

	};
