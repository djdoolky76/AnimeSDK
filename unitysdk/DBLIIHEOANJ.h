#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define DBLIIHEOANJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x19A31BA0)
#define DBLIIHEOANJ_LGDMAAJFKNE_OFFSET UNITYSDK_OFFSET(0x19A31CA0)
#define DBLIIHEOANJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x19A31CF0)
#define DBLIIHEOANJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19A31B90)

inline static constexpr unsigned int DBLIIHEOANJ_TypeDefinitionIndex = 69859;

class DBLIIHEOANJ
{
public:
	::AFMMAIKKACF* DAAAEJDBNFI; // 0x30
	::ALGKMLLALFG* CHKKJBIIKBH; // 0x38
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x40

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + DBLIIHEOANJ__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + DBLIIHEOANJ_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + DBLIIHEOANJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LGDMAAJFKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLIIHEOANJ_LGDMAAJFKNE_OFFSET))(this);
	}
};
