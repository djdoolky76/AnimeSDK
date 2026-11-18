#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E8C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E8E60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishRatingProgress_TypeDefinitionIndex = 43206;

	class LDGetStylishRatingProgress
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHRATINGPROGRESS_INVOKE_OFFSET))(this);
		}
	};
}
