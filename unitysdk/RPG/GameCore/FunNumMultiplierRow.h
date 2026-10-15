#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FunNumMultiplierRow; }

#define RPG_GAMECORE_FUNNUMMULTIPLIERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5F00)
#define RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F5DC0)

namespace RPG::GameCore
{
	class FunNumMultiplierRow : public ::System::Object
	{
	public:
		::System::UInt32 FunNum; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Multiplier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FunNumMultiplierRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FunNumMultiplierRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
