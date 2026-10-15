#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBorderPlatConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D685C10)
#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D685C20)
#define RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D685BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBorderPlatConfig_TypeDefinitionIndex = 18593;

	class FiveDimBorderPlatConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsBorderPlat; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* EffectPath; // 0x18
		::System::Single EffectActiveDistance; // 0x20
		::System::Single EffectFullDistance; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBorderPlatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBorderPlatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBorderPlatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBorderPlatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBORDERPLATCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
