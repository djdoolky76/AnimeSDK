#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLAYEREDEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x139DAD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLAYEREDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x139DAF60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLayeredEffect_TypeDefinitionIndex = 80522;

	class LDLayeredEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLAYEREDEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::Il2CppArray<::System::Int32>* layersIndex, ::System::Boolean isActive, ::System::String* effectName)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLAYEREDEFFECT_INVOKE_OFFSET))(this, entity, layersIndex, isActive, effectName);
		}
	};
}
