#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURMERGEAREAORDERNO_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D19930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURMERGEAREAORDERNO__CTOR_OFFSET UNITYSDK_OFFSET(0x10D19AA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurMergeAreaOrderNo_TypeDefinitionIndex = 85837;

	class LD_AbyssS2_GetCurMergeAreaOrderNo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURMERGEAREAORDERNO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURMERGEAREAORDERNO_INVOKE_OFFSET))(this);
		}
	};
}
