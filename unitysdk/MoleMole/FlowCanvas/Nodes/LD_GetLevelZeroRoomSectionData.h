#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x13578290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13578420)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelZeroRoomSectionData_TypeDefinitionIndex = 38814;

	class LD_GetLevelZeroRoomSectionData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke(::System::Int32 leafQuery)
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA_INVOKE_OFFSET))(this, leafQuery);
		}
	};
}
