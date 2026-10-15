#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSkillTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSKILLTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3EDC0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3EEC0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3EE90)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3EDD0)
#define RPG_GAMECORE_TARGETMAPSKILLTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3ED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSkillTarget_TypeDefinitionIndex = 24025;

	class TargetMapSkillTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean LogErrorIfEmpty; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSkillTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSkillTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSKILLTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
