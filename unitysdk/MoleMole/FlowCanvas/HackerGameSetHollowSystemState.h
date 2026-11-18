#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12446C40)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12446D90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetHollowSystemState_TypeDefinitionIndex = 58859;

	class HackerGameSetHollowSystemState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::ProtoScript::HollowSystemType systemState, ::ProtoScript::HollowSystemUIState stateType)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowSystemType, ::ProtoScript::HollowSystemUIState))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET))(this, systemState, stateType);
		}
	};
}
