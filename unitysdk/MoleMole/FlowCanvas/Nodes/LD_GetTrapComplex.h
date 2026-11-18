#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D1A560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1A700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTrapComplex_TypeDefinitionIndex = 73522;

	class LD_GetTrapComplex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTRAPCOMPLEX_INVOKE_OFFSET))(this);
		}
	};
}
