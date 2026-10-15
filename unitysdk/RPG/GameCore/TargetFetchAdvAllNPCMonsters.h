#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvAllNPCMonsters; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5ACA0)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5AD30)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5AD10)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5ACB0)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5AC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAllNPCMonsters_TypeDefinitionIndex = 23866;

	class TargetFetchAdvAllNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
