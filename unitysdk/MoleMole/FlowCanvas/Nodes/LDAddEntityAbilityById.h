#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D4DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x139D5060)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddEntityAbilityById_TypeDefinitionIndex = 81966;

	class LDAddEntityAbilityById
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYBYID__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::Int32>* abilityIDList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDENTITYABILITYBYID_INVOKE_OFFSET))(this, entity, abilityIDList);
		}
	};
}
