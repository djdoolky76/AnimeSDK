#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x139E4630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionResolver_TypeDefinitionIndex = 47875;

	class OpenDirectionResolver
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER__CTOR_OFFSET))(this);
		}
	};
}
