#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsBodyPart; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPART_CTOR_OFFSET UNITYSDK_OFFSET(0x1D509680)
#define RPG_GAMECORE_BYISBODYPART_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D509C80)
#define RPG_GAMECORE_BYISBODYPART_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5099A0)
#define RPG_GAMECORE_BYISBODYPART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D509690)
#define RPG_GAMECORE_BYISBODYPART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D509530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPart_TypeDefinitionIndex = 23312;

	class ByIsBodyPart : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPart* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPART_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
