#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterReplaceMaterialConfig; }
namespace RPG::GameCore { class CharacterReplaceMaterialOriginProperty; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDFBEIDIPJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x156C9B50)
#define FDFBEIDIPJF_EPKJNIPJJDL_OFFSET UNITYSDK_OFFSET(0x156C9950)
#define FDFBEIDIPJF_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0x156C9660)
#define FDFBEIDIPJF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x156C9560)
#define FDFBEIDIPJF_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0x156C95A0)

inline static constexpr unsigned int FDFBEIDIPJF_TypeDefinitionIndex = 73296;

	class FDFBEIDIPJF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>** StaticGet_JOJNHBFJNNH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialConfig*>**)UnitySDK::FromName("", "FDFBEIDIPJF")->GetStaticField(0x56A70);
		}

		static ::RPG::GameCore::CharacterReplaceMaterialConfig** StaticGet_APBJIFNJEEA()
		{
			return (::RPG::GameCore::CharacterReplaceMaterialConfig**)UnitySDK::FromName("", "FDFBEIDIPJF")->GetStaticField(0x56A78);
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
