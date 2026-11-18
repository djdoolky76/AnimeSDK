#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETHEATCOUNTLEVELABILITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D19C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETHEATCOUNTLEVELABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x10D19F20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Abyss_GetHeatCountLevelAbility_TypeDefinitionIndex = 91126;

	class LD_Abyss_GetHeatCountLevelAbility
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETHEATCOUNTLEVELABILITY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke(::System::Int32 queryHeatCount)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSS_GETHEATCOUNTLEVELABILITY_INVOKE_OFFSET))(this, queryHeatCount);
		}
	};
}
