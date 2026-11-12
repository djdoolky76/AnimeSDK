#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JMKCMFMGBJO;
namespace RPG::GameCore { class SummonUnitConfig; }
namespace RPG::GameCore { class SummonUnitDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLADGGNOJPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFC950)
#define LLADGGNOJPG_GET_ATTACHENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFFC690)
#define LLADGGNOJPG_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xBFFC710)
#define LLADGGNOJPG_GET_CONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBFFC6D0)
#define LLADGGNOJPG_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBFFC750)
#define LLADGGNOJPG_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xBFFC730)
#define LLADGGNOJPG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBFFC6F0)
#define LLADGGNOJPG_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xBFFC6B0)
#define LLADGGNOJPG_GET_SUMMONERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFFC670)
#define LLADGGNOJPG_GET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0xBFFC650)
#define LLADGGNOJPG_GET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0xBFFC930)
#define LLADGGNOJPG_LJGBKFPHOBH_OFFSET UNITYSDK_OFFSET(0xBFFC7E0)
#define LLADGGNOJPG_MJJNLOKEPAC_OFFSET UNITYSDK_OFFSET(0xBFFC770)
#define LLADGGNOJPG_SET_ATTACHENTITYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFFC6A0)
#define LLADGGNOJPG_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0xBFFC720)
#define LLADGGNOJPG_SET_CONFIGDATA_OFFSET UNITYSDK_OFFSET(0xBFFC6E0)
#define LLADGGNOJPG_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBFFC760)
#define LLADGGNOJPG_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xBFFC740)
#define LLADGGNOJPG_SET_NAME_OFFSET UNITYSDK_OFFSET(0xBFFC700)
#define LLADGGNOJPG_SET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xBFFC6C0)
#define LLADGGNOJPG_SET_SUMMONERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xBFFC680)
#define LLADGGNOJPG_SET_SUMMONUNITID_OFFSET UNITYSDK_OFFSET(0xBFFC660)
#define LLADGGNOJPG_SET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0xBFFC940)
#define LLADGGNOJPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBFFCB10)

inline static constexpr unsigned int LLADGGNOJPG_TypeDefinitionIndex = 63549;

	class LLADGGNOJPG : public ::RPG::Client::MapEntityDef
	{
	public:
		::System::String* _Name_k__BackingField; // 0x58
		::RPG::GameCore::SummonUnitDataRow* _RowData_k__BackingField; // 0x60
		::RPG::GameCore::SummonUnitConfig* _ConfigData_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* _TriggerNameList_k__BackingField; // 0x70
		::System::Single _LifeTime_k__BackingField; // 0x78
		::RPG::GameCore::CampType _CampID_k__BackingField; // 0x7C
		::System::UInt64 _CreateTimeStamp_k__BackingField; // 0x80
		::System::UInt32 _SummonerServerEntityID_k__BackingField; // 0x88
		::System::UInt32 _SummonUnitID_k__BackingField; // 0x8C
		::System::UInt32 _AttachEntityServerEntityID_k__BackingField; // 0x90
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::JMKCMFMGBJO* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Vector3 a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::JMKCMFMGBJO*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + LLADGGNOJPG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::UInt32 get_SummonUnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_SUMMONUNITID_OFFSET))(this);
		}

		::System::Void set_SummonUnitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_SUMMONUNITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SummonerServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_SUMMONERSERVERENTITYID_OFFSET))(this);
		}

		::System::Void set_SummonerServerEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_SUMMONERSERVERENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachEntityServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_ATTACHENTITYSERVERENTITYID_OFFSET))(this);
		}

		::System::Void set_AttachEntityServerEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_ATTACHENTITYSERVERENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::SummonUnitDataRow* get_RowData()
		{
			return ((::RPG::GameCore::SummonUnitDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_ROWDATA_OFFSET))(this);
		}

		::System::Void set_RowData(::RPG::GameCore::SummonUnitDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitDataRow*))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_ROWDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::SummonUnitConfig* get_ConfigData()
		{
			return ((::RPG::GameCore::SummonUnitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_CONFIGDATA_OFFSET))(this);
		}

		::System::Void set_ConfigData(::RPG::GameCore::SummonUnitConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitConfig*))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_CONFIGDATA_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_CAMPID_OFFSET))(this);
		}

		::System::Void set_CampID(::RPG::GameCore::CampType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_CAMPID_OFFSET))(this, a1);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_CreateTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_CREATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreateTimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_CREATETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Single MJJNLOKEPAC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_MJJNLOKEPAC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TriggerNameList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_GET_TRIGGERNAMELIST_OFFSET))(this);
		}

		::System::Void set_TriggerNameList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LLADGGNOJPG_SET_TRIGGERNAMELIST_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLADGGNOJPG_TOSTRING_OFFSET))(this);
		}

		static ::System::Single LJGBKFPHOBH(::System::Single a1, ::System::UInt64 a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::UInt64))((::PBYTE)hIl2Cpp + LLADGGNOJPG_LJGBKFPHOBH_OFFSET))(a1, a2);
		}

	};
