#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D79F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x180D7C50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddEntityAbilityNode_TypeDefinitionIndex = 60377;

	class LDAddEntityAbilityNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::String*>* abilityNameList)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYNODE_INVOKE_OFFSET))(this, entity, abilityNameList);
		}
	};
}
