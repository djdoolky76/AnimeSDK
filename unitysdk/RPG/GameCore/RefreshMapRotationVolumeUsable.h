#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RefreshMapRotationVolumeUsable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D948EC0)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D948ED0)
#define RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D948E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMapRotationVolumeUsable_TypeDefinitionIndex = 20922;

	class RefreshMapRotationVolumeUsable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* UsableSlot; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RefreshMapRotationVolumeUsable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RefreshMapRotationVolumeUsable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAPROTATIONVOLUMEUSABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
