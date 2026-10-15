#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimChildPresetConfig; }
namespace RPG::GameCore { class FiveDimChildPresetItemConfig; }

#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B4A70)
#define RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B49B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChildPresetConfig_TypeDefinitionIndex = 16719;

	class FiveDimChildPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimChildPresetItemConfig*>* ChildPresetList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChildPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChildPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
