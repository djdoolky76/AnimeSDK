#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6BA20)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA6BAD0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA6BA90)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6BA30)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6B990)

namespace RPG::GameCore
{
	class RtTargetMapSkillCastPos : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillCastPos* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
