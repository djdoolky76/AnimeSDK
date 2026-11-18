#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGECURRENTSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B03F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGECURRENTSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B0520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeCurrentScore_TypeDefinitionIndex = 84488;

	class LDGetBossChallengeCurrentScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGECURRENTSCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGECURRENTSCORE_INVOKE_OFFSET))(this);
		}
	};
}
