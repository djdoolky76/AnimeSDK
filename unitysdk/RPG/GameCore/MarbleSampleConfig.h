#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSampleConfig; }

#define RPG_GAMECORE_MARBLESAMPLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8185B0)
#define RPG_GAMECORE_MARBLESAMPLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8120D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSampleConfig_TypeDefinitionIndex = 16911;

	class MarbleSampleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 EnemySampleCount; // 0x14
		::System::Int32 AllySampleCount; // 0x18
		::System::Boolean IsAverageAngle; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESAMPLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSampleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSampleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESAMPLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
