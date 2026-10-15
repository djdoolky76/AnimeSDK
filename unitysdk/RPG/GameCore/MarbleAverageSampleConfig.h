#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAverageSampleConfig; }

#define RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D837410)
#define RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8372A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAverageSampleConfig_TypeDefinitionIndex = 16912;

	class MarbleAverageSampleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 SampleCount; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAverageSampleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAverageSampleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAVERAGESAMPLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
