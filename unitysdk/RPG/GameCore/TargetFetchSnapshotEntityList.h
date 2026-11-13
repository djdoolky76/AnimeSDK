#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchSnapshotEntityList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x206EFC10)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206EFCA0)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206EFC80)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206EFC20)
#define RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206EFBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchSnapshotEntityList_TypeDefinitionIndex = 24469;

	class TargetFetchSnapshotEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchSnapshotEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchSnapshotEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHSNAPSHOTENTITYLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
