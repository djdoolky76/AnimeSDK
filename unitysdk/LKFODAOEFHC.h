#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LKFODAOEFHC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFD0B90)
#define LKFODAOEFHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0C10)
#define LKFODAOEFHC_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBFD0B70)
#define LKFODAOEFHC_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBFD0B50)
#define LKFODAOEFHC_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBFD0B80)
#define LKFODAOEFHC_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBFD0B60)

inline static constexpr unsigned int LKFODAOEFHC_TypeDefinitionIndex = 56153;

	class LKFODAOEFHC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OBGGPEHLPBG; // 0x10
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x20
		::System::Boolean KFHFGGIGAKK; // 0x28
		::System::Boolean LBAFIMAMNPL; // 0x29
		::System::Boolean _IsPropagateAttack_k__BackingField; // 0x2A
		::System::Boolean GNIKNANDLNH; // 0x2B
		::System::Boolean _LockDamageZero_k__BackingField; // 0x2C
		::System::Boolean BPKFCCGIEPH; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x30
		::RPG::GameCore::FixPoint GBCIHEMICFM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFODAOEFHC_CTOR_OFFSET))(this);
		}

		::System::Boolean get_LockDamageZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFODAOEFHC_GET_LOCKDAMAGEZERO_OFFSET))(this);
		}

		::System::Void set_LockDamageZero(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKFODAOEFHC_SET_LOCKDAMAGEZERO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPropagateAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFODAOEFHC_GET_ISPROPAGATEATTACK_OFFSET))(this);
		}

		::System::Void set_IsPropagateAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKFODAOEFHC_SET_ISPROPAGATEATTACK_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFODAOEFHC_CLEAR_OFFSET))(this);
		}

	};
