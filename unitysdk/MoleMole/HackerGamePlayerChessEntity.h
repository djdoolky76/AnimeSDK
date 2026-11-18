#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameChessEntity.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"

class BMMBLECDPPE;
class FBAMLABJMKF;
class KIHFMFLBPHM;

#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x12B4AAD0)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x12B4ADE0)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ONEFFECTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x12B4AFE0)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x12B4AD40)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_TAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x12B4A900)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4B1A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGamePlayerChessEntity_TypeDefinitionIndex = 44502;

	class HackerGamePlayerChessEntity : public ::MoleMole::HackerGameChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY__CTOR_OFFSET))(this);
		}

		::System::Boolean TakeDamage(::MoleMole::HackerGameDamageData data, ::System::Int32 damageIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_TAKEDAMAGE_OFFSET))(this, data, damageIn);
		}

		::System::Boolean AttachEffect(::MoleMole::HackerGameDamageData data, ::KIHFMFLBPHM* statusEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::KIHFMFLBPHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ATTACHEFFECT_OFFSET))(this, data, statusEffect);
		}

		::System::Void SetEffect(::MoleMole::StatusEffectType type, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_SETEFFECT_OFFSET))(this, type, value);
		}

		::System::Void Init(::FBAMLABJMKF* chessboard, ::System::UInt32 entityID, ::BMMBLECDPPE* damageable)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::System::UInt32, ::BMMBLECDPPE*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_INIT_OFFSET))(this, chessboard, entityID, damageable);
		}

		::System::Void OnEffectTypeChanged(::MoleMole::StatusEffectType pre, ::MoleMole::StatusEffectType cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ONEFFECTTYPECHANGED_OFFSET))(this, pre, cur);
		}
	};
}
