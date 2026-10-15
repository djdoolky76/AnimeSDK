#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDynamicValueDefined; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C3860)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C3A40)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C3A10)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C3870)
#define RPG_GAMECORE_BYDYNAMICVALUEDEFINED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C3830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDynamicValueDefined_TypeDefinitionIndex = 22900;

	class ByDynamicValueDefined : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDYNAMICVALUEDEFINED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
