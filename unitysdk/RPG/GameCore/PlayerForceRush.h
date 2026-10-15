#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerForceRush; }

#define RPG_GAMECORE_PLAYERFORCERUSH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933B30)
#define RPG_GAMECORE_PLAYERFORCERUSH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933B40)
#define RPG_GAMECORE_PLAYERFORCERUSH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerForceRush_TypeDefinitionIndex = 20006;

	class PlayerForceRush : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceRush; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerForceRush* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerForceRush*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerForceRush* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerForceRush*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERFORCERUSH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
