#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNGILGANBCG.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHEOMNHMGMB_BBFAOAAOPGJ_OFFSET UNITYSDK_OFFSET(0x137137D0)
#define PHEOMNHMGMB_BBMALOADDGP_OFFSET UNITYSDK_OFFSET(0x137136F0)
#define PHEOMNHMGMB_BKPLCOJBCII_OFFSET UNITYSDK_OFFSET(0x13713920)
#define PHEOMNHMGMB_CIPMAKNLCHG_OFFSET UNITYSDK_OFFSET(0x13713FD0)
#define PHEOMNHMGMB_DMMMOKHKBOM_OFFSET UNITYSDK_OFFSET(0x13713A20)
#define PHEOMNHMGMB_EOFHMLIOJOC_OFFSET UNITYSDK_OFFSET(0x13713680)
#define PHEOMNHMGMB_GHKGNGLBGNJ_OFFSET UNITYSDK_OFFSET(0x137144C0)
#define PHEOMNHMGMB_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x13714030)
#define PHEOMNHMGMB_IEFHKAIEPMP_OFFSET UNITYSDK_OFFSET(0x13714610)
#define PHEOMNHMGMB_LMKHPCBCFCK_OFFSET UNITYSDK_OFFSET(0x13713FE0)
#define PHEOMNHMGMB_NGGADBBJPDJ_OFFSET UNITYSDK_OFFSET(0x13713AC0)
#define PHEOMNHMGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x13712B50)

inline static constexpr unsigned int PHEOMNHMGMB_TypeDefinitionIndex = 81749;

class PHEOMNHMGMB : public ::System::Object
{
public:
	::System::Action* PIEFEBIOCAA; // 0x10
	::MoleMole::MonoGamepadSelectable* KKHDBJIPMII; // 0x18
	::MoleMole::UIInputFieldEx* EFLKGEOOBDF; // 0x20
	::System::Action* NFLMAPEAJHA; // 0x28
	::System::Action* JEABCOAIGME; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* GJCFEKPHCCO; // 0x38
	::System::Action* LOMIHFOGFEF; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::InputLogicEventType, ::System::Action*>* AGMCOHIHJAL; // 0x48
	::System::Action* BNGFNHNNPIK; // 0x50
	::MoleMole::MonoGamepadModule* JEMOHPFCJCA; // 0x58
	::MoleMole::InputLogicEventType FBKKAMOLGNN; // 0x60
	::MoleMole::InputLogicEventType BJMJNIJIPGK; // 0x64
	::CNGILGANBCG MKGKAFHPLJB; // 0x68

	::System::Void _ctor(::MoleMole::UIInputFieldEx* HLFFCMIFFIB, ::MoleMole::MonoGamepadSelectable* ECMGJGNOMJJ, ::MoleMole::MonoGamepadModule* FMBIINHHLOO, ::MoleMole::InputLogicEventType EJIKBJOCBFJ, ::MoleMole::InputLogicEventType IEEINMHNHNG, ::System::Action* DLMIAHPMPPF, ::System::Action* KPDEBMKBKBL, ::System::Action* JEGMEBDDANH, ::System::Action* EFEICGGONCB, ::System::Action* FHDNIKGIDKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::MoleMole::MonoGamepadSelectable*, ::MoleMole::MonoGamepadModule*, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + PHEOMNHMGMB__CTOR_OFFSET))(this, HLFFCMIFFIB, ECMGJGNOMJJ, FMBIINHHLOO, EJIKBJOCBFJ, IEEINMHNHNG, DLMIAHPMPPF, KPDEBMKBKBL, JEGMEBDDANH, EFEICGGONCB, FHDNIKGIDKA);
	}

	::System::Void EOFHMLIOJOC(::CNGILGANBCG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CNGILGANBCG))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_EOFHMLIOJOC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBFAOAAOPGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_BBFAOAAOPGJ_OFFSET))(this);
	}

	::System::Void BKPLCOJBCII(::CNGILGANBCG JBAAOKJHJMH)
	{
		return ((::System::Void(*)(::PVOID, ::CNGILGANBCG))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_BKPLCOJBCII_OFFSET))(this, JBAAOKJHJMH);
	}

	::System::Void DMMMOKHKBOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_DMMMOKHKBOM_OFFSET))(this);
	}

	::System::Void NGGADBBJPDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_NGGADBBJPDJ_OFFSET))(this);
	}

	::CNGILGANBCG CIPMAKNLCHG()
	{
		return ((::CNGILGANBCG(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_CIPMAKNLCHG_OFFSET))(this);
	}

	::System::Void LMKHPCBCFCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_LMKHPCBCFCK_OFFSET))(this);
	}

	::System::Boolean IAFHBCHLBME(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_IAFHBCHLBME_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void GHKGNGLBGNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_GHKGNGLBGNJ_OFFSET))(this);
	}

	::System::Void IEFHKAIEPMP(::System::Boolean JLGCMPJMDLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_IEFHKAIEPMP_OFFSET))(this, JLGCMPJMDLO);
	}

	::System::Void BBMALOADDGP(::CNGILGANBCG JKBLDFBGBPK, ::MoleMole::InputLogicEventType DALJDJDLHEA, ::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::CNGILGANBCG, ::MoleMole::InputLogicEventType, ::System::Action*))((::PBYTE)hIl2Cpp + PHEOMNHMGMB_BBMALOADDGP_OFFSET))(this, JKBLDFBGBPK, DALJDJDLHEA, GJBHEJGENMI);
	}
};
