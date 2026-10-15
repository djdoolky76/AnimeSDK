#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
#include "unitysdk/System/Object.h"

#define DCJPCOCAAKB_JIKPCACIDGJ_OFFSET UNITYSDK_OFFSET(0xE2448A0)
#define DCJPCOCAAKB_MDKKCOPCBMI_OFFSET UNITYSDK_OFFSET(0xE244960)

inline static constexpr unsigned int DCJPCOCAAKB_TypeDefinitionIndex = 57558;

	class DCJPCOCAAKB : public ::System::Object
	{
	public:
		static ::RPG::GameCore::UnitStatus JIKPCACIDGJ(::RPG::GameCore::NPCStatus a1)
		{
			return ((::RPG::GameCore::UnitStatus(*)(::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + DCJPCOCAAKB_JIKPCACIDGJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::NPCStatus MDKKCOPCBMI(::RPG::GameCore::UnitStatus a1)
		{
			return ((::RPG::GameCore::NPCStatus(*)(::RPG::GameCore::UnitStatus))((::PBYTE)hIl2Cpp + DCJPCOCAAKB_MDKKCOPCBMI_OFFSET))(a1);
		}

	};
