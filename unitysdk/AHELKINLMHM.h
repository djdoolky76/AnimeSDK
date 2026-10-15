#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDBIICBGNGF;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamRecomResult; }

#define AHELKINLMHM_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7AA60)
#define AHELKINLMHM_NMOILPMMMMA_OFFSET UNITYSDK_OFFSET(0xEB7A0C0)
#define AHELKINLMHM_OIHHFAFFEPA_OFFSET UNITYSDK_OFFSET(0xEB7A7F0)

inline static constexpr unsigned int AHELKINLMHM_TypeDefinitionIndex = 67543;

	class AHELKINLMHM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHELKINLMHM_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournBuildRefTeamRecomResult* NMOILPMMMMA(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefTeamRecomResult*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + AHELKINLMHM_NMOILPMMMMA_OFFSET))(this, a1);
		}

		::System::Boolean OIHHFAFFEPA(::MDBIICBGNGF* a1, ::RPG::Client::IRogueTournBuildRefTeamMemberData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDBIICBGNGF*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + AHELKINLMHM_OIHHFAFFEPA_OFFSET))(this, a1, a2);
		}

	};
