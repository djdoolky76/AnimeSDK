#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/System/Object.h"

class PFFOLJBCJOL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMEJFBPNBIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1634C0C0)

inline static constexpr unsigned int KMEJFBPNBIB_TypeDefinitionIndex = 88658;

class KMEJFBPNBIB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PFFOLJBCJOL*>* HFNOALAKGIH; // 0x10
	::System::Int32 FDOGGANACAP; // 0x18
	::System::Int32 DOIGGLOKNML; // 0x1C
	::System::Int32 GJOCGANNFDP; // 0x20
	::System::Int32 KCFHCFIEPPK; // 0x24
	::MoleMole::Config::BuddyTeamType EOLMGHFLAGC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEJFBPNBIB__CTOR_OFFSET))(this);
	}
};
