#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData_PanelSettle.h"

class GFBEPBHPKKF;

#define HNLPBPGMJMF_DKPHJBCDMAB_PJGOBMLPIMF_OFFSET UNITYSDK_OFFSET(0x15BE0660)
#define HNLPBPGMJMF_DKPHJBCDMAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE0650)

inline static constexpr unsigned int HNLPBPGMJMF_DKPHJBCDMAB_TypeDefinitionIndex = 86286;

class HNLPBPGMJMF_DKPHJBCDMAB : public ::System::Object
{
public:
	::GFBEPBHPKKF* FMMIJOCCIAG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_DKPHJBCDMAB__CTOR_OFFSET))(this);
	}

	::System::Boolean PJGOBMLPIMF(::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DisplayCase::DisplayColliderCfgData_PanelSettle))((::PBYTE)hIl2Cpp + HNLPBPGMJMF_DKPHJBCDMAB_PJGOBMLPIMF_OFFSET))(this, CBLGCIFLMKL);
	}
};
