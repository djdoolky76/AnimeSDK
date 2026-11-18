#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCNJIFBMMIG_OHFCKHPILHG.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCNJIFBMMIG_EKINBDBHLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x150B4C20)

inline static constexpr unsigned int PCNJIFBMMIG_EKINBDBHLBF_TypeDefinitionIndex = 92054;

class PCNJIFBMMIG_EKINBDBHLBF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* BCFAHBAJLMI; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* DFDKCFFLFBI; // 0x18
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* LNBANKBPMEN; // 0x20
	::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock* NMONACAKDIJ; // 0x28
	::MoleMole::Battle::Entity* CGELPKBKHOJ; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* KHBGEMNKBEK; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* OECHLCNEPGH; // 0x40
	::PCNJIFBMMIG_OHFCKHPILHG EEMOPKCLEGM; // 0x48
	::System::Single EONFBDLFKNM; // 0x4C
	::System::Single DDKOMLIECPA; // 0x50
	::System::Boolean FJPOECJDNJD; // 0x54
	::System::Boolean PICMMGKIFIH; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNJIFBMMIG_EKINBDBHLBF__CTOR_OFFSET))(this);
	}
};
