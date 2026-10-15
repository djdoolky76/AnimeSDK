#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSkillActualAttacker; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E6C0)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3E750)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3E730)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3E6D0)
#define RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3E650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillActualAttacker_TypeDefinitionIndex = 23950;

	class TargetMapSkillActualAttacker : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillActualAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillActualAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLACTUALATTACKER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
