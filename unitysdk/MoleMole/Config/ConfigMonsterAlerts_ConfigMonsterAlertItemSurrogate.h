#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNDIFMAINIM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE_TOCONFIG_OFFSET UNITYSDK_OFFSET(0x131E8070)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x131E7840)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x131E76C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate_TypeDefinitionIndex = 85197;

	class ConfigMonsterAlerts_ConfigMonsterAlertItemSurrogate : public ::System::Object
	{
	public:
		::System::Boolean HasOverrideBattleSlopAngle; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single OverrideBattleSlopAngle; // 0x14
		::System::Collections::Generic::List_1<::System::Object*>* ExtraAlertReduceSpeedByZoneTag; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* DetectionConfigs; // 0x20
		::System::Single AlertReduceSpeedForIdleState; // 0x28
		::System::Single AlertIncreaseOnHitForIdleState; // 0x2C
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single BulletExplodeDetectDistance; // 0x34
		::System::Single AlertIncreaseOnBulletExplode; // 0x38
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* AvatarEnemyAlertReduceSpeedsForEnterState; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* MonsterEnemyAlertReduceSpeedsForEnterState; // 0x48
		::System::Single AlertReduceSpeedsOnEnemyExitBattleAreaForEnterState; // 0x50
		::System::Byte _padding3[0x4];
		::System::String* AlertReduceSpeedsOnSelfExitBattleAreaForEnterState; // 0x58
		::System::Single AlertIncreaseSpeedForEnterState; // 0x60
		::System::Single AlertReduceSpeedOnSlopeForEnterState; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNDIFMAINIM* src)
		{
			return ((::System::Void(*)(::PVOID, ::PNDIFMAINIM*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE__CTOR_1_OFFSET))(this, src);
		}

		::PNDIFMAINIM* ToConfig()
		{
			return ((::PNDIFMAINIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTITEMSURROGATE_TOCONFIG_OFFSET))(this);
		}
	};
}
