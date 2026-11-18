#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190C350)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190C480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetBossChallengeDamageScore_TypeDefinitionIndex = 89497;

	class LDGetBossChallengeDamageScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETBOSSCHALLENGEDAMAGESCORE_INVOKE_OFFSET))(this);
		}
	};
}
