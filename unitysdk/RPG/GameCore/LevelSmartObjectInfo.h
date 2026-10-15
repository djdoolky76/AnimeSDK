#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace RPG::GameCore { class LevelSmartObjectSlotInfo; }

#define RPG_GAMECORE_LEVELSMARTOBJECTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C2E00)
#define RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7C2E10)
#define RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CDD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSmartObjectInfo_TypeDefinitionIndex = 17372;

	class LevelSmartObjectInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectSlotInfo*>* SlotList; // 0x38
		::Il2CppArray<::RPG::GameCore::LevelSmartObjectCommonPointInfo*>* CommonPointList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSmartObjectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSmartObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelSmartObjectInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelSmartObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSMARTOBJECTINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
