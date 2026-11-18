#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class IHHGELPJPEN;
namespace MoleMole { class QuickEditorBattleTeamOption; }
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;

#define IHHGELPJPEN_NAGMACKGMBM_FNMONEGOBHD_OFFSET UNITYSDK_OFFSET(0x15C0F6F0)
#define IHHGELPJPEN_NAGMACKGMBM_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x15C0F810)
#define IHHGELPJPEN_NAGMACKGMBM_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x15C0F900)
#define IHHGELPJPEN_NAGMACKGMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0F6E0)

inline static constexpr unsigned int IHHGELPJPEN_NAGMACKGMBM_TypeDefinitionIndex = 57114;

class IHHGELPJPEN_NAGMACKGMBM : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::MoleMole::QuickEditorBattleTeamOption*>* NBEGLMMLNCL; // 0x10
	::IHHGELPJPEN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGELPJPEN_NAGMACKGMBM__CTOR_OFFSET))(this);
	}

	::System::String* FNMONEGOBHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGELPJPEN_NAGMACKGMBM_FNMONEGOBHD_OFFSET))(this);
	}

	::MoleMole::QuickEditorBattleTeamOption* HGMCGMDMANJ()
	{
		return ((::MoleMole::QuickEditorBattleTeamOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGELPJPEN_NAGMACKGMBM_HGMCGMDMANJ_OFFSET))(this);
	}

	::System::Void MJHMHMABFCG(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + IHHGELPJPEN_NAGMACKGMBM_MJHMHMABFCG_OFFSET))(this, KOIBHLHLMFC);
	}
};
