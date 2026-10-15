#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TargetFetchPuzzleEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchPuzzleEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB37BB0)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB37C90)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB37C60)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB37BC0)
#define RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB37B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPuzzleEntity_TypeDefinitionIndex = 23894;

	class TargetFetchPuzzleEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetFetchPuzzleEntityType Type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPuzzleEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPuzzleEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPUZZLEENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
