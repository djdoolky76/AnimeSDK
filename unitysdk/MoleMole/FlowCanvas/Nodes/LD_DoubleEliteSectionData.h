#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F35D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F3810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_DoubleEliteSectionData_TypeDefinitionIndex = 42130;

	class LD_DoubleEliteSectionData
	{
	public:
		// static const ::System::String* DefaultSectionNam; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_DOUBLEELITESECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
