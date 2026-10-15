#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EPPIFJBJJOO.h"
class LHHEGNEBMLN;
class NPKNJAMIKEA;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define NPKNJAMIKEA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD0E750)
#define NPKNJAMIKEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0E730)
#define NPKNJAMIKEA_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xBD0E740)
#define NPKNJAMIKEA_MGCHGOBPKCA_OFFSET UNITYSDK_OFFSET(0xBD0ED70)
#define NPKNJAMIKEA_MPKLOIGJIPG_OFFSET UNITYSDK_OFFSET(0xBD0EBA0)
#define NPKNJAMIKEA_NEAOBDKMICI_OFFSET UNITYSDK_OFFSET(0xBD0EBB0)
#define NPKNJAMIKEA_PKBEIHIGMHH_OFFSET UNITYSDK_OFFSET(0xBD0EA90)
#define NPKNJAMIKEA_PKMHODPACHF_OFFSET UNITYSDK_OFFSET(0xBD0E7E0)

inline static constexpr unsigned int NPKNJAMIKEA_TypeDefinitionIndex = 56889;

	class NPKNJAMIKEA : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleEventDataComponent* _Owner_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventDataComponent* get_Owner()
		{
			return ((::RPG::GameCore::BattleEventDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_GET_OWNER_OFFSET))(this);
		}

		static ::NPKNJAMIKEA* BPLPBPMEODA(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::NPKNJAMIKEA*(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PKMHODPACHF(::LHHEGNEBMLN* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHHEGNEBMLN*, ::System::Object*))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_PKMHODPACHF_OFFSET))(this, a1, a2);
		}

		::System::Boolean PKBEIHIGMHH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_PKBEIHIGMHH_OFFSET))(this, a1);
		}

		::System::Boolean MPKLOIGJIPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_MPKLOIGJIPG_OFFSET))(this);
		}

		::System::Void NEAOBDKMICI(::EPPIFJBJJOO a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPPIFJBJJOO))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_NEAOBDKMICI_OFFSET))(this, a1);
		}

		::System::Void MGCHGOBPKCA(::EPPIFJBJJOO a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPPIFJBJJOO))((::PBYTE)hIl2Cpp + NPKNJAMIKEA_MGCHGOBPKCA_OFFSET))(this, a1);
		}

	};
