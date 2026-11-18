#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465C9B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1465CB70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetAbyssDungeonChallengeCountDown_TypeDefinitionIndex = 67371;

	class LDGetAbyssDungeonChallengeCountDown
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Single Invoke()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETABYSSDUNGEONCHALLENGECOUNTDOWN_INVOKE_OFFSET))(this);
		}
	};
}
