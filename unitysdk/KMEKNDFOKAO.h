#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }

#define KMEKNDFOKAO_FLFLCMEJEPM_OFFSET UNITYSDK_OFFSET(0xB53FB10)
#define KMEKNDFOKAO_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB53FA20)
#define KMEKNDFOKAO_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0xB53FAC0)

inline static constexpr unsigned int KMEKNDFOKAO_TypeDefinitionIndex = 73299;

	class KMEKNDFOKAO : public ::System::Object
	{
	public:
		static ::RPG::GameCore::LevelNPCStillConfig** StaticGet_IGHAHBNLIJA()
		{
			return (::RPG::GameCore::LevelNPCStillConfig**)UnitySDK::FromName("", "KMEKNDFOKAO")->GetStaticField(0x5B330);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEKNDFOKAO_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEKNDFOKAO_IGBFHCJEHNK_OFFSET))();
		}

		static ::RPG::GameCore::LevelNPCStillConfigData* FLFLCMEJEPM(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelNPCStillConfigData*(*)(::System::String*))((::PBYTE)hIl2Cpp + KMEKNDFOKAO_FLFLCMEJEPM_OFFSET))(a1);
		}

	};
