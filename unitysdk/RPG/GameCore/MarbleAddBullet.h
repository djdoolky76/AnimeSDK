#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddBullet; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEADDBULLET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D836980)
#define RPG_GAMECORE_MARBLEADDBULLET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D836990)
#define RPG_GAMECORE_MARBLEADDBULLET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddBullet_TypeDefinitionIndex = 16847;

	class MarbleAddBullet : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 EffectId; // 0x10
		::System::Single MinTime; // 0x14
		::System::String* MinTimeDynamic; // 0x18
		::System::Single MaxTime; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* MaxTimeDynamic; // 0x28
		::System::Int32 Damage; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* DamageDynamic; // 0x38
		::System::Single DamageAttackFactor; // 0x40
		::System::Byte _padding2[0x4];
		::System::String* DamageAttackFactorDynamic; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddBullet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddBullet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBULLET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
