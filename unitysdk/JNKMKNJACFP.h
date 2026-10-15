#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define JNKMKNJACFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB289A80)
#define JNKMKNJACFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB289B10)
#define JNKMKNJACFP_HCJHFBEPHLL_OFFSET UNITYSDK_OFFSET(0xB28A0F0)
#define JNKMKNJACFP_KALNFOPBFCH_OFFSET UNITYSDK_OFFSET(0xB289C60)
#define JNKMKNJACFP_KGGLNAHKECB_OFFSET UNITYSDK_OFFSET(0xB28A1A0)
#define JNKMKNJACFP_PDHBABIFIML_OFFSET UNITYSDK_OFFSET(0xB289BD0)
#define JNKMKNJACFP_PIEBLMHAHDD_OFFSET UNITYSDK_OFFSET(0xB28A090)

inline static constexpr unsigned int JNKMKNJACFP_TypeDefinitionIndex = 72209;

	class JNKMKNJACFP : public ::System::Object
	{
	public:
		// static const ::System::Object BAEJAHFJHJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMKNJACFP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMKNJACFP_DISPOSE_OFFSET))(this);
		}

		::System::Void PDHBABIFIML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNKMKNJACFP_PDHBABIFIML_OFFSET))(this, a1);
		}

		::System::Void KALNFOPBFCH(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + JNKMKNJACFP_KALNFOPBFCH_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* HCJHFBEPHLL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNKMKNJACFP_HCJHFBEPHLL_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleInstance* KGGLNAHKECB()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMKNJACFP_KGGLNAHKECB_OFFSET))(this);
		}

		::RPG::GameCore::EntityManager* PIEBLMHAHDD()
		{
			return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMKNJACFP_PIEBLMHAHDD_OFFSET))(this);
		}

	};
