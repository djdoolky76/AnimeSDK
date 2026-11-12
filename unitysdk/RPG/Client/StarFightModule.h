#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
class EBGJAKBKPAN;
class JFGCABMMKAB;
namespace RPG::Client { class StarFightGroupData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0xEBD68A0)
#define RPG_CLIENT_STARFIGHTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD7820)
#define RPG_CLIENT_STARFIGHTMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0xEBD5C30)
#define RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xEBD5BF0)
#define RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATA_OFFSET UNITYSDK_OFFSET(0xEBD5B40)
#define RPG_CLIENT_STARFIGHTMODULE_GET_LASTBATTLEWAVE_OFFSET UNITYSDK_OFFSET(0xEBD77E0)
#define RPG_CLIENT_STARFIGHTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xEBD5540)
#define RPG_CLIENT_STARFIGHTMODULE_ISALLGROUPHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xEBD3960)
#define RPG_CLIENT_STARFIGHTMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xEBD63F0)
#define RPG_CLIENT_STARFIGHTMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xEBD6030)
#define RPG_CLIENT_STARFIGHTMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xEBD65C0)
#define RPG_CLIENT_STARFIGHTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xEBD5B00)
#define RPG_CLIENT_STARFIGHTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xEBD5970)
#define RPG_CLIENT_STARFIGHTMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0xEBD5680)
#define RPG_CLIENT_STARFIGHTMODULE__ONCMDGETSTARFIGHTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xEBD6D40)
#define RPG_CLIENT_STARFIGHTMODULE__ONCMDSTARFIGHTDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xEBD73E0)
#define RPG_CLIENT_STARFIGHTMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0xEBD7460)
#define RPG_CLIENT_STARFIGHTMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0xEBD70E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightModule_TypeDefinitionIndex = 69930;

	class StarFightModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>* _StarFightGroupDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::StarFightGroupData*>* _StarFightGroupDataDic; // 0x18
		::System::Collections::Generic::List_1<::EBGJAKBKPAN*>* _LastBattleAvatar; // 0x20
		::System::UInt32 _LastBattleWave; // 0x28
		::System::UInt32 BattleLevel; // 0x2C
		::System::UInt32 BattleGroupID; // 0x30
		::System::Int32 _AutoShowGroupID; // 0x34
		::RPG::Client::TextID BattleTitle; // 0x38
		// static const ::System::Object CurSeason; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::StarFightGroupData* GetStarFightGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::StarFightGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>* GetStarFightGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockAnimGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET))(this);
		}

		::System::Void TriggerEnterBattle(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_TRIGGERENTERBATTLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RestartEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_RESTARTENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearNewGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_CLEARNEWGROUP_OFFSET))(this);
		}

		::System::Boolean IsAllGroupHardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_ISALLGROUPHARDCHALLENGED_OFFSET))(this);
		}

		::System::Void _OnCmdGetStarFightDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONCMDGETSTARFIGHTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStarFightDataChangeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONCMDSTARFIGHTDATACHANGENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SynGroupInfo(::JFGCABMMKAB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JFGCABMMKAB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__SYNGROUPINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::System::Void _OnPVEBattleResultScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_LastBattleWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GET_LASTBATTLEWAVE_OFFSET))(this);
		}

	};
}
