#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UseSequencedSkill; }

#define RPG_GAMECORE_USESEQUENCEDSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4B980)
#define RPG_GAMECORE_USESEQUENCEDSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC4B990)
#define RPG_GAMECORE_USESEQUENCEDSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC4B8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSequencedSkill_TypeDefinitionIndex = 22436;

	class UseSequencedSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSequencedSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseSequencedSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
