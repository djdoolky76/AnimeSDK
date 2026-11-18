#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMAJCJPLDIB.h"

class EHKDFLAMDDE;
class LDIENANCAPG;
namespace MoleMole { class UIMonsterFantasyQTEProgressWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class ButtonQTEMonsterFantasySinglePressCountDownStyleEntry; }

#define BJCFDFMGMIO_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0xFF7A7A0)
#define BJCFDFMGMIO_BOLOPDPALNG_OFFSET UNITYSDK_OFFSET(0xFF7A700)
#define BJCFDFMGMIO_EMJEKIELGGD_OFFSET UNITYSDK_OFFSET(0xFF7A8E0)
#define BJCFDFMGMIO_JBCDGHHDCJK_OFFSET UNITYSDK_OFFSET(0xFF7A840)
#define BJCFDFMGMIO_MENFFMAOCPJ_OFFSET UNITYSDK_OFFSET(0xFF7A830)
#define BJCFDFMGMIO_NGPGJLPFHGC_OFFSET UNITYSDK_OFFSET(0xFF7A610)
#define BJCFDFMGMIO__CTOR_OFFSET UNITYSDK_OFFSET(0xFF7A600)

inline static constexpr unsigned int BJCFDFMGMIO_TypeDefinitionIndex = 42469;

class BJCFDFMGMIO : public ::HMAJCJPLDIB
{
public:
	::MoleMole::UIMonsterFantasyQTEProgressWidgetController* NJNKDLLCGIJ; // 0x58

	::System::Void _ctor(::MoleMole::Config::ButtonQTEMonsterFantasySinglePressCountDownStyleEntry* DFMKILICPFB, ::LDIENANCAPG* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ButtonQTEMonsterFantasySinglePressCountDownStyleEntry*, ::LDIENANCAPG*))((::PBYTE)hIl2Cpp + BJCFDFMGMIO__CTOR_OFFSET))(this, DFMKILICPFB, PLBEAIIJADM);
	}

	::System::Void NGPGJLPFHGC(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* NCIMBHDKIJM, ::EHKDFLAMDDE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::EHKDFLAMDDE*))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_NGPGJLPFHGC_OFFSET))(this, NCIMBHDKIJM, AEJAMJDBHAM);
	}

	::System::Void BOLOPDPALNG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_BOLOPDPALNG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void MENFFMAOCPJ(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* MIALFKCCCPI, ::EHKDFLAMDDE* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::EHKDFLAMDDE*))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_MENFFMAOCPJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JBCDGHHDCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_JBCDGHHDCJK_OFFSET))(this);
	}

	::System::Void EMJEKIELGGD(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJCFDFMGMIO_EMJEKIELGGD_OFFSET))(this, MIALFKCCCPI);
	}
};
