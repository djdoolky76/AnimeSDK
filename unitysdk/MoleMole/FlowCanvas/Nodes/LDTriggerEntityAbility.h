#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERENTITYABILITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x130D3470)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERENTITYABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x130D3750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTriggerEntityAbility_TypeDefinitionIndex = 83362;

	class LDTriggerEntityAbility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERENTITYABILITY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::Collections::Generic::List_1<::System::String*>* abilityNameList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTRIGGERENTITYABILITY_INVOKE_OFFSET))(this, entity, abilityNameList);
		}
	};
}
