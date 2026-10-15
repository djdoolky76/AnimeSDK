#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCNFGFMKLN;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }

#define NFKBBGEFJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C956520)

	class NFKBBGEFJIN : public ::System::Object
	{
	public:
		::CNCNFGFMKLN* EJJAEHFKNNB; // 0x10
		::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* OLJCAJMFJPO; // 0x18
		::CNCNFGFMKLN* MJBHFOBEMIO; // 0x20
		::CNCNFGFMKLN* MJDLKHPMMNN; // 0x28
		::CNCNFGFMKLN* NOBKIJGHIMK; // 0x30
		::CNCNFGFMKLN* HLMEFBDFACF; // 0x38
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* NKKFGFJMEHI; // 0x40
		::CNCNFGFMKLN* PCGAIGOMGIO; // 0x48
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* CDMDPMAOKDG; // 0x50
		::CNCNFGFMKLN* LGGPNNPLNOC; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKBBGEFJIN_CTOR_OFFSET))(this);
		}

	};
