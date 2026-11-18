#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCKJCNDLCEM.h"
#include "unitysdk/PCBJHAOEOEN.h"

class EHKDFLAMDDE;
class LDIENANCAPG;
namespace MoleMole { class UIMonsterFantasyQteEffWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteInfoWidgetController; }
namespace MoleMole { class UIMonsterFantasyQteMissWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define HMAJCJPLDIB_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0xE9FC770)
#define HMAJCJPLDIB_BNFMJEJGCAB_OFFSET UNITYSDK_OFFSET(0xE9FC460)
#define HMAJCJPLDIB_BOLOPDPALNG_OFFSET UNITYSDK_OFFSET(0xE9FC340)
#define HMAJCJPLDIB_JBCDGHHDCJK_OFFSET UNITYSDK_OFFSET(0xE9FC930)
#define HMAJCJPLDIB_KGHOGMJOOFI_OFFSET UNITYSDK_OFFSET(0xE9FC7C0)
#define HMAJCJPLDIB_NGPGJLPFHGC_OFFSET UNITYSDK_OFFSET(0xE9FBDE0)
#define HMAJCJPLDIB__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FBDD0)

inline static constexpr unsigned int HMAJCJPLDIB_TypeDefinitionIndex = 59035;

class HMAJCJPLDIB : public ::KCKJCNDLCEM
{
public:
	::MoleMole::UIMonsterFantasyQteMissWidgetController* HEDBENIDIMN; // 0x10
	::MoleMole::Config::RealtimeQTEStyleEntryBase* AHMFPFACACD; // 0x18
	::LDIENANCAPG* BFNLFLELJFH; // 0x20
	::MoleMole::UIMonsterFantasyQteInfoWidgetController* DGENHNFLIJN; // 0x28
	::EHKDFLAMDDE* CLPKHEADBOJ; // 0x30
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* AFPMOEKKNEI; // 0x38
	::MoleMole::UIMonsterFantasyQteEffWidgetController* OBKEMPGGPMJ; // 0x40
	::System::Single GHPMAEKBDGA; // 0x48
	::System::Boolean CCLGFHDJCOO; // 0x4C
	::System::Byte _padding0[0x3];
	::System::Single OLLJDKMBALH; // 0x50

	::System::Void _ctor(::MoleMole::Config::RealtimeQTEStyleEntryBase* DFMKILICPFB, ::LDIENANCAPG* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTEStyleEntryBase*, ::LDIENANCAPG*))((::PBYTE)hIl2Cpp + HMAJCJPLDIB__CTOR_OFFSET))(this, DFMKILICPFB, PLBEAIIJADM);
	}

	::System::Void NGPGJLPFHGC(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* NCIMBHDKIJM, ::EHKDFLAMDDE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::EHKDFLAMDDE*))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_NGPGJLPFHGC_OFFSET))(this, NCIMBHDKIJM, AEJAMJDBHAM);
	}

	::System::Void BOLOPDPALNG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_BOLOPDPALNG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFMJEJGCAB(::PCBJHAOEOEN KOBGAHDCAMA, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PCBJHAOEOEN, ::System::Action*))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_BNFMJEJGCAB_OFFSET))(this, KOBGAHDCAMA, MGAKJHJAGJI);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void KGHOGMJOOFI(::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_KGHOGMJOOFI_OFFSET))(this, MGAKJHJAGJI);
	}

	::System::Void JBCDGHHDCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJCJPLDIB_JBCDGHHDCJK_OFFSET))(this);
	}
};
