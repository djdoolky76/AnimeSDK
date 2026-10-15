#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAidAttacker; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5EDB0)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5EE60)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5EE20)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5EDC0)
#define RPG_GAMECORE_TARGETFETCHAIDATTACKER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5ED20)

namespace RPG::GameCore
{
	class TargetFetchAidAttacker : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAidAttacker* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAidAttacker*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIDATTACKER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
