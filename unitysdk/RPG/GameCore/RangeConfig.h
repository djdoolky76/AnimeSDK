#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RangeConfig; }

#define RPG_GAMECORE_RANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96E100)
#define RPG_GAMECORE_RANGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96DFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RangeConfig_TypeDefinitionIndex = 13072;

	class RangeConfig : public ::System::Object
	{
	public:
		::System::UInt32 Lower; // 0x10
		::System::UInt32 Upper; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANGECONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
