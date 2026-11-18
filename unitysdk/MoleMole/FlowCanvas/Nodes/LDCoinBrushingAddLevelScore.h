#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C65D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x130C6830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingAddLevelScore_TypeDefinitionIndex = 69593;

	class LDCoinBrushingAddLevelScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCORE_INVOKE_OFFSET))(this, a);
		}
	};
}
