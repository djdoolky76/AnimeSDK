#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16242850)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16242A40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MonsterCreateData_TypeDefinitionIndex = 61543;

	class LD_MonsterCreateData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MONSTERCREATEDATA_REGISTERPORTS_OFFSET))(this);
		}
	};
}
