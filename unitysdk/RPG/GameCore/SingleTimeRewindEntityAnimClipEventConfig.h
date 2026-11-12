#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SingleTimeRewindEntityAnimEventBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleTimeRewindEntityAnimClipEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFD8E0)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECFD8F0)
#define RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECFD890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleTimeRewindEntityAnimClipEventConfig_TypeDefinitionIndex = 16766;

	class SingleTimeRewindEntityAnimClipEventConfig : public ::RPG::GameCore::SingleTimeRewindEntityAnimEventBaseConfig
	{
	public:
		::System::String* AnimClipName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLETIMEREWINDENTITYANIMCLIPEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
