#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class NPCAppearancePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCBIHGJNOII_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB86D240)
#define MCBIHGJNOII_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xB86D430)
#define MCBIHGJNOII_LLKNHOGPEAH_OFFSET UNITYSDK_OFFSET(0xB86D4D0)

inline static constexpr unsigned int MCBIHGJNOII_TypeDefinitionIndex = 73301;

	class MCBIHGJNOII : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>** StaticGet_KNLDGAEEMCH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::NPCAppearancePreset*>**)UnitySDK::FromName("", "MCBIHGJNOII")->GetStaticField(0x5C260);
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
