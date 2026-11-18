#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16241960)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16241B80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomSectionData_TypeDefinitionIndex = 46423;

	class LD_HadalRoomSectionData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
