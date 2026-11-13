#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNCNFGFMKLN;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }

#define NFKBBGEFJIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C28D7B0)

inline static constexpr unsigned int NFKBBGEFJIN_TypeDefinitionIndex = 43868;

	class NFKBBGEFJIN : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* NKKFGFJMEHI; // 0x10
		::CNCNFGFMKLN* LGGPNNPLNOC; // 0x18
		::CNCNFGFMKLN* MJDLKHPMMNN; // 0x20
		::CNCNFGFMKLN* NOBKIJGHIMK; // 0x28
		::CNCNFGFMKLN* PCGAIGOMGIO; // 0x30
		::Il2CppArray<::RPG::GameCore::RoadRashGameModifierConfig*>* OLJCAJMFJPO; // 0x38
		::CNCNFGFMKLN* EJJAEHFKNNB; // 0x40
		::CNCNFGFMKLN* HLMEFBDFACF; // 0x48
		::CNCNFGFMKLN* MJBHFOBEMIO; // 0x50
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* CDMDPMAOKDG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKBBGEFJIN_CTOR_OFFSET))(this);
		}

	};
