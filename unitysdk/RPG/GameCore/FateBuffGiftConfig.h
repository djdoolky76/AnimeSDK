#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateBuffGiftConfig; }

#define RPG_GAMECORE_FATEBUFFGIFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AA10)
#define RPG_GAMECORE_FATEBUFFGIFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateBuffGiftConfig_TypeDefinitionIndex = 19253;

	class FateBuffGiftConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBUFFGIFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateBuffGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateBuffGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEBUFFGIFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
