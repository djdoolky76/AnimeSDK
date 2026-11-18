#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244C400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1244C540)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeMaxScore_TypeDefinitionIndex = 51937;

	class LDGetBossChallengeMaxScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEMAXSCORE_INVOKE_OFFSET))(this);
		}
	};
}
