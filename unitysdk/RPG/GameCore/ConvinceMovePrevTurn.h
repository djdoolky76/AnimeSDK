#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceMovePrevTurn; }

#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B1560)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B1570)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B1520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMovePrevTurn_TypeDefinitionIndex = 21840;

	class ConvinceMovePrevTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceToOption; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
