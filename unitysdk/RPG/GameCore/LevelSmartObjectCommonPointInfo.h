#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }

#define RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CDCF0)
#define RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CDAF0)

namespace RPG::GameCore
{
	class LevelSmartObjectCommonPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single PosX; // 0x14
		::System::Single PosY; // 0x18
		::System::Single PosZ; // 0x1C
		::System::Single RotY; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSmartObjectCommonPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSmartObjectCommonPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTCOMMONPOINTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
