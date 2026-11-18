#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTMERGEAREAID_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E5AA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTMERGEAREAID__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5C50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNextMergeAreaID_TypeDefinitionIndex = 66359;

	class LD_AbyssS2_GetNextMergeAreaID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTMERGEAREAID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTMERGEAREAID_INVOKE_OFFSET))(this);
		}
	};
}
