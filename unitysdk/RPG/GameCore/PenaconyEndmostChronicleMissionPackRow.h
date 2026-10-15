#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PenaconyEndmostChronicleMissionPackRow; }

#define RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F5030)
#define RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F4F20)

namespace RPG::GameCore
{
	class PenaconyEndmostChronicleMissionPackRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIdList; // 0x10
		::System::UInt32 MissionPack; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PenaconyEndmostChronicleMissionPackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PENACONYENDMOSTCHRONICLEMISSIONPACKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
