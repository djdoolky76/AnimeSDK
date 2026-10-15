#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_Random; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC81C50)
#define RPG_GAMECORE_VE_RANDOM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC81E70)
#define RPG_GAMECORE_VE_RANDOM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC81E40)
#define RPG_GAMECORE_VE_RANDOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC81C60)
#define RPG_GAMECORE_VE_RANDOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC81C20)

namespace RPG::GameCore
{
	class VE_Random : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x28
		::System::Boolean IsInt; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Random* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Random*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RANDOM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
