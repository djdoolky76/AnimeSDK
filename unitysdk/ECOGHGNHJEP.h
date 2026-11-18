#pragma once
#include "unitysdk/unitysdk.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EHGPNGPADCB;
namespace MoleMole { class UIHollowMainPageController; }

#define ECOGHGNHJEP_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13539920)
#define ECOGHGNHJEP_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x13539970)
#define ECOGHGNHJEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13539910)

inline static constexpr unsigned int ECOGHGNHJEP_TypeDefinitionIndex = 46414;

class ECOGHGNHJEP
{
public:
	::ALGKMLLALFG* JOKIHJCIMGA; // 0x30
	::AFMMAIKKACF* AAOCANGHBDG; // 0x38
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x40
	::System::Boolean MBEMOHDDEMA; // 0x48

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + ECOGHGNHJEP__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ECOGHGNHJEP_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + ECOGHGNHJEP_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
