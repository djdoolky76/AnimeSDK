#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapDataKey; }
namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define KCKCFKKKHED_CMFNIOPDKMF_OFFSET UNITYSDK_OFFSET(0xB33AC70)
#define KCKCFKKKHED_CTOR_OFFSET UNITYSDK_OFFSET(0xB33ABA0)
#define KCKCFKKKHED_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB33AD10)
#define KCKCFKKKHED_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB33AD80)
#define KCKCFKKKHED_LDCLKBMNIIA_OFFSET UNITYSDK_OFFSET(0xB33AD30)
#define KCKCFKKKHED_OICFNMHEDJP_OFFSET UNITYSDK_OFFSET(0xB33ACC0)
#define KCKCFKKKHED_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB33AD20)
#define KCKCFKKKHED_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB33AD90)

inline static constexpr unsigned int KCKCFKKKHED_TypeDefinitionIndex = 62923;

	class KCKCFKKKHED : public ::System::Object
	{
	public:
		::RPG::GameCore::NPCMonsterTrackConfigRow* IBPBJBOKKMF; // 0x10
		::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x18
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
