#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C5E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C6290)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveAbilityByLevelAbilityConfigIDList_TypeDefinitionIndex = 80790;

	class LDRemoveAbilityByLevelAbilityConfigIDList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* abilityIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEABILITYBYLEVELABILITYCONFIGIDLIST_INVOKE_OFFSET))(this, abilityIdList);
		}
	};
}
