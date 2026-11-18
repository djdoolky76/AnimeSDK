#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID_INVOKE_OFFSET UNITYSDK_OFFSET(0x143098B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID__CTOR_OFFSET UNITYSDK_OFFSET(0x14309940)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurInteractionNpcId_TypeDefinitionIndex = 56208;

	class LD_AbyssS2_CurInteractionNpcId
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID_INVOKE_OFFSET))(this);
		}
	};
}
