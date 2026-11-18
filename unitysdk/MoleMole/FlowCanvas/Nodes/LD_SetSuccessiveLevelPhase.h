#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1041E660)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1041E7B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetSuccessiveLevelPhase_TypeDefinitionIndex = 69909;

	class LD_SetSuccessiveLevelPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 currentPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETSUCCESSIVELEVELPHASE_INVOKE_OFFSET))(this, currentPhase);
		}
	};
}
