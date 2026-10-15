#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class VE_Value; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_VALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC88200)
#define RPG_GAMECORE_VE_VALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC883E0)
#define RPG_GAMECORE_VE_VALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC883B0)
#define RPG_GAMECORE_VE_VALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC88210)
#define RPG_GAMECORE_VE_VALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC881D0)

namespace RPG::GameCore
{
	class VE_Value : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_Value* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_Value*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_VALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
