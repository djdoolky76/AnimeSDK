#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBDELDCBAAB.h"

class AFMMAIKKACF;
class GAJCDFLMFBN;
namespace MoleMole { class UIHollowMainPageController; }

#define INNJLDJKIPG_CDMPLLBBBKI_OFFSET UNITYSDK_OFFSET(0x153C5F80)
#define INNJLDJKIPG_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x153C5CD0)
#define INNJLDJKIPG_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x153C5D20)
#define INNJLDJKIPG_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x153C61A0)
#define INNJLDJKIPG__CTOR_OFFSET UNITYSDK_OFFSET(0x153C5C10)

inline static constexpr unsigned int INNJLDJKIPG_TypeDefinitionIndex = 43812;

class INNJLDJKIPG : public ::GBDELDCBAAB
{
public:
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x28

	::System::Void _ctor(::GAJCDFLMFBN* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::GAJCDFLMFBN*))((::PBYTE)hIl2Cpp + INNJLDJKIPG__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + INNJLDJKIPG_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void CDMPLLBBBKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNJLDJKIPG_CDMPLLBBBKI_OFFSET))(this);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNJLDJKIPG_LGDMAAJFKNE_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + INNJLDJKIPG_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
