#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMapRotationVolumeInteractEnabled; }

#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9110)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9120)
#define RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB90E0)

namespace RPG::GameCore
{
	class SetMapRotationVolumeInteractEnabled : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMapRotationVolumeInteractEnabled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAPROTATIONVOLUMEINTERACTENABLED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
