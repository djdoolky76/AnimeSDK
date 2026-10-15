#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Min; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC89CE0)
#define RPG_GAMECORE_VP_MIN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC89DA0)
#define RPG_GAMECORE_VP_MIN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC89D70)
#define RPG_GAMECORE_VP_MIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC89CF0)
#define RPG_GAMECORE_VP_MIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC89C40)

namespace RPG::GameCore
{
	class VP_Min : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
