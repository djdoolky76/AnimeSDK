#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByStatusCount; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSTATUSCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5373F0)
#define RPG_GAMECORE_BYSTATUSCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5376B0)
#define RPG_GAMECORE_BYSTATUSCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D537670)
#define RPG_GAMECORE_BYSTATUSCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D537400)
#define RPG_GAMECORE_BYSTATUSCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5373B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByStatusCount_TypeDefinitionIndex = 22559;

	class ByStatusCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EnumStatusType StatusType; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
