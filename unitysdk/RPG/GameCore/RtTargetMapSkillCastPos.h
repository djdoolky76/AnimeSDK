#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7E2A0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC7E350)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC7E310)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC7E2B0)
#define RPG_GAMECORE_RTTARGETMAPSKILLCASTPOS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC7E210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillCastPos_TypeDefinitionIndex = 24708;

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
