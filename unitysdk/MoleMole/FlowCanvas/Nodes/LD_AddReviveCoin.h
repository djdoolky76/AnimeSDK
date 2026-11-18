#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x135779D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13577BD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AddReviveCoin_TypeDefinitionIndex = 83592;

	class LD_AddReviveCoin
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 Count, ::System::Single HPRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDREVIVECOIN_INVOKE_OFFSET))(this, Count, HPRatio);
		}
	};
}
