#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMENAAGPDN;
class FAPMPKICHBB;
class KNAFLABINOA;
class LBPCONKMBIK;
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBPCONKMBIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6083A0)
#define LBPCONKMBIK_GET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB607DC0)
#define LBPCONKMBIK_GET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB607CE0)
#define LBPCONKMBIK_GET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB607D60)
#define LBPCONKMBIK_GET_FUNS_OFFSET UNITYSDK_OFFSET(0xB607DF0)
#define LBPCONKMBIK_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB607DA0)
#define LBPCONKMBIK_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB607D80)
#define LBPCONKMBIK_GET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB607D40)
#define LBPCONKMBIK_GET_LEVELRECORDS_OFFSET UNITYSDK_OFFSET(0xB607DE0)
#define LBPCONKMBIK_GET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB607D20)
#define LBPCONKMBIK_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xB607D00)
#define LBPCONKMBIK_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xB607FF0)
#define LBPCONKMBIK_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0xB607E00)
#define LBPCONKMBIK_SET_BATTLEROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB607DD0)
#define LBPCONKMBIK_SET_BELONGROUTEID_OFFSET UNITYSDK_OFFSET(0xB607CF0)
#define LBPCONKMBIK_SET_BUFFVALUE_OFFSET UNITYSDK_OFFSET(0xB607D70)
#define LBPCONKMBIK_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xB607DB0)
#define LBPCONKMBIK_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0xB607D90)
#define LBPCONKMBIK_SET_LASTLEVELPERCENT_OFFSET UNITYSDK_OFFSET(0xB607D50)
#define LBPCONKMBIK_SET_PASSEDLEVEL_OFFSET UNITYSDK_OFFSET(0xB607D30)
#define LBPCONKMBIK_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xB607D10)

inline static constexpr unsigned int LBPCONKMBIK_TypeDefinitionIndex = 63851;

	class LBPCONKMBIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FAPMPKICHBB*>* _Funs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::KNAFLABINOA*>* _LevelRecords_k__BackingField; // 0x18
		::RPG::Client::ExpeditionBattleTeam* _Team_k__BackingField; // 0x20
		::System::UInt64 _BuffValue_k__BackingField; // 0x28
		::System::UInt32 _PassedLevel_k__BackingField; // 0x30
		::System::UInt32 _BelongRouteID_k__BackingField; // 0x34
		::System::Boolean _IsEmpty_k__BackingField; // 0x38
		::System::Boolean _IsNewRecord_k__BackingField; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 _LastLevelPercent_k__BackingField; // 0x3C
		::System::UInt32 _BattleRoundCnt_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_BelongRouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_BELONGROUTEID_OFFSET))(this);
		}

		::System::Void set_BelongRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_BELONGROUTEID_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeam* get_Team()
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::Client::ExpeditionBattleTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_TEAM_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_PASSEDLEVEL_OFFSET))(this);
		}

		::System::Void set_PassedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_PASSEDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastLevelPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_LASTLEVELPERCENT_OFFSET))(this);
		}

		::System::Void set_LastLevelPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_LASTLEVELPERCENT_OFFSET))(this, a1);
		}

		::System::UInt64 get_BuffValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_BUFFVALUE_OFFSET))(this);
		}

		::System::Void set_BuffValue(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_BUFFVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_ISNEWRECORD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_ISEMPTY_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_BATTLEROUNDCNT_OFFSET))(this);
		}

		::System::Void set_BattleRoundCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBPCONKMBIK_SET_BATTLEROUNDCNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KNAFLABINOA*>* get_LevelRecords()
		{
			return ((::System::Collections::Generic::List_1<::KNAFLABINOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_LEVELRECORDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FAPMPKICHBB*>* get_Funs()
		{
			return ((::System::Collections::Generic::List_1<::FAPMPKICHBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_GET_FUNS_OFFSET))(this);
		}

		::System::Void PLGEBDDNCKC(::BFMENAAGPDN* a1, ::System::Collections::Generic::List_1<::KNAFLABINOA*>* a2, ::System::Collections::Generic::List_1<::FAPMPKICHBB*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BFMENAAGPDN*, ::System::Collections::Generic::List_1<::KNAFLABINOA*>*, ::System::Collections::Generic::List_1<::FAPMPKICHBB*>*))((::PBYTE)hIl2Cpp + LBPCONKMBIK_PLGEBDDNCKC_OFFSET))(this, a1, a2, a3);
		}

		::LBPCONKMBIK* NBHCPBBGAKA()
		{
			return ((::LBPCONKMBIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPCONKMBIK_NBHCPBBGAKA_OFFSET))(this);
		}

	};
