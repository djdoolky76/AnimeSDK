#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocationConfig; }
namespace System { class Object; }

#define RPG_GAMECORE_LOCATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EF340)
#define RPG_GAMECORE_LOCATIONCONFIG_FEPNMNINDPB_OFFSET UNITYSDK_OFFSET(0x1D7EF380)
#define RPG_GAMECORE_LOCATIONCONFIG_JKBPFEMKNHL_OFFSET UNITYSDK_OFFSET(0x1D7EF350)
#define RPG_GAMECORE_LOCATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EEB90)
#define RPG_GAMECORE_LOCATIONCONFIG_SHAREBYCOPY_OFFSET UNITYSDK_OFFSET(0x1D7EF3A0)

namespace RPG::GameCore
{
	class LocationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Width; // 0x10
		::System::Single WidthMin; // 0x14
		::System::Single LocalZOffsetFixed; // 0x18
		::System::Single LocalZOffsetMin; // 0x1C
		::System::Single LocalZOffsetMax; // 0x20
		::System::Single CentralXOffset; // 0x24
		::System::Single TeamDistanceOffset; // 0x28
		::System::Boolean DisableEnemyFaceTo; // 0x2C
		::System::Boolean DisableFaceToActionEntity; // 0x2D
		::System::Boolean RotateWithOtherTeammate; // 0x2E
		::System::Byte _padding0[0x1];
		::RPG::MVector3 RootOffset; // 0x30
		::System::Boolean RotateByRootOffset; // 0x3C
		::System::Boolean AlignTeamCenter; // 0x3D
		::System::Byte _padding1[0x2];
		::RPG::MVector3 FormationFollowOffset; // 0x40
		::System::Single FormationFollowAngleOffset; // 0x4C
		::System::Single CloseToSummonerRatio; // 0x50
		::System::Boolean PreferLowerFormationIndex; // 0x54
		::System::Byte _padding2[0x3];
		::RPG::MVector3 PuppetCustomFormationOffset; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LocationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LocationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Single JKBPFEMKNHL(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_JKBPFEMKNHL_OFFSET))(this, a1);
		}

		::System::Single FEPNMNINDPB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_FEPNMNINDPB_OFFSET))(this);
		}

		::System::Object* ShareByCopy()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCATIONCONFIG_SHAREBYCOPY_OFFSET))(this);
		}

	};
}
