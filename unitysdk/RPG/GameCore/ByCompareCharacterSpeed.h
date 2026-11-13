#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCharacterSpeed; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7AE80)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DF7B1B0)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF7B150)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF7AEC0)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF7AE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterSpeed_TypeDefinitionIndex = 20589;

	class ByCompareCharacterSpeed : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean RealSpeed; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
