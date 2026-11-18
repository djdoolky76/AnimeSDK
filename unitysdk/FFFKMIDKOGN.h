#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCKJCNDLCEM.h"
#include "unitysdk/PCBJHAOEOEN.h"

class EHKDFLAMDDE;
class LDIENANCAPG;
class LGGGFNJLOMM;
namespace MoleMole { class UIInLevelSkillButtonZiplineChangeEffWidgetController; }
namespace MoleMole { class UIRealtimeQTEGeneralButtonChildWindowController; }
namespace MoleMole::Config { class ButtonQTEZipLineSinglePressCountDownEntryStyleEntry; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace System { class Action; }

#define FFFKMIDKOGN_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x116AD450)
#define FFFKMIDKOGN_BNFMJEJGCAB_OFFSET UNITYSDK_OFFSET(0x116AD260)
#define FFFKMIDKOGN_BOLOPDPALNG_OFFSET UNITYSDK_OFFSET(0x116AD200)
#define FFFKMIDKOGN_JBCDGHHDCJK_OFFSET UNITYSDK_OFFSET(0x116AD620)
#define FFFKMIDKOGN_KGHOGMJOOFI_OFFSET UNITYSDK_OFFSET(0x116AD4B0)
#define FFFKMIDKOGN_NGPGJLPFHGC_OFFSET UNITYSDK_OFFSET(0x116AD060)
#define FFFKMIDKOGN__CTOR_OFFSET UNITYSDK_OFFSET(0x116ACFE0)

inline static constexpr unsigned int FFFKMIDKOGN_TypeDefinitionIndex = 66167;

class FFFKMIDKOGN : public ::KCKJCNDLCEM
{
public:
	::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* AFPMOEKKNEI; // 0x10
	::LDIENANCAPG* BFNLFLELJFH; // 0x18
	::EHKDFLAMDDE* CLPKHEADBOJ; // 0x20
	::MoleMole::Config::RealtimeQTEStyleEntryBase* AHMFPFACACD; // 0x28
	::MoleMole::UIInLevelSkillButtonZiplineChangeEffWidgetController* OBKEMPGGPMJ; // 0x30
	::LGGGFNJLOMM* OGFLBKKACCC; // 0x38

	::System::Void _ctor(::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry* DFMKILICPFB, ::LDIENANCAPG* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ButtonQTEZipLineSinglePressCountDownEntryStyleEntry*, ::LDIENANCAPG*))((::PBYTE)hIl2Cpp + FFFKMIDKOGN__CTOR_OFFSET))(this, DFMKILICPFB, PLBEAIIJADM);
	}

	::System::Void NGPGJLPFHGC(::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController* NCIMBHDKIJM, ::EHKDFLAMDDE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIRealtimeQTEGeneralButtonChildWindowController*, ::EHKDFLAMDDE*))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_NGPGJLPFHGC_OFFSET))(this, NCIMBHDKIJM, AEJAMJDBHAM);
	}

	::System::Void BOLOPDPALNG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_BOLOPDPALNG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean BNFMJEJGCAB(::PCBJHAOEOEN KOBGAHDCAMA, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::PCBJHAOEOEN, ::System::Action*))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_BNFMJEJGCAB_OFFSET))(this, KOBGAHDCAMA, MGAKJHJAGJI);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void KGHOGMJOOFI(::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_KGHOGMJOOFI_OFFSET))(this, MGAKJHJAGJI);
	}

	::System::Void JBCDGHHDCJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFKMIDKOGN_JBCDGHHDCJK_OFFSET))(this);
	}
};
