#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchMonsterByID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63940)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63A10)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB639E0)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB63950)
#define RPG_GAMECORE_TARGETFETCHMONSTERBYID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB638A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMonsterByID_TypeDefinitionIndex = 23961;

	class TargetFetchMonsterByID : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMonsterByID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMonsterByID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMONSTERBYID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
