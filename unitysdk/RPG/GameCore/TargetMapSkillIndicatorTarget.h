#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSkillIndicatorTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6C0B0)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6C140)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6C120)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6C0C0)
#define RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6C040)

namespace RPG::GameCore
{
	class TargetMapSkillIndicatorTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillIndicatorTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillIndicatorTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLINDICATORTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
