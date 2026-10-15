#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class ByHasStanceWeak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSTANCEWEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC140)
#define RPG_GAMECORE_BYHASSTANCEWEAK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FC420)
#define RPG_GAMECORE_BYHASSTANCEWEAK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FC3C0)
#define RPG_GAMECORE_BYHASSTANCEWEAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FC180)
#define RPG_GAMECORE_BYHASSTANCEWEAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FC0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasStanceWeak_TypeDefinitionIndex = 22556;

	class ByHasStanceWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x28
		::System::Boolean OnlyDefault; // 0x30
		::System::Byte _padding0[0x3];
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeak* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
