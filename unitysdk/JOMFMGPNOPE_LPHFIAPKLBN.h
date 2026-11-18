#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class JOMFMGPNOPE;
namespace MoleMole { class UIGeneralBattleQuickTaskWidgetController_Context; }
template <typename T> class BFMLEHMAGAK_1;

#define JOMFMGPNOPE_LPHFIAPKLBN_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x1C373BF0)
#define JOMFMGPNOPE_LPHFIAPKLBN_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x1C373B80)
#define JOMFMGPNOPE_LPHFIAPKLBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373B70)

inline static constexpr unsigned int JOMFMGPNOPE_LPHFIAPKLBN_TypeDefinitionIndex = 54468;

class JOMFMGPNOPE_LPHFIAPKLBN : public ::System::Object
{
public:
	::BFMLEHMAGAK_1<::System::Object*>* NBEGLMMLNCL; // 0x10
	::JOMFMGPNOPE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFMGPNOPE_LPHFIAPKLBN__CTOR_OFFSET))(this);
	}

	::System::Void MJHMHMABFCG(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + JOMFMGPNOPE_LPHFIAPKLBN_MJHMHMABFCG_OFFSET))(this, KOIBHLHLMFC);
	}

	::MoleMole::UIGeneralBattleQuickTaskWidgetController_Context* HGMCGMDMANJ()
	{
		return ((::MoleMole::UIGeneralBattleQuickTaskWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMFMGPNOPE_LPHFIAPKLBN_HGMCGMDMANJ_OFFSET))(this);
	}
};
