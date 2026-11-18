#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1DFD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionSelector_TypeDefinitionIndex = 84665;

	class OpenDirectionSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR__CTOR_OFFSET))(this);
		}
	};
}
