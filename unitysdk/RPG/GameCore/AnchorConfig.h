#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnchorConfig; }

#define RPG_GAMECORE_ANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C4910)
#define RPG_GAMECORE_ANCHORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C48D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorConfig_TypeDefinitionIndex = 10630;

	class AnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnchorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnchorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
