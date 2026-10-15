#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Clamp; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_CLAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88AF0)
#define RPG_GAMECORE_VP_CLAMP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC88BE0)
#define RPG_GAMECORE_VP_CLAMP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC88BB0)
#define RPG_GAMECORE_VP_CLAMP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC88B00)
#define RPG_GAMECORE_VP_CLAMP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC88AC0)

namespace RPG::GameCore
{
	class VP_Clamp : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
