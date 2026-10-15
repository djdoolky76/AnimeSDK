#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FetchAdvMonsterData; }
namespace RPG::GameCore { class TargetFetchAdvMonster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5B710)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5B860)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5B810)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5B720)
#define RPG_GAMECORE_TARGETFETCHADVMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5B6C0)

namespace RPG::GameCore
{
	class TargetFetchAdvMonster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::Il2CppArray<::RPG::GameCore::FetchAdvMonsterData*>* MultiGroupFetch; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvMonster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVMONSTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
