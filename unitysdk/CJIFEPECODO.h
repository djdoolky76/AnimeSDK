#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EBubbleInsertType.h"
#include "unitysdk/System/Object.h"

class AHLNFMAJNLC;
namespace MoleMole { class UIBubbleTips; }

#define CJIFEPECODO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x145CD490)
#define CJIFEPECODO_LGGMMCILJFH_OFFSET UNITYSDK_OFFSET(0x145CCEE0)
#define CJIFEPECODO_MFNJJLKOKIC_OFFSET UNITYSDK_OFFSET(0x145CD070)
#define CJIFEPECODO__CTOR_OFFSET UNITYSDK_OFFSET(0x145CCE30)

inline static constexpr unsigned int CJIFEPECODO_TypeDefinitionIndex = 39379;

class CJIFEPECODO : public ::System::Object
{
public:
	::AHLNFMAJNLC* DPPFJDCEIOO; // 0x10
	::MoleMole::UIBubbleTips* GFPCNLJGFBG; // 0x18
	::Share::EBubbleInsertType OBNIAHNMHPF; // 0x20
	::System::Int32 MDPPNMIPDMP; // 0x24

	::System::Void _ctor(::Share::EBubbleInsertType OBNIAHNMHPF, ::System::Int32 MDPPNMIPDMP, ::AHLNFMAJNLC* DPPFJDCEIOO)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EBubbleInsertType, ::System::Int32, ::AHLNFMAJNLC*))((::PBYTE)hIl2Cpp + CJIFEPECODO__CTOR_OFFSET))(this, OBNIAHNMHPF, MDPPNMIPDMP, DPPFJDCEIOO);
	}

	::System::Void LGGMMCILJFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFEPECODO_LGGMMCILJFH_OFFSET))(this);
	}

	::MoleMole::UIBubbleTips* MFNJJLKOKIC()
	{
		return ((::MoleMole::UIBubbleTips*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFEPECODO_MFNJJLKOKIC_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIFEPECODO_HFBPONNNLBA_OFFSET))(this);
	}
};
