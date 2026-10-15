#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGFDMEDHLE;
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::GameCore { class GameEntity; }

#define CHGFDMEDHLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF49070)
#define CHGFDMEDHLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF49110)
#define CHGFDMEDHLE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCF493A0)
#define CHGFDMEDHLE_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0xCF49120)
#define CHGFDMEDHLE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF48F70)
#define CHGFDMEDHLE_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0xCF493B0)

inline static constexpr unsigned int CHGFDMEDHLE_TypeDefinitionIndex = 62936;

	class CHGFDMEDHLE : public ::System::Object
	{
	public:
		::RPG::Client::MapMappingInfoData* KHDMDJELPPL; // 0x10
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		static ::CHGFDMEDHLE* BPLPBPMEODA(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::CHGFDMEDHLE*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_IconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_GET_ICONTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CHGFDMEDHLE_SET_ENTITY_OFFSET))(this, a1);
		}

	};
