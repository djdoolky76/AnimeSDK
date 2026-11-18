#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244C560)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1244C800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSmashBroMaxScore_TypeDefinitionIndex = 62815;

	class LDGetSmashBroMaxScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSMASHBROMAXSCORE_INVOKE_OFFSET))(this);
		}
	};
}
