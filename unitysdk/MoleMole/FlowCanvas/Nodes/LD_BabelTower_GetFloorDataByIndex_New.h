#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x11913050)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW__CTOR_OFFSET UNITYSDK_OFFSET(0x119131F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_BabelTower_GetFloorDataByIndex_New_TypeDefinitionIndex = 44591;

	class LD_BabelTower_GetFloorDataByIndex_New
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW__CTOR_OFFSET))(this);
		}

		::MoleMole::Project::Config::BabelFloorInfoTemplateExt* Invoke(::System::UInt32 floorIndex)
		{
			return ((::MoleMole::Project::Config::BabelFloorInfoTemplateExt*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_BABELTOWER_GETFLOORDATABYINDEX_NEW_INVOKE_OFFSET))(this, floorIndex);
		}
	};
}
