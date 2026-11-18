#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244C820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1244CA70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishFinalScoreGetMultiplier_TypeDefinitionIndex = 68955;

	class LDGetStylishFinalScoreGetMultiplier
	{
	public:
		// static const ::System::String* DefaultValue; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER_INVOKE_OFFSET))(this);
		}
	};
}
