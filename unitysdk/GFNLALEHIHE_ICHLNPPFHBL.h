#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFNLALEHIHE;
namespace MoleMole { class UIInLevelSkillButtonBranchBaseController; }

#define GFNLALEHIHE_ICHLNPPFHBL_DKHNDMEHEOB_OFFSET UNITYSDK_OFFSET(0x149C14E0)
#define GFNLALEHIHE_ICHLNPPFHBL__CTOR_OFFSET UNITYSDK_OFFSET(0x149C14D0)

inline static constexpr unsigned int GFNLALEHIHE_ICHLNPPFHBL_TypeDefinitionIndex = 88729;

class GFNLALEHIHE_ICHLNPPFHBL : public ::System::Object
{
public:
	::MoleMole::UIInLevelSkillButtonBranchBaseController* NCIMBHDKIJM; // 0x10
	::GFNLALEHIHE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNLALEHIHE_ICHLNPPFHBL__CTOR_OFFSET))(this);
	}

	::System::Void DKHNDMEHEOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNLALEHIHE_ICHLNPPFHBL_DKHNDMEHEOB_OFFSET))(this);
	}
};
