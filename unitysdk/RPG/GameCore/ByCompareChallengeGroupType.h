#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareChallengeGroupType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D470D40)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D470F00)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D470ED0)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D470D50)
#define RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D470D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareChallengeGroupType_TypeDefinitionIndex = 23443;

	class ByCompareChallengeGroupType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ChallengeGroupType CurrentStageType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareChallengeGroupType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareChallengeGroupType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHALLENGEGROUPTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
