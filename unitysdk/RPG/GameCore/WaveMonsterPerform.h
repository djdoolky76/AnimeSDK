#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaveMonsterTiming.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaveMonsterPerform; }

#define RPG_GAMECORE_WAVEMONSTERPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA5D80)
#define RPG_GAMECORE_WAVEMONSTERPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA5D90)
#define RPG_GAMECORE_WAVEMONSTERPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA5D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaveMonsterPerform_TypeDefinitionIndex = 23407;

	class WaveMonsterPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFindPerformMonsterFailed; // 0x18
		::RPG::GameCore::WaveMonsterTiming CreateTiming; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaveMonsterPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaveMonsterPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAVEMONSTERPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
