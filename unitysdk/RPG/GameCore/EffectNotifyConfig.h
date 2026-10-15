#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTNOTIFYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D603780)
#define RPG_GAMECORE_EFFECTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6034F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectNotifyConfig_TypeDefinitionIndex = 16962;

	class EffectNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::RPG::MVector3 PositionOffset; // 0x18
		::RPG::MVector3 RotationOffset; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTNOTIFYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectNotifyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectNotifyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTNOTIFYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
