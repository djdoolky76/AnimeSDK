#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCNFGFMKLN;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }

#define NFKBBGEFJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9282E0)

inline static constexpr unsigned int NFKBBGEFJIN_TypeDefinitionIndex = 42887;

	class NFKBBGEFJIN : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* CDMDPMAOKDG; // 0x10
		::CNCNFGFMKLN* PCGAIGOMGIO; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* NKKFGFJMEHI; // 0x20
		::CNCNFGFMKLN* HLMEFBDFACF; // 0x28
		::CNCNFGFMKLN* LGGPNNPLNOC; // 0x30
		::CNCNFGFMKLN* EJJAEHFKNNB; // 0x38
		::CNCNFGFMKLN* MJBHFOBEMIO; // 0x40
		::CNCNFGFMKLN* MJDLKHPMMNN; // 0x48
		::CNCNFGFMKLN* NOBKIJGHIMK; // 0x50
		::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* OLJCAJMFJPO; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKBBGEFJIN_CTOR_OFFSET))(this);
		}

	};
