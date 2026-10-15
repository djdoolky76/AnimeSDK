#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierMonsterHPMarkConfig; }

#define RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88E700)
#define RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88E5C0)

namespace RPG::GameCore
{
	class ModifierMonsterHPMarkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ForceKillMarkType Type; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* MarkRatio; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierMonsterHPMarkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierMonsterHPMarkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERMONSTERHPMARKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
