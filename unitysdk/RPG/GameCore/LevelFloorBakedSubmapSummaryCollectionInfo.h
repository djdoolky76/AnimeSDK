#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelFloorBakedSubmapSummaryCollectionInfo; }
namespace RPG::GameCore { class LevelFloorBakedSubmapSummaryInfo; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ACBB0)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ACAF0)

namespace RPG::GameCore
{
	class LevelFloorBakedSubmapSummaryCollectionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*>* FloorSummaryList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelFloorBakedSubmapSummaryCollectionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelFloorBakedSubmapSummaryCollectionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYCOLLECTIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
