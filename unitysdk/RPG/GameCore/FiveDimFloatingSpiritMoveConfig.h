#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFloatingSpiritMoveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BE360)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BE380)
#define RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BE310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFloatingSpiritMoveConfig_TypeDefinitionIndex = 16692;

	class FiveDimFloatingSpiritMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Boolean EnableBeatBackPlayer; // 0x4C
		::System::Byte _padding0[0x3];
		::System::String* BeatBackPlayerEvent; // 0x50
		::System::Boolean HasHitStop; // 0x58
		::System::Byte _padding1[0x7];
		::System::String* OnHitEvent; // 0x60
		::System::String* OnRecoverEvent; // 0x68
		::System::Single HitRecoverDuration; // 0x70
		::System::Byte _padding2[0x4];
		::System::String* HitWithInvinciblePlayerEvent; // 0x78
		::System::String* HitWithInvinciblePlayerEffectPath; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFloatingSpiritMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLOATINGSPIRITMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
