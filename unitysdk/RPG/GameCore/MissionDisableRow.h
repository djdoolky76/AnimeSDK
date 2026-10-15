#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionDisableRow; }

#define RPG_GAMECORE_MISSIONDISABLEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D858B70)
#define RPG_GAMECORE_MISSIONDISABLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D858930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionDisableRow_TypeDefinitionIndex = 14160;

	class MissionDisableRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CompensateItemList; // 0x10
		::Il2CppArray<::System::UInt32>* RecycleItemList; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDListClientDisplay; // 0x20
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x28
		::System::UInt32 SubMissionID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONDISABLEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionDisableRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionDisableRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONDISABLEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
