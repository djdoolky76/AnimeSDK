#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SmartObjectPlayMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSmartObjectPointInfo; }
namespace RPG::GameCore { class LevelSmartObjectSlotInfo; }

#define RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A05F0)
#define RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A04D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectSlotInfo_TypeDefinitionIndex = 17370;

	class LevelSmartObjectSlotInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SmartObjectPlayMode PlayeMode; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectPointInfo*>* PointList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSmartObjectSlotInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSmartObjectSlotInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTSLOTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
