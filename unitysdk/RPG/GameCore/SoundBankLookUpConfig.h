#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EventLookUpConfig; }
namespace RPG::GameCore { class SoundBankLookUpConfig; }

#define RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC4460)
#define RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC4370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoundBankLookUpConfig_TypeDefinitionIndex = 16389;

	class SoundBankLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EventLookUpConfig*>* Events; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SoundBankLookUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SoundBankLookUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
