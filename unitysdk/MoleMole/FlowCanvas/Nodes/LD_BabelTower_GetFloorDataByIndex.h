#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE5B00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE5CA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetFloorDataByIndex_TypeDefinitionIndex = 42431;

	class LD_BabelTower_GetFloorDataByIndex
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Invoke(::System::Int32 floorIndex)
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_INVOKE_OFFSET))(this, floorIndex);
		}
	};
}
