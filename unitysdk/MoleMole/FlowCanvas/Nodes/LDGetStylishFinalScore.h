#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D9960)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x139D9B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishFinalScore_TypeDefinitionIndex = 82822;

	class LDGetStylishFinalScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE_INVOKE_OFFSET))(this);
		}
	};
}
