#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCKJCNDLCEM.h"
#include "unitysdk/PCBJHAOEOEN.h"

class EHKDFLAMDDE;
class LDIENANCAPG;
class LGGGFNJLOMM;
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class GeneralEffectSinglePressCountDownEntryStyleEntry; }
namespace System { class Action; }

#define FEFGKLKALBA_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x1428DE50)
#define FEFGKLKALBA_BNFMJEJGCAB_OFFSET UNITYSDK_OFFSET(0x1428D850)
#define FEFGKLKALBA_BOLOPDPALNG_OFFSET UNITYSDK_OFFSET(0x1428D7F0)
#define FEFGKLKALBA_JBCDGHHDCJK_OFFSET UNITYSDK_OFFSET(0x1428E130)
#define FEFGKLKALBA_KGHOGMJOOFI_OFFSET UNITYSDK_OFFSET(0x1428DEA0)
#define FEFGKLKALBA_NGPGJLPFHGC_OFFSET UNITYSDK_OFFSET(0x1428D750)
#define FEFGKLKALBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1428D6D0)

inline static constexpr unsigned int FEFGKLKALBA_TypeDefinitionIndex = 63700;

class FEFGKLKALBA : public ::KCKJCNDLCEM
{
public:
	::EHKDFLAMDDE* CLPKHEADBOJ; // 0x10
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* AFPMOEKKNEI; // 0x18
	::LGGGFNJLOMM* BFNLFLELJFH; // 0x20
	::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry* AHMFPFACACD; // 0x28

	::System::Void _ctor(::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry* DFMKILICPFB, ::LDIENANCAPG* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GeneralEffectSinglePressCountDownEntryStyleEntry*, ::LDIENANCAPG*))((::PBYTE)hIl2Cpp + FEFGKLKALBA__CTOR_OFFSET))(this, DFMKILICPFB, PLBEAIIJADM);
	}

	::System::Void NGPGJLPFHGC(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* NCIMBHDKIJM, ::EHKDFLAMDDE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::EHKDFLAMDDE*))((::PBYTE)hIl2Cpp + FEFGKLKALBA_NGPGJLPFHGC_OFFSET))(this, NCIMBHDKIJM, AEJAMJDBHAM);
	}

	::System::Void BOLOPDPALNG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEFGKLKALBA_BOLOPDPALNG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFMJEJGCAB(::PCBJHAOEOEN KOBGAHDCAMA, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PCBJHAOEOEN, ::System::Action*))((::PBYTE)hIl2Cpp + FEFGKLKALBA_BNFMJEJGCAB_OFFSET))(this, KOBGAHDCAMA, MGAKJHJAGJI);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void KGHOGMJOOFI(::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FEFGKLKALBA_KGHOGMJOOFI_OFFSET))(this, MGAKJHJAGJI);
	}

	::System::Void JBCDGHHDCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_JBCDGHHDCJK_OFFSET))(this);
	}
};
