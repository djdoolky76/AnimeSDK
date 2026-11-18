#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHBKHOAINBN.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define NABGKOGAHDB_BNBIALCNFOL_OFFSET UNITYSDK_OFFSET(0x1059EDF0)
#define NABGKOGAHDB_IOMDPLCMDDM_OFFSET UNITYSDK_OFFSET(0x1059EEB0)
#define NABGKOGAHDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1059EDE0)

inline static constexpr unsigned int NABGKOGAHDB_TypeDefinitionIndex = 39315;

class NABGKOGAHDB : public ::DHBKHOAINBN
{
public:
	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + NABGKOGAHDB__CTOR_OFFSET))(this, IPNBLOIANBJ);
	}

	::System::Void BNBIALCNFOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABGKOGAHDB_BNBIALCNFOL_OFFSET))(this);
	}

	::System::Void IOMDPLCMDDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABGKOGAHDB_IOMDPLCMDDM_OFFSET))(this);
	}
};
