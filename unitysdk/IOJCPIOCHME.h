#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define IOJCPIOCHME_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x197E2FD0)
#define IOJCPIOCHME_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x197E3090)
#define IOJCPIOCHME_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x197E5A30)
#define IOJCPIOCHME__CTOR_OFFSET UNITYSDK_OFFSET(0x197E2FC0)

inline static constexpr unsigned int IOJCPIOCHME_TypeDefinitionIndex = 48463;

class IOJCPIOCHME
{
public:
	::ALGKMLLALFG* CHKKJBIIKBH; // 0x30
	::AFMMAIKKACF* DAAAEJDBNFI; // 0x38
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x40

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + IOJCPIOCHME__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + IOJCPIOCHME_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + IOJCPIOCHME_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJCPIOCHME_LGDMAAJFKNE_OFFSET))(this);
	}
};
