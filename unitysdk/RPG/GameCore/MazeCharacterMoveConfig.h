#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeCharacterMoveConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZECHARACTERMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D864110)
#define RPG_GAMECORE_MAZECHARACTERMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D863FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCharacterMoveConfig_TypeDefinitionIndex = 17632;

	class MazeCharacterMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartRushMove; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndRushMove; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeCharacterMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeCharacterMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHARACTERMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
