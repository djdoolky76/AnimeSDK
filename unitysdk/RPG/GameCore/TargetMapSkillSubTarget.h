#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSkillSubTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x206F6870)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206F6900)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206F68E0)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206F6880)
#define RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206F6800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillSubTarget_TypeDefinitionIndex = 24485;

	class TargetMapSkillSubTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillSubTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillSubTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLSUBTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
