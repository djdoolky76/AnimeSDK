#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SwitchTeamInBattleSubSystem; }

#define FCAOAAMNENF_BMBECGKDGCM_BOEAHDHIBBC_OFFSET UNITYSDK_OFFSET(0x14ABAE30)
#define FCAOAAMNENF_BMBECGKDGCM__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABAE20)

inline static constexpr unsigned int FCAOAAMNENF_BMBECGKDGCM_TypeDefinitionIndex = 74335;

class FCAOAAMNENF_BMBECGKDGCM : public ::System::Object
{
public:
	::MoleMole::SwitchTeamInBattleSubSystem* JNAHMECAJDC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_BMBECGKDGCM__CTOR_OFFSET))(this);
	}

	::System::Void BOEAHDHIBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAOAAMNENF_BMBECGKDGCM_BOEAHDHIBBC_OFFSET))(this);
	}
};
