#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E4A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E4B60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddAbilityByLevelAbilityConfigIDList_TypeDefinitionIndex = 44017;

	class LDAddAbilityByLevelAbilityConfigIDList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* abilityIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET))(this, abilityIdList);
		}
	};
}
