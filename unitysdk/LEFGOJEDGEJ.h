#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGHCIFIPDKP.h"

class AFMMAIKKACF;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define LEFGOJEDGEJ_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x126CFB50)
#define LEFGOJEDGEJ_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x126CFBE0)
#define LEFGOJEDGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x126CFBD0)

inline static constexpr unsigned int LEFGOJEDGEJ_TypeDefinitionIndex = 65745;

class LEFGOJEDGEJ : public ::LGHCIFIPDKP
{
public:
	::MoleMole::UIHollowChessboard3DModelController* FOJJGGONBJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFGOJEDGEJ__CTOR_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LEFGOJEDGEJ_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + LEFGOJEDGEJ_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
