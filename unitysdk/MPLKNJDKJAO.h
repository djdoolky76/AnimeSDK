#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlMappingConfig; }
namespace System { class String; }

#define MPLKNJDKJAO_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xBA3BC80)
#define MPLKNJDKJAO_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xBA3BB90)
#define MPLKNJDKJAO_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xBA3BC30)

inline static constexpr unsigned int MPLKNJDKJAO_TypeDefinitionIndex = 73293;

	class MPLKNJDKJAO : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterEyeCtrlMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterEyeCtrlMappingConfig**)UnitySDK::FromName("", "MPLKNJDKJAO")->GetStaticField(0x184F0);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPLKNJDKJAO_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPLKNJDKJAO_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::CharacterEyeCtrlConfig* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterEyeCtrlConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + MPLKNJDKJAO_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
