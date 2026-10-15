#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SaveModelWhenDead; }

#define RPG_GAMECORE_SAVEMODELWHENDEAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA882E0)
#define RPG_GAMECORE_SAVEMODELWHENDEAD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA882F0)
#define RPG_GAMECORE_SAVEMODELWHENDEAD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA882A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveModelWhenDead_TypeDefinitionIndex = 23135;

	class SaveModelWhenDead : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Save; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveModelWhenDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMODELWHENDEAD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
