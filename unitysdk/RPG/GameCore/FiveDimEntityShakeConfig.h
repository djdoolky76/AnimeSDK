#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntityShakeConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E210)
#define RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68B7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityShakeConfig_TypeDefinitionIndex = 18749;

	class FiveDimEntityShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single Amplitude; // 0x14
		::System::Single Frequency; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityShakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityShakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYSHAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
