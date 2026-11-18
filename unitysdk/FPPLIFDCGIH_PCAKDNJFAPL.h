#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPPLIFDCGIH_PCAKDNJFAPL_LLFKGIKJIPH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define FPPLIFDCGIH_PCAKDNJFAPL_IDKKNFLEHPN_OFFSET UNITYSDK_OFFSET(0x125BB390)

inline static constexpr unsigned int FPPLIFDCGIH_PCAKDNJFAPL_TypeDefinitionIndex = 51084;

class FPPLIFDCGIH_PCAKDNJFAPL : public ::System::Object
{
public:
	static ::FPPLIFDCGIH_PCAKDNJFAPL_LLFKGIKJIPH IDKKNFLEHPN(::MoleMole::Vector2Int IEFBHIDIPPL)
	{
		return ((::FPPLIFDCGIH_PCAKDNJFAPL_LLFKGIKJIPH(*)(::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + FPPLIFDCGIH_PCAKDNJFAPL_IDKKNFLEHPN_OFFSET))(IEFBHIDIPPL);
	}
};
