#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateNodeType.h"
#include "unitysdk/NKOGNHFECAJ.h"

class AIIHGJKLJIL;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHNIFOEGOBB_CHILNOEFLBN_OFFSET UNITYSDK_OFFSET(0x181F4030)
#define AHNIFOEGOBB_DBGIGBNCMHI_OFFSET UNITYSDK_OFFSET(0x181F4010)
#define AHNIFOEGOBB_DIEJKHJFJFG_OFFSET UNITYSDK_OFFSET(0x181F41E0)
#define AHNIFOEGOBB_KDAKHBHMOGF_OFFSET UNITYSDK_OFFSET(0x181F4050)
#define AHNIFOEGOBB_KNFHDPKAKPI_OFFSET UNITYSDK_OFFSET(0x181F4220)
#define AHNIFOEGOBB_LDJAMLMOCDJ_OFFSET UNITYSDK_OFFSET(0x181F4200)
#define AHNIFOEGOBB_MJNGFIMFPBM_OFFSET UNITYSDK_OFFSET(0x181F4270)
#define AHNIFOEGOBB_MOPIHAHACGN_OFFSET UNITYSDK_OFFSET(0x181F41C0)
#define AHNIFOEGOBB_PBIKDDIDDGI_OFFSET UNITYSDK_OFFSET(0x181F4290)
#define AHNIFOEGOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x181F3ED0)

inline static constexpr unsigned int AHNIFOEGOBB_TypeDefinitionIndex = 75888;

class AHNIFOEGOBB : public ::NKOGNHFECAJ
{
public:
	::System::Collections::Generic::List_1<::AIIHGJKLJIL*>* DEKKJJHDCAG; // 0x58
	::MoleMole::ChessStateMachine::StateNodeConfig* stateNodeConfig; // 0x60
	::System::Collections::Generic::List_1<::AIIHGJKLJIL*>* NDHIBEEAJBO; // 0x68
	::System::Int32 DDDFFKCEKCG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB__CTOR_OFFSET))(this);
	}

	::System::Boolean DBGIGBNCMHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_DBGIGBNCMHI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* CHILNOEFLBN()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_CHILNOEFLBN_OFFSET))(this);
	}

	::AHNIFOEGOBB* KDAKHBHMOGF()
	{
		return ((::AHNIFOEGOBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_KDAKHBHMOGF_OFFSET))(this);
	}

	::System::Boolean MOPIHAHACGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_MOPIHAHACGN_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType DIEJKHJFJFG()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_DIEJKHJFJFG_OFFSET))(this);
	}

	::System::Boolean LDJAMLMOCDJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_LDJAMLMOCDJ_OFFSET))(this);
	}

	::System::Void KNFHDPKAKPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_KNFHDPKAKPI_OFFSET))(this);
	}

	::System::Boolean MJNGFIMFPBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_MJNGFIMFPBM_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateNodeType PBIKDDIDDGI()
	{
		return ((::MoleMole::ChessStateMachine::StateNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + AHNIFOEGOBB_PBIKDDIDDGI_OFFSET))(this);
	}
};
