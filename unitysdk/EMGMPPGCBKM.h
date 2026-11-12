#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame { template <typename T> class NavigationRequest_1; }
namespace RPG::GameCore { class ST_Main_ElfMoveToPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EMGMPPGCBKM_CTOR_OFFSET UNITYSDK_OFFSET(0x16483900)
#define EMGMPPGCBKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16484C90)
#define EMGMPPGCBKM_EMEAGPAEKKP_OFFSET UNITYSDK_OFFSET(0x16484CD0)
#define EMGMPPGCBKM_GBCAHCHBPIN_OFFSET UNITYSDK_OFFSET(0x16485450)
#define EMGMPPGCBKM_GOMNKMIBFPG_OFFSET UNITYSDK_OFFSET(0x164844C0)
#define EMGMPPGCBKM_IHBOPFGLOOC_OFFSET UNITYSDK_OFFSET(0x16484940)
#define EMGMPPGCBKM_KBGBLHMGNLD_OFFSET UNITYSDK_OFFSET(0x164851A0)
#define EMGMPPGCBKM_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0x16485100)
#define EMGMPPGCBKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16483980)
#define EMGMPPGCBKM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16483D10)
#define EMGMPPGCBKM_TICK_OFFSET UNITYSDK_OFFSET(0x16483EF0)

inline static constexpr unsigned int EMGMPPGCBKM_TypeDefinitionIndex = 53268;

	class EMGMPPGCBKM
	{
	public:
		::RPG::Client::LittleGame::NavigationRequest_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* BOOJINILAND; // 0x28
		::RPG::Client::ElfRestaurantGameInstance* MIJMIIENKAK; // 0x30
		::RPG::Client::LittleGame::ElfRestaurantGameEntity* PELIMKCPLCC; // 0x38
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x40
		::System::Single IJAJOGNGEIK; // 0x4C
		::System::Boolean BNDLCAADPPO; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single JIJJJDONLIP; // 0x54
		::System::Single HBANLBGKNKP; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfMoveToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfMoveToPosition*))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GOMNKMIBFPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_GOMNKMIBFPG_OFFSET))(this);
		}

		::System::Void EMEAGPAEKKP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_EMEAGPAEKKP_OFFSET))(this, a1);
		}

		::System::Void LLCDDOBNLBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_LLCDDOBNLBJ_OFFSET))(this, a1);
		}

		::System::Void KBGBLHMGNLD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_KBGBLHMGNLD_OFFSET))(this, a1);
		}

		::System::Void IHBOPFGLOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_IHBOPFGLOOC_OFFSET))(this);
		}

		::System::Void GBCAHCHBPIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMPPGCBKM_GBCAHCHBPIN_OFFSET))(this);
		}

	};
