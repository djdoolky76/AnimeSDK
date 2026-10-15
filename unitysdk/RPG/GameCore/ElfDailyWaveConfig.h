#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDailyWaveConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELFDAILYWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607360)
#define RPG_GAMECORE_ELFDAILYWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D607260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDailyWaveConfig_TypeDefinitionIndex = 18479;

	class ElfDailyWaveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ElfWaveCustomerConfig*>* DailyWaveMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDAILYWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDailyWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDailyWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDAILYWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
