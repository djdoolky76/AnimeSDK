#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }

#define KLOEEONIMFA_EAFILLLBCDJ_OFFSET UNITYSDK_OFFSET(0x19961DB0)
#define KLOEEONIMFA_NFHPNPCNIMK_OFFSET UNITYSDK_OFFSET(0x199628D0)
#define KLOEEONIMFA__CTOR_OFFSET UNITYSDK_OFFSET(0x19961DA0)

inline static constexpr unsigned int KLOEEONIMFA_TypeDefinitionIndex = 83195;

class KLOEEONIMFA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOEEONIMFA__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ChessStateMachine::StateMachineBaseAction* EAFILLLBCDJ(::MoleMole::ChessStateMachine::StateMachineBaseAction* MLMFCGCIGPG)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + KLOEEONIMFA_EAFILLLBCDJ_OFFSET))(MLMFCGCIGPG);
	}

	static ::MoleMole::ChessStateMachine::StateNodeConfig* NFHPNPCNIMK(::MoleMole::ChessStateMachine::StateNodeConfig* PNBFFABLMBI)
	{
		return ((::MoleMole::ChessStateMachine::StateNodeConfig*(*)(::MoleMole::ChessStateMachine::StateNodeConfig*))((::PBYTE)hIl2Cpp + KLOEEONIMFA_NFHPNPCNIMK_OFFSET))(PNBFFABLMBI);
	}
};
