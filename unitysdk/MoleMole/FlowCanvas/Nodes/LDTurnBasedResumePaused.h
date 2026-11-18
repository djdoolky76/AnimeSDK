#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3D7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3D8F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedResumePaused_TypeDefinitionIndex = 76393;

	class LDTurnBasedResumePaused
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDRESUMEPAUSED_INVOKE_OFFSET))(this, reason);
		}
	};
}
