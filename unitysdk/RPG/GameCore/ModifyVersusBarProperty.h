#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarEffectType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/RPG/GameCore/VersusBarReasonTipType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifyVersusBarProperty; }

#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86DCF0)
#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D86DD00)
#define RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D86DCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyVersusBarProperty_TypeDefinitionIndex = 23147;

	class ModifyVersusBarProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::RPG::GameCore::VersusBarPropertyType ValueType; // 0x1C
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean ShowReasonTip; // 0x30
		::System::Byte _padding1[0x7];
		::RPG::Client::TextID ReasonTipText; // 0x38
		::RPG::GameCore::VersusBarReasonTipType ReasonChangeLevel; // 0x48
		::RPG::GameCore::VersusBarEffectType BarChangeLevel; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyVersusBarProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyVersusBarProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifyVersusBarProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifyVersusBarProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYVERSUSBARPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
