#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Exp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_EXP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC89450)
#define RPG_GAMECORE_VP_EXP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC894E0)
#define RPG_GAMECORE_VP_EXP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC894C0)
#define RPG_GAMECORE_VP_EXP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC89460)
#define RPG_GAMECORE_VP_EXP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC893E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Exp_TypeDefinitionIndex = 24051;

	class VP_Exp : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Exp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Exp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_EXP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
