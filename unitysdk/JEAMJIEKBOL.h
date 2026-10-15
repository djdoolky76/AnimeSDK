#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKBOFOOJCGL;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }

#define JEAMJIEKBOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16616CE0)
#define JEAMJIEKBOL_HLAFINMGAMF_OFFSET UNITYSDK_OFFSET(0x16616E10)
#define JEAMJIEKBOL_IGGHFPBDCBK_OFFSET UNITYSDK_OFFSET(0x16616E80)

	class JEAMJIEKBOL : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* BPLPBPMEODA(::RPG::GameCore::HipplenIncidentOptionConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentOptionConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + JEAMJIEKBOL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* HLAFINMGAMF(::RPG::GameCore::HipplenIncidentCommitOptionConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentCommitOptionConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + JEAMJIEKBOL_HLAFINMGAMF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* IGGHFPBDCBK(::RPG::GameCore::HipplenIncidentRandomOptionConfig* a1, ::PKBOFOOJCGL* a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentRandomOptionConfig*, ::PKBOFOOJCGL*))((::PBYTE)hIl2Cpp + JEAMJIEKBOL_IGGHFPBDCBK_OFFSET))(a1, a2);
		}

	};
