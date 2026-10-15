#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Billboard { class IBillboardTypeData; }
namespace System { class String; }
namespace System { class Tuple; }

#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC8822D0)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC882340)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0xC882260)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET UNITYSDK_OFFSET(0xC882240)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xC882280)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0xC882270)
#define RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET UNITYSDK_OFFSET(0xC882250)

namespace RPG::Client::Billboard
{
	class FiveDimSidePuzzleBillboardData : public ::System::Object
	{
	public:
		::System::Tuple* _FiveDimSidePuzzlePanelPaths_k__BackingField; // 0x10
		::System::Boolean _IsShowFiveDimSidePuzzleChest_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowFiveDimSidePuzzleChest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET))(this);
		}

		::System::Void set_IsShowFiveDimSidePuzzleChest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_ISSHOWFIVEDIMSIDEPUZZLECHEST_OFFSET))(this, a1);
		}

		::System::Tuple* get_FiveDimSidePuzzlePanelPaths()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_GET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this);
		}

		::System::Void set_FiveDimSidePuzzlePanelPaths(::System::Tuple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_SET_FIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this, a1);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_ISVALID_OFFSET))(this);
		}

		::RPG::Client::Billboard::IBillboardTypeData* Clone()
		{
			return ((::RPG::Client::Billboard::IBillboardTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_FIVEDIMSIDEPUZZLEBILLBOARDDATA_CLONE_OFFSET))(this);
		}

	};
}
