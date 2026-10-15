#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCheckWindowPermCodes; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3629B0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D362C30)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D362C00)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3629C0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D362980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowPermCodes_TypeDefinitionIndex = 21289;

	class AdvByCheckWindowPermCodes : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::Il2CppArray<::System::Int32>* PermCodes; // 0x30
		::Il2CppArray<::System::Boolean>* MatchMask; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
