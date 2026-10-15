#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Max; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MAX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC89A90)
#define RPG_GAMECORE_VP_MAX_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC89B50)
#define RPG_GAMECORE_VP_MAX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC89B20)
#define RPG_GAMECORE_VP_MAX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC89AA0)
#define RPG_GAMECORE_VP_MAX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC899F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Max_TypeDefinitionIndex = 24056;

	class VP_Max : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
