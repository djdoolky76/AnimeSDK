#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_BOSSCHALLENGEHISTORYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB5920)

namespace MoleMole
{
	inline static constexpr unsigned int BossChallengeHistoryContext_TypeDefinitionIndex = 62314;

	class BossChallengeHistoryContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::JGGGPPLICEA InitialPlayType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BOSSCHALLENGEHISTORYCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
