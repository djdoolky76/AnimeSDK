#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VP_Mul; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MUL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5C680)
#define RPG_GAMECORE_VP_MUL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC5C740)
#define RPG_GAMECORE_VP_MUL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC5C710)
#define RPG_GAMECORE_VP_MUL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5C690)
#define RPG_GAMECORE_VP_MUL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Mul_TypeDefinitionIndex = 24049;

	class VP_Mul : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
