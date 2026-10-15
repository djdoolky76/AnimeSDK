#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCharacterNumber; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472B50)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D472ED0)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D472E90)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D472B60)
#define RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D472B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterNumber_TypeDefinitionIndex = 23002;

	class ByCompareCharacterNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean AliveOnly; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* CompareNumber; // 0x40
		::System::Boolean IgnorePuppet; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERNUMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
