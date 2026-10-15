#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSkillPointEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6C220)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6C320)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6C2F0)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6C230)
#define RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6C150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillPointEntity_TypeDefinitionIndex = 23949;

	class TargetMapSkillPointEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Nullable; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillPointEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillPointEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLPOINTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
