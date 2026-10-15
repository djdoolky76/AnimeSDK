#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class EJAMGMFMBLL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BNNGDLLACML_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE29A0)
#define BNNGDLLACML_GET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xBDE28C0)
#define BNNGDLLACML_GET_BESTROUND_OFFSET UNITYSDK_OFFSET(0xBDE2980)
#define BNNGDLLACML_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBDE2920)
#define BNNGDLLACML_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xBDE28E0)
#define BNNGDLLACML_GET_ID_OFFSET UNITYSDK_OFFSET(0xBDE2880)
#define BNNGDLLACML_GET_MONSTERDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBDE2900)
#define BNNGDLLACML_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBDE2940)
#define BNNGDLLACML_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBDE2960)
#define BNNGDLLACML_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBDE28A0)
#define BNNGDLLACML_SET_BATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xBDE28D0)
#define BNNGDLLACML_SET_BESTROUND_OFFSET UNITYSDK_OFFSET(0xBDE2990)
#define BNNGDLLACML_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0xBDE2930)
#define BNNGDLLACML_SET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xBDE28F0)
#define BNNGDLLACML_SET_ID_OFFSET UNITYSDK_OFFSET(0xBDE2890)
#define BNNGDLLACML_SET_MONSTERDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBDE2910)
#define BNNGDLLACML_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBDE2950)
#define BNNGDLLACML_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBDE2970)
#define BNNGDLLACML_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xBDE28B0)

	class BNNGDLLACML : public ::System::Object
	{
	public:
		::System::String* _MonsterDecoImagePath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::EJAMGMFMBLL*>* _Buffs_k__BackingField; // 0x18
		::System::UInt32 _StageID_k__BackingField; // 0x20
		::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _BattleAreaID_k__BackingField; // 0x2C
		::System::UInt32 _PassedLevel_k__BackingField; // 0x30
		::System::UInt32 _BestRound_k__BackingField; // 0x34
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_STAGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_BATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_BattleAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_BATTLEAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DisplayMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_DISPLAYMONSTERID_OFFSET))(this);
		}

		::System::Void set_DisplayMonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_DISPLAYMONSTERID_OFFSET))(this, a1);
		}

		::System::String* get_MonsterDecoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_MONSTERDECOIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_MonsterDecoImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_MONSTERDECOIMAGEPATH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EJAMGMFMBLL*>* get_Buffs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EJAMGMFMBLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_BUFFS_OFFSET))(this);
		}

		::System::Void set_Buffs(::System::Collections::Generic::IReadOnlyList_1<::EJAMGMFMBLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::EJAMGMFMBLL*>*))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_BUFFS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_PASSEDLEVEL_OFFSET))(this);
		}

		::System::Void set_PassedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_PASSEDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_BestRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGDLLACML_GET_BESTROUND_OFFSET))(this);
		}

		::System::Void set_BestRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNNGDLLACML_SET_BESTROUND_OFFSET))(this, a1);
		}

	};
