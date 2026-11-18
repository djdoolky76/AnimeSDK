#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace System { class Action; }

#define PNJDGHBEMLK_CAJOJJDJJBC_BABKHPCENBP_OFFSET UNITYSDK_OFFSET(0x178EDD70)
#define PNJDGHBEMLK_CAJOJJDJJBC_EFGAJJJJKFO_OFFSET UNITYSDK_OFFSET(0x178EDCF0)
#define PNJDGHBEMLK_CAJOJJDJJBC_IJBFDNALNFK_OFFSET UNITYSDK_OFFSET(0x178EDD90)
#define PNJDGHBEMLK_CAJOJJDJJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x178EDCE0)

inline static constexpr unsigned int PNJDGHBEMLK_CAJOJJDJJBC_TypeDefinitionIndex = 64959;

class PNJDGHBEMLK_CAJOJJDJJBC : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowChessboard_Flash* OAIDHFOBKKO; // 0x10
	::System::Action* ABEEPADAEMN; // 0x18
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x20
	::System::Action* IHLBALNBGKM; // 0x28
	::System::Boolean BGLGCGACKIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CAJOJJDJJBC__CTOR_OFFSET))(this);
	}

	::System::Void EFGAJJJJKFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CAJOJJDJJBC_EFGAJJJJKFO_OFFSET))(this);
	}

	::System::Void BABKHPCENBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CAJOJJDJJBC_BABKHPCENBP_OFFSET))(this);
	}

	::System::Void IJBFDNALNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CAJOJJDJJBC_IJBFDNALNFK_OFFSET))(this);
	}
};
