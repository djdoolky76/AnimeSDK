#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Pow; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_POW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5C8D0)
#define RPG_GAMECORE_VP_POW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC5C990)
#define RPG_GAMECORE_VP_POW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5C960)
#define RPG_GAMECORE_VP_POW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5C8E0)
#define RPG_GAMECORE_VP_POW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5C830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Pow_TypeDefinitionIndex = 24052;

	class VP_Pow : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
