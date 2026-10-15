#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Add; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_ADD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88910)
#define RPG_GAMECORE_VP_ADD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC889D0)
#define RPG_GAMECORE_VP_ADD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC889A0)
#define RPG_GAMECORE_VP_ADD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC88920)
#define RPG_GAMECORE_VP_ADD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC88870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Add_TypeDefinitionIndex = 24047;

	class VP_Add : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
