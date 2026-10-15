#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveUniqueNameEffect; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D3840)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D3AE0)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D3AB0)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D3850)
#define RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D3810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveUniqueNameEffect_TypeDefinitionIndex = 20437;

	class ByHaveUniqueNameEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* EffectUniqueName; // 0x28
		::System::Boolean IncludeUnprepared; // 0x30
		::System::Boolean IncludeFadeOut; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveUniqueNameEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveUniqueNameEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEUNIQUENAMEEFFECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
