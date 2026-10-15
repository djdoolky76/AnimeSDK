#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UsePassiveSkill; }

#define RPG_GAMECORE_USEPASSIVESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4B790)
#define RPG_GAMECORE_USEPASSIVESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4B7A0)
#define RPG_GAMECORE_USEPASSIVESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4B760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UsePassiveSkill_TypeDefinitionIndex = 23424;

	class UsePassiveSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UsePassiveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UsePassiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UsePassiveSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UsePassiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEPASSIVESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
