#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define DHBKHOAINBN_BNBIALCNFOL_OFFSET UNITYSDK_OFFSET(0x13E4DC50)
#define DHBKHOAINBN_BNMBOCMKDLJ_OFFSET UNITYSDK_OFFSET(0x13E4DAF0)
#define DHBKHOAINBN_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x13E4DC90)
#define DHBKHOAINBN_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13E4DCF0)
#define DHBKHOAINBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4DAE0)

inline static constexpr unsigned int DHBKHOAINBN_TypeDefinitionIndex = 83599;

class DHBKHOAINBN : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ; // 0x10

	::System::Void _ctor(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + DHBKHOAINBN__CTOR_OFFSET))(this, IPNBLOIANBJ);
	}

	::System::Void BNMBOCMKDLJ(::System::Int32 MECCCNJCNKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBKHOAINBN_BNMBOCMKDLJ_OFFSET))(this, MECCCNJCNKO);
	}

	::System::Void BNBIALCNFOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBKHOAINBN_BNBIALCNFOL_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHBKHOAINBN_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBKHOAINBN_HNDGJKPNIHA_OFFSET))(this);
	}
};
