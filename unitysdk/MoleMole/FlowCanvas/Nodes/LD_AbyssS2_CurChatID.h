#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3DAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3DB40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurChatID_TypeDefinitionIndex = 50731;

	class LD_AbyssS2_CurChatID
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURCHATID_INVOKE_OFFSET))(this);
		}
	};
}
