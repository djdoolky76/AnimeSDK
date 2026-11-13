#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D184D10)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0__REBUILDWAITTRACKEQUIPID2COUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1D184E90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0__REBUILDWAITTRACKEQUIPID2COUNT_B__1_OFFSET UNITYSDK_OFFSET(0x1D184F40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrack___c__DisplayClass89_0_TypeDefinitionIndex = 67087;

	class GridFightEquipTrack___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseEquipID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RebuildWaitTrackEquipID2Count_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0__REBUILDWAITTRACKEQUIPID2COUNT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RebuildWaitTrackEquipID2Count_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS89_0__REBUILDWAITTRACKEQUIPID2COUNT_B__1_OFFSET))(this, a1);
		}

	};
}
