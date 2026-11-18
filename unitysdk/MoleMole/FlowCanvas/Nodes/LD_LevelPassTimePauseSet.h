#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E7E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET__CTOR_OFFSET UNITYSDK_OFFSET(0x180E7F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_LevelPassTimePauseSet_TypeDefinitionIndex = 89311;

	class LD_LevelPassTimePauseSet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_LEVELPASSTIMEPAUSESET_INVOKE_OFFSET))(this, isPause);
		}
	};
}
