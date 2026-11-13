#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterReplaceMaterialConfig; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDFBEIDIPJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C02FE20)
#define FDFBEIDIPJF_EPKJNIPJJDL_OFFSET UNITYSDK_OFFSET(0x1C02FC20)
#define FDFBEIDIPJF_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x1C02F930)
#define FDFBEIDIPJF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1C02F830)
#define FDFBEIDIPJF_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0x1C02F870)

inline static constexpr unsigned int FDFBEIDIPJF_TypeDefinitionIndex = 75412;

	class FDFBEIDIPJF : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterReplaceMaterialConfig** StaticGet_APBJIFNJEEA()
		{
			return (::RPG::GameCore::CharacterReplaceMaterialConfig**)UnitySDK::FromName("", "FDFBEIDIPJF")->GetStaticField(0x4C0F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>** StaticGet_JOJNHBFJNNH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>**)UnitySDK::FromName("", "FDFBEIDIPJF")->GetStaticField(0x4C0F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFBEIDIPJF_CCTOR_OFFSET))();
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFBEIDIPJF_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFBEIDIPJF_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::CharacterReplaceMaterialRenderList* FLFLCMEJEPM(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialRenderList*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FDFBEIDIPJF_FLFLCMEJEPM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::CharacterReplaceMaterialOriginProperty* EPKJNIPJJDL(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterReplaceMaterialOriginProperty*(*)(::System::String*))((::PBYTE)hIl2Cpp + FDFBEIDIPJF_EPKJNIPJJDL_OFFSET))(a1);
		}

	};
