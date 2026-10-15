#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEventReceiverConfig; }
namespace RPG::GameCore { class FiveDimEventReceiverItem; }

#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E600)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68E620)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68E5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEventReceiverConfig_TypeDefinitionIndex = 18634;

	class FiveDimEventReceiverConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsEventReceiver; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::FiveDimEventReceiverItem*>* ReceiverItems; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
