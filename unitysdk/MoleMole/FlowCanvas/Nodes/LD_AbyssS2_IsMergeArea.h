#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISMERGEAREA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10419380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISMERGEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x104194F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsMergeArea_TypeDefinitionIndex = 52446;

	class LD_AbyssS2_IsMergeArea
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISMERGEAREA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISMERGEAREA_INVOKE_OFFSET))(this);
		}
	};
}
