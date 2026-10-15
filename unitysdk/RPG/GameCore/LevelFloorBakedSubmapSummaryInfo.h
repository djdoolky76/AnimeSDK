#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelFloorBakedSubmapInfo; }
namespace RPG::GameCore { class LevelFloorBakedSubmapSummaryInfo; }

#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ACD20)
#define RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ACBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelFloorBakedSubmapSummaryInfo_TypeDefinitionIndex = 17165;

	class LevelFloorBakedSubmapSummaryInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::Il2CppArray<::RPG::GameCore::LevelFloorBakedSubmapInfo*>* SubmapList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelFloorBakedSubmapSummaryInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELFLOORBAKEDSUBMAPSUMMARYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
