#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SwitchMascotAddPickupCount; }

#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB43260)
#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB43270)
#define RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB43230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotAddPickupCount_TypeDefinitionIndex = 21998;

	class SwitchMascotAddPickupCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AddCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotAddPickupCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotAddPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotAddPickupCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotAddPickupCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTADDPICKUPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
