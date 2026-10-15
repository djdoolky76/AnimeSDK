#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkEffectRow; }

#define RPG_GAMECORE_CLOCKPARKEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BE070)
#define RPG_GAMECORE_CLOCKPARKEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5BDC70)

namespace RPG::GameCore
{
	class ClockParkEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlayCardEffectDescParamList; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::System::Int32 Param2; // 0x20
		::System::UInt32 EffectID; // 0x24
		::RPG::GameCore::ClockParkEffectType EffectType; // 0x28
		::System::Int32 Param3; // 0x2C
		::RPG::Client::TextID PlayCardEffectDesc; // 0x30
		::System::Int32 DiceParam; // 0x40
		::System::Int32 Param1; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
