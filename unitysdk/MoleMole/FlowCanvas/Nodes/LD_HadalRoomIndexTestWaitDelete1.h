#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245E560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1245E750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomIndexTestWaitDelete1_TypeDefinitionIndex = 59172;

	class LD_HadalRoomIndexTestWaitDelete1
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMINDEXTESTWAITDELETE1_INVOKE_OFFSET))(this);
		}
	};
}
