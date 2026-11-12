#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementWaitTime; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1E551480)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E551490)
#define RPG_GAMECORE_ACHIEVEMENTWAITTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E551450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementWaitTime_TypeDefinitionIndex = 21375;

	class AchievementWaitTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StartEvent; // 0x18
		::RPG::GameCore::DynamicString* ResetEvent; // 0x20
		::System::Single WaitTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AchievementWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AchievementWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AchievementWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTWAITTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
