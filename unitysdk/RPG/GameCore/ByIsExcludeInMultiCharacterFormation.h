#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D513390)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D513550)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D513520)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5133A0)
#define RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D513360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsExcludeInMultiCharacterFormation_TypeDefinitionIndex = 22645;

	class ByIsExcludeInMultiCharacterFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEXCLUDEINMULTICHARACTERFORMATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
