#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTLAYERNO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F1D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTLAYERNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F1ED0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurrentLayerNo_TypeDefinitionIndex = 57475;

	class LD_AbyssS2_GetCurrentLayerNo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTLAYERNO__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURRENTLAYERNO_INVOKE_OFFSET))(this);
		}
	};
}
