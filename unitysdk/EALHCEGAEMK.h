#pragma once
#include "unitysdk/unitysdk.h"

class DNGEKLMPBAC;
class LLMEPLBOODC;
namespace MoleMole::Config { class ConfigRemoveNpcNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }

#define EALHCEGAEMK_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x13495A60)
#define EALHCEGAEMK_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x134957C0)
#define EALHCEGAEMK_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13495850)
#define EALHCEGAEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x13495A00)

inline static constexpr unsigned int EALHCEGAEMK_TypeDefinitionIndex = 65094;

class EALHCEGAEMK
{
public:
	::System::String* ADPBBJMLHPI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALHCEGAEMK__CTOR_OFFSET))(this);
	}

	::System::Void HEGPPHAGDCO(::MoleMole::Config::ConfigRemoveNpcNode* JECAEDMPEDB, ::LLMEPLBOODC* ENPKNICOJCD, ::MoleMole::Config::UISpecialNumGroup* PNLGHFAFNPO, ::DNGEKLMPBAC* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRemoveNpcNode*, ::LLMEPLBOODC*, ::MoleMole::Config::UISpecialNumGroup*, ::DNGEKLMPBAC*))((::PBYTE)hIl2Cpp + EALHCEGAEMK_HEGPPHAGDCO_OFFSET))(this, JECAEDMPEDB, ENPKNICOJCD, PNLGHFAFNPO, ECKMPOAABAL);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALHCEGAEMK_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALHCEGAEMK_EEOOAGEDKLM_OFFSET))(this);
	}
};
