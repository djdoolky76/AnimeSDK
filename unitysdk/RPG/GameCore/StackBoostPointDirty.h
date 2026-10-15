#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StackBoostPointDirty; }

#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB02A00)
#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB02A10)
#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB029D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackBoostPointDirty_TypeDefinitionIndex = 23554;

	class StackBoostPointDirty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DirtyCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackBoostPointDirty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackBoostPointDirty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StackBoostPointDirty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StackBoostPointDirty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
