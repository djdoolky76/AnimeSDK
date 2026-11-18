#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMID_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE5E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMID__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE6050)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomID_TypeDefinitionIndex = 51627;

	class LD_HadalRoomID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMID_INVOKE_OFFSET))(this);
		}
	};
}
