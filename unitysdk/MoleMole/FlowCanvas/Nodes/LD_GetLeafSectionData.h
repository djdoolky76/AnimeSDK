#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDE570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDE700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLeafSectionData_TypeDefinitionIndex = 64460;

	class LD_GetLeafSectionData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke(::System::Int32 leafFcIndex)
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA_INVOKE_OFFSET))(this, leafFcIndex);
		}
	};
}
