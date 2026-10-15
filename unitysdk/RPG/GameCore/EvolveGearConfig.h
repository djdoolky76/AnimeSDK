#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EvolveGearConfig; }

#define RPG_GAMECORE_EVOLVEGEARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68AE30)
#define RPG_GAMECORE_EVOLVEGEARCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D68AD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveGearConfig_TypeDefinitionIndex = 13073;

	class EvolveGearConfig : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 GearID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveGearConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveGearConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
