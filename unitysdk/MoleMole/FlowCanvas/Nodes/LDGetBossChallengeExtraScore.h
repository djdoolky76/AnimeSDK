#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465CB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1465CCD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeExtraScore_TypeDefinitionIndex = 50646;

	class LDGetBossChallengeExtraScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEEXTRASCORE_INVOKE_OFFSET))(this);
		}
	};
}
