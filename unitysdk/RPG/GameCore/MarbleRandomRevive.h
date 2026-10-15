#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleRandomRevive; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLERANDOMREVIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8454A0)
#define RPG_GAMECORE_MARBLERANDOMREVIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8454B0)
#define RPG_GAMECORE_MARBLERANDOMREVIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D845450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRandomRevive_TypeDefinitionIndex = 16857;

	class MarbleRandomRevive : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 ReviveTimes; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ReviveTimesDynamic; // 0x18
		::System::Single ReviveRate; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* ReviveRateDynamic; // 0x28
		::System::Int32 ReviveHp; // 0x30
		::System::Byte _padding2[0x4];
		::System::String* ReviveHpDynamic; // 0x38
		::System::Single ReviveMaxHPRatio; // 0x40
		::System::Byte _padding3[0x4];
		::System::String* ReviveMaxHPRatioDynamic; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRandomRevive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRandomRevive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleRandomRevive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleRandomRevive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMREVIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
