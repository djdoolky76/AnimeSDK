#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Sub; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_SUB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8A4E0)
#define RPG_GAMECORE_VP_SUB_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC8A5A0)
#define RPG_GAMECORE_VP_SUB_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC8A570)
#define RPG_GAMECORE_VP_SUB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC8A4F0)
#define RPG_GAMECORE_VP_SUB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8A440)

namespace RPG::GameCore
{
	class VP_Sub : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
