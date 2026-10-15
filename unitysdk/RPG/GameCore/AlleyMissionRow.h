#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyMissionRow; }

#define RPG_GAMECORE_ALLEYMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BAFF0)
#define RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMissionRow_TypeDefinitionIndex = 12608;

	class AlleyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventEffect; // 0x10
		::System::UInt32 NextMission; // 0x18
		::System::Boolean IsUrgent; // 0x1C
		::System::Boolean IsMissionTrack; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 MissionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
