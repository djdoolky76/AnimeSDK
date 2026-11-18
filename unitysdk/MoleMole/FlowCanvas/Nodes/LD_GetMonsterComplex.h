#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDE720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDE8C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetMonsterComplex_TypeDefinitionIndex = 59572;

	class LD_GetMonsterComplex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETMONSTERCOMPLEX_INVOKE_OFFSET))(this);
		}
	};
}
