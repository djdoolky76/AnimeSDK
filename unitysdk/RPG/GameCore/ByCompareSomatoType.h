#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSomatoType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D5E20)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D6030)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D6000)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D5E30)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D5DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSomatoType_TypeDefinitionIndex = 23734;

	class ByCompareSomatoType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::Il2CppArray<::RPG::GameCore::CharacterSomatoType>* SomatoTypes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
