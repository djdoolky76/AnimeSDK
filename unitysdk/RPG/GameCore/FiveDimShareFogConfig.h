#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimShareFogConfig; }

#define RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ADF20)
#define RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ADEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShareFogConfig_TypeDefinitionIndex = 18529;

	class FiveDimShareFogConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimShareFogConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimShareFogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
