#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }
namespace RPG::GameCore { class FateTraitConfig; }

#define RPG_GAMECORE_FATETRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F4E0)
#define RPG_GAMECORE_FATETRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69F430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateTraitConfig_TypeDefinitionIndex = 16622;

	class FateTraitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATETRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
