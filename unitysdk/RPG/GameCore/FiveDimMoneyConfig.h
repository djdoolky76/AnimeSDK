#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoneyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMONEYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9820)
#define RPG_GAMECORE_FIVEDIMMONEYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C9830)
#define RPG_GAMECORE_FIVEDIMMONEYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C97F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoneyConfig_TypeDefinitionIndex = 18557;

	class FiveDimMoneyConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMoney; // 0x10
		::System::Boolean NoPlaceholder; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* PlaceholderRIStateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoneyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoneyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoneyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMONEYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
