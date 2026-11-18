#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define AJBOBJLPCBL_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16481ED0)
#define AJBOBJLPCBL_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x16481FD0)
#define AJBOBJLPCBL_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x16482020)
#define AJBOBJLPCBL__CTOR_OFFSET UNITYSDK_OFFSET(0x16481EC0)

inline static constexpr unsigned int AJBOBJLPCBL_TypeDefinitionIndex = 67047;

class AJBOBJLPCBL
{
public:
	::AFMMAIKKACF* DAAAEJDBNFI; // 0x30
	::ALGKMLLALFG* CHKKJBIIKBH; // 0x38
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x40

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + AJBOBJLPCBL__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + AJBOBJLPCBL_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + AJBOBJLPCBL_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJBOBJLPCBL_LGDMAAJFKNE_OFFSET))(this);
	}
};
