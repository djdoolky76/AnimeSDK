#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadBattlePerform; }
namespace System { class String; }

#define RPG_GAMECORE_PRELOADBATTLEPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93F760)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93F770)
#define RPG_GAMECORE_PRELOADBATTLEPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattlePerform_TypeDefinitionIndex = 23380;

	class PreloadBattlePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BattlePerformPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
