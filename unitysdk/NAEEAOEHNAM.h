#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NAEEAOEHNAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA95470)
#define NAEEAOEHNAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA954E0)
#define NAEEAOEHNAM_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBA95450)
#define NAEEAOEHNAM_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBA95430)
#define NAEEAOEHNAM_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0xBA95460)
#define NAEEAOEHNAM_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0xBA95440)

inline static constexpr unsigned int NAEEAOEHNAM_TypeDefinitionIndex = 53857;

	class NAEEAOEHNAM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
		::RPG::GameCore::GameEntity* OBGGPEHLPBG; // 0x20
		::System::Boolean GNIKNANDLNH; // 0x28
		::System::Boolean _LockDamageZero_k__BackingField; // 0x29
		::System::Boolean KFHFGGIGAKK; // 0x2A
		::System::Boolean _IsPropagateAttack_k__BackingField; // 0x2B
		::System::Boolean BPKFCCGIEPH; // 0x2C
		::System::Boolean LBAFIMAMNPL; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FixPoint HDKGKHCCEGI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_CTOR_OFFSET))(this);
		}

		::System::Boolean get_LockDamageZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_GET_LOCKDAMAGEZERO_OFFSET))(this);
		}

		::System::Void set_LockDamageZero(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_SET_LOCKDAMAGEZERO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPropagateAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_GET_ISPROPAGATEATTACK_OFFSET))(this);
		}

		::System::Void set_IsPropagateAttack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_SET_ISPROPAGATEATTACK_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEAOEHNAM_CLEAR_OFFSET))(this);
		}

	};
