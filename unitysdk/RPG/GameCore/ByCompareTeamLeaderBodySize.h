#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTeamLeaderBodySize; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B3890)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B3A50)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B3A20)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B38A0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B3860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderBodySize_TypeDefinitionIndex = 21105;

	class ByCompareTeamLeaderBodySize : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
