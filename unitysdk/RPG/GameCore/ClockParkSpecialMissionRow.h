#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkSpecialMissionRow; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596400)
#define RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D595BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkSpecialMissionRow_TypeDefinitionIndex = 11190;

	class ClockParkSpecialMissionRow : public ::System::Object
	{
	public:
		::System::String* SpecialMissionIconPath; // 0x10
		::System::String* SpecialMissionImgPath; // 0x18
		::System::UInt32 EventNum; // 0x20
		::System::UInt32 SpecialMissionMapInfo; // 0x24
		::System::UInt32 SpecialMissionUnlockItemID; // 0x28
		::System::UInt32 SpecialMissionGotoIDBefore; // 0x2C
		::System::UInt32 SpecialMissionID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EventName; // 0x38
		::System::UInt32 EventScript; // 0x48
		::System::UInt32 SpecialMissionGotoIDAfter; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkSpecialMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkSpecialMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSPECIALMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
