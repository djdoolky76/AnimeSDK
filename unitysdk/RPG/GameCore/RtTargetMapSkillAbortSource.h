#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6B8D0)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA6B980)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA6B940)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6B8E0)
#define RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6B840)

namespace RPG::GameCore
{
	class RtTargetMapSkillAbortSource : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillAbortSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLABORTSOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
