#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class ByHasStanceWeakPreview; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FCB80)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FCED0)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FCE90)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FCB90)
#define RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FCB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasStanceWeakPreview_TypeDefinitionIndex = 22557;

	class ByHasStanceWeakPreview : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AttackDamageTypeConfig* WeakType; // 0x28
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x30
		::System::Boolean AnyTargetMatch; // 0x34
		::System::Boolean PreAddOnly; // 0x35
		::System::Boolean PreAddIgnoreWeaknessDuplicate; // 0x36
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasStanceWeakPreview* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasStanceWeakPreview*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSTANCEWEAKPREVIEW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
