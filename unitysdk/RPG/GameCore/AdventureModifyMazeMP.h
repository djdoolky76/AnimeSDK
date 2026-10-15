#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureModifyMazeMP; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39C600)
#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39C610)
#define RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39C5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifyMazeMP_TypeDefinitionIndex = 21751;

	class AdventureModifyMazeMP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::System::Boolean ClientUseGMCommand; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyMazeMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureModifyMazeMP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureModifyMazeMP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFYMAZEMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
