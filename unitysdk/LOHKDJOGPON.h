#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigStopSequenceVENode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define LOHKDJOGPON_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x151B0130)
#define LOHKDJOGPON_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x151AFE50)
#define LOHKDJOGPON_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x151AFEC0)
#define LOHKDJOGPON__CTOR_OFFSET UNITYSDK_OFFSET(0x151B00D0)

inline static constexpr unsigned int LOHKDJOGPON_TypeDefinitionIndex = 41135;

class LOHKDJOGPON
{
public:
	::MoleMole::Config::ConfigStopSequenceVENode* GELPLHLJCDL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHKDJOGPON__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigStopSequenceVENode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigStopSequenceVENode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + LOHKDJOGPON_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHKDJOGPON_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHKDJOGPON_EEOOAGEDKLM_OFFSET))(this);
	}
};
