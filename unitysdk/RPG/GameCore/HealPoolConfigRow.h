#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HealPoolConfigRow; }

#define RPG_GAMECORE_HEALPOOLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D756590)
#define RPG_GAMECORE_HEALPOOLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D756420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealPoolConfigRow_TypeDefinitionIndex = 13715;

	class HealPoolConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RecoverTime; // 0x10
		::System::UInt32 MaxHealPool; // 0x14
		::System::UInt32 PlayerLevel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALPOOLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HealPoolConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HealPoolConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALPOOLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
