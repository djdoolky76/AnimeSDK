#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureDyingStyle.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureDyingParam; }

#define RPG_GAMECORE_ADVENTUREDYINGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7970)
#define RPG_GAMECORE_ADVENTUREDYINGPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C7860)

namespace RPG::GameCore
{
	class AdventureDyingParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureDyingStyle DyingStyle; // 0x10
		::System::Single FreezeDuration; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREDYINGPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureDyingParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureDyingParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREDYINGPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
