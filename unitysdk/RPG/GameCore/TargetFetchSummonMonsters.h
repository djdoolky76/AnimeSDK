#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchSummonMonsters; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38180)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB38210)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB381F0)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB38190)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSummonMonsters_TypeDefinitionIndex = 23942;

	class TargetFetchSummonMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSummonMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSummonMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
