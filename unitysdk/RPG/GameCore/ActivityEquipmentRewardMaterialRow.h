#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityEquipmentRewardMaterialRow; }

#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3275B0)
#define RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3273D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityEquipmentRewardMaterialRow_TypeDefinitionIndex = 11396;

	class ActivityEquipmentRewardMaterialRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 GotoID; // 0x14
		::System::UInt32 RealProgress; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ProgressText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityEquipmentRewardMaterialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEQUIPMENTREWARDMATERIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
