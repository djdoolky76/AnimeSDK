#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16238CD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x16238E40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRegisterFightScore_TypeDefinitionIndex = 73491;

	class LDRegisterFightScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 fightScore, ::System::Int32 extraFightScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREGISTERFIGHTSCORE_INVOKE_OFFSET))(this, fightScore, extraFightScore);
		}
	};
}
