#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F1EF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F2160)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetMergeAreaIDByOrderNo_TypeDefinitionIndex = 84470;

	class LD_AbyssS2_GetMergeAreaIDByOrderNo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 qryIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMERGEAREAIDBYORDERNO_INVOKE_OFFSET))(this, qryIndex);
		}
	};
}
