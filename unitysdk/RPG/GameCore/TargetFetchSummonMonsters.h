#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchSummonMonsters; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x206EFE30)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EFEC0)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EFEA0)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EFE40)
#define RPG_GAMECORE_TARGETFETCHSUMMONMONSTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EFDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSummonMonsters_TypeDefinitionIndex = 24400;

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
