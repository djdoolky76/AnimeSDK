#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceMoveTurn; }

#define RPG_GAMECORE_CONVINCEMOVETURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DF170)
#define RPG_GAMECORE_CONVINCEMOVETURN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DF180)
#define RPG_GAMECORE_CONVINCEMOVETURN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DF140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMoveTurn_TypeDefinitionIndex = 21838;

	class ConvinceMoveTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 TurnIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMoveTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMoveTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVETURN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
