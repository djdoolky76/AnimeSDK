#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDanmuTrackGroup; }

#define RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B7F60)
#define RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7E20)

namespace RPG::GameCore
{
	class FiveDimDanmuTrackGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TrackGroupID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDanmuTrackGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDanmuTrackGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDANMUTRACKGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
