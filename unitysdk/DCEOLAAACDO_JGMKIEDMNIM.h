#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class DCEOLAAACDO;
namespace MoleMole { class UIGeneralBattleQuickTeamWidgetController_Context; }
template <typename T> class BFMLEHMAGAK_1;

#define DCEOLAAACDO_JGMKIEDMNIM_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x19A35680)
#define DCEOLAAACDO_JGMKIEDMNIM_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x19A35610)
#define DCEOLAAACDO_JGMKIEDMNIM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A35600)

inline static constexpr unsigned int DCEOLAAACDO_JGMKIEDMNIM_TypeDefinitionIndex = 56158;

class DCEOLAAACDO_JGMKIEDMNIM : public ::System::Object
{
public:
	::DCEOLAAACDO* KLHPEBKNIFB; // 0x10
	::BFMLEHMAGAK_1<::System::Object*>* NBEGLMMLNCL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEOLAAACDO_JGMKIEDMNIM__CTOR_OFFSET))(this);
	}

	::System::Void MJHMHMABFCG(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + DCEOLAAACDO_JGMKIEDMNIM_MJHMHMABFCG_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context* HGMCGMDMANJ()
	{
		return ((::MoleMole::UIGeneralBattleQuickTeamWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEOLAAACDO_JGMKIEDMNIM_HGMCGMDMANJ_OFFSET))(this);
	}
};
