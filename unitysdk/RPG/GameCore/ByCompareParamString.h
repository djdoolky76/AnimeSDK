#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareParamString; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4981C0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D498420)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4983E0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4981D0)
#define RPG_GAMECORE_BYCOMPAREPARAMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D498180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamString_TypeDefinitionIndex = 23537;

	class ByCompareParamString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CompareValue; // 0x20
		::System::Boolean IgnoreCase; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 ParamIndex; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareParamString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareParamString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
