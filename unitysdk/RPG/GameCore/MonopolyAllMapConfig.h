#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyAllMapConfig; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYALLMAPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89BE70)
#define RPG_GAMECORE_MONOPOLYALLMAPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89BD70)

namespace RPG::GameCore
{
	class MonopolyAllMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MonopolyMapConfig*>* MonopolyMapDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYALLMAPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyAllMapConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyAllMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYALLMAPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
