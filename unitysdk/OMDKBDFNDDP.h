#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ADJIPOGNOOM;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { class String; }

#define OMDKBDFNDDP_CICALBGFFAL_OFFSET UNITYSDK_OFFSET(0x15FEBEC0)
#define OMDKBDFNDDP_SPAWN_OFFSET UNITYSDK_OFFSET(0x15FEBE00)
#define OMDKBDFNDDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEBEB0)

inline static constexpr unsigned int OMDKBDFNDDP_TypeDefinitionIndex = 87334;

class OMDKBDFNDDP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDKBDFNDDP__CTOR_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::StateMachineBaseAction* Spawn(::ADJIPOGNOOM* KDIFLDNHIMG, ::System::Int32 PCHPCLFBEAG)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::PVOID, ::ADJIPOGNOOM*, ::System::Int32))((::PBYTE)hIl2Cpp + OMDKBDFNDDP_SPAWN_OFFSET))(this, KDIFLDNHIMG, PCHPCLFBEAG);
	}

	static ::System::Void CICALBGFFAL(::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OMDKBDFNDDP_CICALBGFFAL_OFFSET))(CJBJONJDOLI);
	}
};
