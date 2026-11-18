#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEEFFECTSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190B4F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEEFFECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190B6C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChangeEffectState_TypeDefinitionIndex = 54966;

	class LDChangeEffectState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEEFFECTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::System::String* stateKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHANGEEFFECTSTATE_INVOKE_OFFSET))(this, entity, stateKey);
		}
	};
}
