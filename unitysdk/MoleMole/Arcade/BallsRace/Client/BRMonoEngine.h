#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1F695170)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F6950D0)
#define MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6952A0)

namespace MoleMole::Arcade::BallsRace::Client
{
	inline static constexpr unsigned int BRMonoEngine_TypeDefinitionIndex = 95077;

	class BRMonoEngine : public ::MoleMole::MiniGame::MiniGameEngineScriptBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE__CTOR_OFFSET))(this);
		}

		::System::Void OJENCMOGDKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_OJENCMOGDKL_OFFSET))(this);
		}

		::System::Void KMMIPNMJILI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLSRACE_CLIENT_BRMONOENGINE_KMMIPNMJILI_OFFSET))(this);
		}
	};
}
