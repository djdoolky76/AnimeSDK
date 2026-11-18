#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x14309260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14309890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_AreaSectionData_TypeDefinitionIndex = 57821;

	class LD_AbyssS2_AreaSectionData
	{
	public:
		// static const ::System::String* SecionKEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
