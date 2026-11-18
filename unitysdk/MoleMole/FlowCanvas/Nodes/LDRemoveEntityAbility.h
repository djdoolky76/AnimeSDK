#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3B980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3BBE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveEntityAbility_TypeDefinitionIndex = 69208;

	class LDRemoveEntityAbility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::String*>* abilityNameList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEENTITYABILITY_INVOKE_OFFSET))(this, entity, abilityNameList);
		}
	};
}
