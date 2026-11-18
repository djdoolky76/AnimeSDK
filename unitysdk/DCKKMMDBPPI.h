#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define DCKKMMDBPPI_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x12060960)
#define DCKKMMDBPPI_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x120609B0)
#define DCKKMMDBPPI_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x12060BF0)
#define DCKKMMDBPPI__CTOR_OFFSET UNITYSDK_OFFSET(0x12060950)

inline static constexpr unsigned int DCKKMMDBPPI_TypeDefinitionIndex = 50917;

class DCKKMMDBPPI
{
public:
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x30

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + DCKKMMDBPPI__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + DCKKMMDBPPI_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + DCKKMMDBPPI_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKKMMDBPPI_LGDMAAJFKNE_OFFSET))(this);
	}
};
