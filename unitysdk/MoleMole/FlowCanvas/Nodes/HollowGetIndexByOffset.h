#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYOFFSET_INVOKE_OFFSET UNITYSDK_OFFSET(0x10403540)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x10403730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowGetIndexByOffset_TypeDefinitionIndex = 52628;

	class HollowGetIndexByOffset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYOFFSET__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 startIndex, ::MoleMole::Vector2Int offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWGETINDEXBYOFFSET_INVOKE_OFFSET))(this, startIndex, offset);
		}
	};
}
