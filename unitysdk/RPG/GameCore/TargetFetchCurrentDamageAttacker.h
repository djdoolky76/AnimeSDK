#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentDamageAttacker; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB61760)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61810)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB617D0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB61770)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB616D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageAttacker_TypeDefinitionIndex = 24009;

	class TargetFetchCurrentDamageAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentDamageAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentDamageAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEATTACKER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
