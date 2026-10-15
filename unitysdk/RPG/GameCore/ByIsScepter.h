#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsScepter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSCEPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F3BA0)
#define RPG_GAMECORE_BYISSCEPTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F3D60)
#define RPG_GAMECORE_BYISSCEPTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F3D30)
#define RPG_GAMECORE_BYISSCEPTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F3BB0)
#define RPG_GAMECORE_BYISSCEPTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F3B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsScepter_TypeDefinitionIndex = 23108;

	class ByIsScepter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSCEPTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
