#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchCurrentGroupNPCMonsters; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB619E0)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB61A70)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB61A50)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB619F0)
#define RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB61970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentGroupNPCMonsters_TypeDefinitionIndex = 23868;

	class TargetFetchCurrentGroupNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentGroupNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTGROUPNPCMONSTERS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
