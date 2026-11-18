#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHHIDDENRENDERLAYERON_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3B1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHHIDDENRENDERLAYERON__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B2E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPushHiddenRenderLayerOn_TypeDefinitionIndex = 68563;

	class LDPushHiddenRenderLayerOn
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHHIDDENRENDERLAYERON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHHIDDENRENDERLAYERON_INVOKE_OFFSET))(this, tag);
		}
	};
}
