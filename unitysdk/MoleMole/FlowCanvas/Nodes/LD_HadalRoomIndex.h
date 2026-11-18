#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x130D6F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x130D7100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomIndex_TypeDefinitionIndex = 77530;

	class LD_HadalRoomIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEX_INVOKE_OFFSET))(this);
		}
	};
}
