#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x13565D20)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13566840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityUpdateStateMachineParam_TypeDefinitionIndex = 76270;

	class HollowEntityUpdateStateMachineParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::ChessStateMachine::StateMachineParamsWrapper paramsWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::ChessStateMachine::StateMachineParamsWrapper))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM_INVOKE_OFFSET))(this, entityRuntimeID, paramsWrapper);
		}
	};
}
