#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Div; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_DIV_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC89230)
#define RPG_GAMECORE_VP_DIV_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC892F0)
#define RPG_GAMECORE_VP_DIV_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC892C0)
#define RPG_GAMECORE_VP_DIV_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC89240)
#define RPG_GAMECORE_VP_DIV_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC89190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Div_TypeDefinitionIndex = 24050;

	class VP_Div : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
