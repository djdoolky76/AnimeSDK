#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE4530)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE4660)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurrentIndexTag_TypeDefinitionIndex = 72680;

	class LD_AbyssS2_GetCurrentIndexTag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::AreaIDTag Invoke()
		{
			return ((::MoleMole::FlowCanvas::Nodes::AreaIDTag(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTINDEXTAG_INVOKE_OFFSET))(this);
		}
	};
}
