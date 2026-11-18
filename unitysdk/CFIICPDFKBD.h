#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define CFIICPDFKBD_CDMPLLBBBKI_OFFSET UNITYSDK_OFFSET(0x128ED3C0)
#define CFIICPDFKBD_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x128ECDC0)
#define CFIICPDFKBD_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x128ECE10)
#define CFIICPDFKBD_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x128ED330)
#define CFIICPDFKBD__CTOR_OFFSET UNITYSDK_OFFSET(0x128ECDB0)

inline static constexpr unsigned int CFIICPDFKBD_TypeDefinitionIndex = 81405;

class CFIICPDFKBD
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x30
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x38

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + CFIICPDFKBD__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + CFIICPDFKBD_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + CFIICPDFKBD_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIICPDFKBD_LGDMAAJFKNE_OFFSET))(this);
	}

	::System::Void CDMPLLBBBKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIICPDFKBD_CDMPLLBBBKI_OFFSET))(this);
	}
};
