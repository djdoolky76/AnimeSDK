#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimInteractEmitterConfig; }
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D696ED0)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D696EE0)
#define RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D696EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimInteractEmitterConfig_TypeDefinitionIndex = 18561;

	class FiveDimInteractEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsInteractEmitter; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x18
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* InteractButtonConfigList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimInteractEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimInteractEmitterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimInteractEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMINTERACTEMITTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
