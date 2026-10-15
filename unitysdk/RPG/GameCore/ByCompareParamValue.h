#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareParamValue; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C65B0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C6850)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C6810)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C65C0)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C6570)

namespace RPG::GameCore
{
	class ByCompareParamValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Int32 ParamIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
