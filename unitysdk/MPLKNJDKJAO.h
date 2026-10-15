#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPG::GameCore { class CharacterEyeCtrlMappingConfig; }
namespace System { class String; }

#define MPLKNJDKJAO_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xBA41770)
#define MPLKNJDKJAO_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xBA41680)
#define MPLKNJDKJAO_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xBA41720)

inline static constexpr unsigned int MPLKNJDKJAO_TypeDefinitionIndex = 73294;

	class MPLKNJDKJAO : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CharacterEyeCtrlMappingConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::CharacterEyeCtrlMappingConfig**)UnitySDK::FromName("", "MPLKNJDKJAO")->GetStaticField(0x16500);
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
