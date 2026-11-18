#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x142FA450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x142FA610)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingGetLevelScore_TypeDefinitionIndex = 49592;

	class LDCoinBrushingGetLevelScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGGETLEVELSCORE_INVOKE_OFFSET))(this);
		}
	};
}
