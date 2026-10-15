#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameSmartObjectConfig; }
namespace RPG::GameCore { class LittleGameSmartObjectSlotData; }

#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E61B0)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E61C0)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E6160)

namespace RPG::GameCore
{
	class LittleGameSmartObjectConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LittleGameSmartObjectType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LittleGameSmartObjectSlotData*>* Slots; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSmartObjectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSmartObjectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSmartObjectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSmartObjectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
