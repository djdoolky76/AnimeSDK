#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLCLADIHBOD.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define KFILEBFICOE_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0x1515BC80)
#define KFILEBFICOE_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1515BEA0)
#define KFILEBFICOE_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0x1515BE90)
#define KFILEBFICOE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1515BC50)
#define KFILEBFICOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1515BC10)

inline static constexpr unsigned int KFILEBFICOE_TypeDefinitionIndex = 84466;

class KFILEBFICOE
{
public:
	::MLCLADIHBOD OBNIAHNMHPF; // 0x28
	::System::Single EGEGIMGMJHN; // 0x2C
	::System::Boolean HDLENPCFIEI; // 0x30
	::System::Boolean CNNNAJDJMEC; // 0x31

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::MLCLADIHBOD OBNIAHNMHPF, ::System::Single EGEGIMGMJHN, ::System::Boolean HDLENPCFIEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MLCLADIHBOD, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KFILEBFICOE__CTOR_OFFSET))(this, PDACHPLBKIE, OBNIAHNMHPF, EGEGIMGMJHN, HDLENPCFIEI);
	}

	::System::Void _ctor_1(::System::String* PDACHPLBKIE, ::System::Boolean CNNNAJDJMEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFILEBFICOE__CTOR_1_OFFSET))(this, PDACHPLBKIE, CNNNAJDJMEC);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + KFILEBFICOE_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + KFILEBFICOE_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}

	static ::KFILEBFICOE* COKNIICCODC(::MLCLADIHBOD OBNIAHNMHPF, ::System::Single EGEGIMGMJHN, ::System::Boolean HDLENPCFIEI)
	{
		return ((::KFILEBFICOE*(*)(::MLCLADIHBOD, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KFILEBFICOE_COKNIICCODC_OFFSET))(OBNIAHNMHPF, EGEGIMGMJHN, HDLENPCFIEI);
	}
};
