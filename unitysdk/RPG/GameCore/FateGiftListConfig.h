#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateGiftListConfig; }

#define RPG_GAMECORE_FATEGIFTLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69AF30)
#define RPG_GAMECORE_FATEGIFTLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69AEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateGiftListConfig_TypeDefinitionIndex = 19254;

	class FateGiftListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEGIFTLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateGiftListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateGiftListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEGIFTLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
