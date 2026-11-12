#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB4FA0)
#define RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS30_0___CALCULATEEMBLEMSCORE_B__1_OFFSET UNITYSDK_OFFSET(0xDCB50E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeamCalculator___c__DisplayClass30_0_TypeDefinitionIndex = 66371;

	class GridFightTeamCalculator___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEmblemScore_b__1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAMCALCULATOR___C__DISPLAYCLASS30_0___CALCULATEEMBLEMSCORE_B__1_OFFSET))(this, a1);
		}

	};
}
