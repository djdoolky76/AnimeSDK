#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDataKey; }
namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define KCKCFKKKHED_CMFNIOPDKMF_OFFSET UNITYSDK_OFFSET(0xB334150)
#define KCKCFKKKHED_CTOR_OFFSET UNITYSDK_OFFSET(0xB334080)
#define KCKCFKKKHED_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB3341F0)
#define KCKCFKKKHED_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB334260)
#define KCKCFKKKHED_LDCLKBMNIIA_OFFSET UNITYSDK_OFFSET(0xB334210)
#define KCKCFKKKHED_OICFNMHEDJP_OFFSET UNITYSDK_OFFSET(0xB3341A0)
#define KCKCFKKKHED_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB334200)
#define KCKCFKKKHED_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB334270)

inline static constexpr unsigned int KCKCFKKKHED_TypeDefinitionIndex = 62923;

	class KCKCFKKKHED : public ::System::Object
	{
	public:
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
		::RPG::GameCore::NPCMonsterTrackConfigRow* IBPBJBOKKMF; // 0x18
		::System::UInt32 _FloorID_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::NPCMonsterTrackConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterTrackConfigRow*))((::PBYTE)hIl2Cpp + KCKCFKKKHED_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* CMFNIOPDKMF()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCFKKKHED_CMFNIOPDKMF_OFFSET))(this);
		}

		::System::UInt32 OICFNMHEDJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCFKKKHED_OICFNMHEDJP_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCFKKKHED_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCKCFKKKHED_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 LDCLKBMNIIA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCFKKKHED_LDCLKBMNIIA_OFFSET))(this);
		}

		::RPG::Client::MapDataKey* get_MapDataKey()
		{
			return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCFKKKHED_GET_MAPDATAKEY_OFFSET))(this);
		}

		::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + KCKCFKKKHED_SET_MAPDATAKEY_OFFSET))(this, a1);
		}

	};
