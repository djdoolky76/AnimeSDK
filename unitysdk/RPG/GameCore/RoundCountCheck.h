#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoundCountCheck; }

#define RPG_GAMECORE_ROUNDCOUNTCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A640)
#define RPG_GAMECORE_ROUNDCOUNTCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A650)
#define RPG_GAMECORE_ROUNDCOUNTCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoundCountCheck_TypeDefinitionIndex = 22958;

	class RoundCountCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetRoundCount; // 0x18
		::System::UInt32 TargetTurnCount; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoundCountCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoundCountCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoundCountCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoundCountCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROUNDCOUNTCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
