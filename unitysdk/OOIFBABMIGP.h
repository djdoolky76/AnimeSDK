#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class GameEntity; }

#define OOIFBABMIGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C900)
#define OOIFBABMIGP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OOIFBABMIGP_GET_INTERACTIONTAGS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define OOIFBABMIGP_GET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OOIFBABMIGP_MMLKAHGLEEF_OFFSET UNITYSDK_OFFSET(0x25B70)

	struct alignas(8) OOIFBABMIGP
	{
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x10
		::System::UInt32 _SummonUnitId_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::StringHash>* _InteractionTags_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::GameCore::StringHash>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::StringHash>*))((::PBYTE)hIl2Cpp + OOIFBABMIGP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIFBABMIGP_GET_ENTITY_OFFSET))(this);
		}

		::System::UInt32 get_SummonUnitId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIFBABMIGP_GET_SUMMONUNITID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::StringHash>* get_InteractionTags()
		{
			return ((::Il2CppArray<::RPG::GameCore::StringHash>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIFBABMIGP_GET_INTERACTIONTAGS_OFFSET))(this);
		}

		::System::Boolean MMLKAHGLEEF(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + OOIFBABMIGP_MMLKAHGLEEF_OFFSET))(this, a1);
		}

	};
