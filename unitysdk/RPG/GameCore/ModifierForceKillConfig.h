#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/RPG/GameCore/ForceKillValueType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierForceKillConfig; }

#define RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88E3E0)
#define RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88E180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierForceKillConfig_TypeDefinitionIndex = 18247;

	class ModifierForceKillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ForceKillValueType Type; // 0x10
		::RPG::GameCore::ForceKillShowType ShowType; // 0x14
		::RPG::GameCore::ForceKillMarkType MarkType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ForceKillRatio; // 0x20
		::RPG::GameCore::DynamicFloat* ForceKillValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierForceKillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierForceKillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
