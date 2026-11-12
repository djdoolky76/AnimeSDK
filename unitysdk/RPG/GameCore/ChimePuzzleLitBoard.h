#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimePuzzleLitBoard; }

#define RPG_GAMECORE_CHIMEPUZZLELITBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A5EC0)
#define RPG_GAMECORE_CHIMEPUZZLELITBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7A5ED0)
#define RPG_GAMECORE_CHIMEPUZZLELITBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7A5E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleLitBoard_TypeDefinitionIndex = 22368;

	class ChimePuzzleLitBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleLitBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleLitBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimePuzzleLitBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimePuzzleLitBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
