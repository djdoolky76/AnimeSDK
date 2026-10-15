#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGBBKPCCGDB;
namespace RPG::Client { class InflatableFighterPuzzleBoard; }

#define HGBBKPCCGDB_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0x15C829C0)
#define HGBBKPCCGDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C82950)
#define HGBBKPCCGDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C82970)
#define HGBBKPCCGDB_GEFEECHPKCF_OFFSET UNITYSDK_OFFSET(0x15C82B10)
#define HGBBKPCCGDB_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15C82930)
#define HGBBKPCCGDB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C82A10)
#define HGBBKPCCGDB_LEIMFEIBEJB_OFFSET UNITYSDK_OFFSET(0x15C82AA0)
#define HGBBKPCCGDB_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15C82940)

inline static constexpr unsigned int HGBBKPCCGDB_TypeDefinitionIndex = 68672;

	class HGBBKPCCGDB : public ::System::Object
	{
	public:
		::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x10
		::System::Single PGMIOKKLHIE; // 0x18
		static ::HGBBKPCCGDB** StaticGet__Instance_k__BackingField()
		{
			return (::HGBBKPCCGDB**)UnitySDK::FromName("", "HGBBKPCCGDB")->GetStaticField(0x139A0);
		}

		::System::Void _ctor(::RPG::Client::InflatableFighterPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::InflatableFighterPuzzleBoard*))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_CTOR_OFFSET))(this, a1);
		}

		static ::HGBBKPCCGDB* get_Instance()
		{
			return ((::HGBBKPCCGDB*(*)())((::PBYTE)hIl2Cpp + HGBBKPCCGDB_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::HGBBKPCCGDB* a1)
		{
			return ((::System::Void(*)(::HGBBKPCCGDB*))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void LEIMFEIBEJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_LEIMFEIBEJB_OFFSET))(this);
		}

		::System::Single GEFEECHPKCF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGBBKPCCGDB_GEFEECHPKCF_OFFSET))(this, a1);
		}

	};
