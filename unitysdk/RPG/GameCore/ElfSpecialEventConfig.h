#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfSpecialEventSelect; }
namespace RPG::GameCore { class ElfSpecialEventWaveOrder; }

#define RPG_GAMECORE_ELFSPECIALEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D638A10)
#define RPG_GAMECORE_ELFSPECIALEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D638870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSpecialEventConfig_TypeDefinitionIndex = 18499;

	class ElfSpecialEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfSpecialEventSelect* SelectEvent; // 0x10
		::RPG::GameCore::ElfSpecialEventWaveOrder* WaveOrderEvent; // 0x18
		::RPG::GameCore::RestaurantNormalEventType NormalEvent; // 0x20
		::System::Boolean HasSuperEvent; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSpecialEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSpecialEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSPECIALEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
