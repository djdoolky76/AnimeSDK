#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtTargetMapSkillTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3E2D0)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA3E380)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA3E340)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA3E2E0)
#define RPG_GAMECORE_RTTARGETMAPSKILLTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA3E240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapSkillTarget_TypeDefinitionIndex = 24248;

	class RtTargetMapSkillTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPSKILLTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
