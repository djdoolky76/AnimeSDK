#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHLAMPEMMMC.h"
#include "unitysdk/LHHEGNEBMLN_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AKBLDMICKEL;
class BCLJOEGJJOO;
class EKFMIDBJDIA;
class JPBMKCEONNO;
class LHHEGNEBMLN;
class NCJILFFNINI;
class PIOFKDHFGIF;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LHHEGNEBMLN_BGJGNFHGLBC_OFFSET UNITYSDK_OFFSET(0x1BCC49C0)
#define LHHEGNEBMLN_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1BCC3250)
#define LHHEGNEBMLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC4BE0)
#define LHHEGNEBMLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCC4450)
#define LHHEGNEBMLN_FNDKPBCKIOK_OFFSET UNITYSDK_OFFSET(0x1BCC4260)
#define LHHEGNEBMLN_GCEJDEPLNOK_OFFSET UNITYSDK_OFFSET(0x1BCC4830)
#define LHHEGNEBMLN_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1BCC4670)
#define LHHEGNEBMLN_GET_BATTLEPRELOADPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BCC4B90)
#define LHHEGNEBMLN_GET_BLOCKBATTLELOSE_OFFSET UNITYSDK_OFFSET(0x1BCC4B80)
#define LHHEGNEBMLN_GET_EXTRAPROPERTYOPENED_OFFSET UNITYSDK_OFFSET(0x1BCC4B60)
#define LHHEGNEBMLN_GET_HASBACKENDROLE_OFFSET UNITYSDK_OFFSET(0x1BCC4B70)
#define LHHEGNEBMLN_GET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0x1BCC4BC0)
#define LHHEGNEBMLN_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0x1BCC4B50)
#define LHHEGNEBMLN_GET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x1BCC4AD0)
#define LHHEGNEBMLN_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x1BCC3E50)
#define LHHEGNEBMLN_GOEJPJEFPCL_OFFSET UNITYSDK_OFFSET(0x1BCC4AF0)
#define LHHEGNEBMLN_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x1BCC4AC0)
#define LHHEGNEBMLN_HJAMMPGFCHD_OFFSET UNITYSDK_OFFSET(0x1BCC4600)
#define LHHEGNEBMLN_JHJFDGLHGAN_OFFSET UNITYSDK_OFFSET(0x1BCC4BB0)
#define LHHEGNEBMLN_JKOIENJJFJO_OFFSET UNITYSDK_OFFSET(0x1BCC4A00)
#define LHHEGNEBMLN_LJJCADBOOHL_OFFSET UNITYSDK_OFFSET(0x1BCC4520)
#define LHHEGNEBMLN_LKCKPOJNJMG_OFFSET UNITYSDK_OFFSET(0x1BCC4720)
#define LHHEGNEBMLN_MANUALLYSTATISTIC_OFFSET UNITYSDK_OFFSET(0x1BCC46C0)
#define LHHEGNEBMLN_NIOCDJJMPDP_OFFSET UNITYSDK_OFFSET(0x1BCC4AB0)
#define LHHEGNEBMLN_NJFNCKMAHAE_OFFSET UNITYSDK_OFFSET(0x1BCC47B0)
#define LHHEGNEBMLN_OHJIDBHKIOJ_OFFSET UNITYSDK_OFFSET(0x1BCC3D20)
#define LHHEGNEBMLN_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1BCC3060)
#define LHHEGNEBMLN_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x1BCC4760)
#define LHHEGNEBMLN_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x1BCC47F0)
#define LHHEGNEBMLN_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BCC4900)
#define LHHEGNEBMLN_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x1BCC4880)
#define LHHEGNEBMLN_PCCMMCHLCCO_OFFSET UNITYSDK_OFFSET(0x1BCC48C0)
#define LHHEGNEBMLN_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0x1BCC4980)
#define LHHEGNEBMLN_SET_BATTLEPRELOADPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BCC4BA0)
#define LHHEGNEBMLN_SET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0x1BCC4BD0)
#define LHHEGNEBMLN_SET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x1BCC4AE0)
#define LHHEGNEBMLN__INITBATTLEPRELOADPROVIDER_OFFSET UNITYSDK_OFFSET(0x1BCC4940)

inline static constexpr unsigned int LHHEGNEBMLN_TypeDefinitionIndex = 57222;

	class LHHEGNEBMLN : public ::System::Object
	{
	public:
		::JPBMKCEONNO* _ProgressMonitor_k__BackingField; // 0x10
		::RPG::GameCore::TurnBasedGameMode* __GameMode_k__BackingField; // 0x18
		::PIOFKDHFGIF* NHNHKBJJKPP; // 0x20
		::AKBLDMICKEL* _BattlePreloadProvider_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IHLAMPEMMMC>* KJGBLNOAAMC; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::BCLJOEGJJOO*>* IDNFBOPGOKF; // 0x38
		::System::Boolean BFPNJHNHPKC; // 0x40
		static ::System::Func_2<::LHHEGNEBMLN*, ::PIOFKDHFGIF*>** StaticGet_MOKOMLHIBFB()
		{
			return (::System::Func_2<::LHHEGNEBMLN*, ::PIOFKDHFGIF*>**)UnitySDK::FromName("", "LHHEGNEBMLN")->GetStaticField(0x66AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void OHJIDBHKIOJ(::RPG::GameCore::GameModeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_OHJIDBHKIOJ_OFFSET))(this, a1);
		}

		::System::Void BKJGMFOKKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_BKJGMFOKKKN_OFFSET))(this);
		}

		::System::Void GNCJAGHKEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void FNDKPBCKIOK(::RPG::GameCore::EventType a1, ::EKFMIDBJDIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_FNDKPBCKIOK_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_DISPOSE_OFFSET))(this);
		}

		::System::Void LJJCADBOOHL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_LJJCADBOOHL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* HJAMMPGFCHD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_HJAMMPGFCHD_OFFSET))(this, a1);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void ManuallyStatistic(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_MANUALLYSTATISTIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LKCKPOJNJMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_LKCKPOJNJMG_OFFSET))(this);
		}

		::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
		}

		::System::Void NJFNCKMAHAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_NJFNCKMAHAE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void GCEJDEPLNOK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GCEJDEPLNOK_OFFSET))(this, a1);
		}

		::System::Void OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void PCCMMCHLCCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_PCCMMCHLCCO_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _InitBattlePreloadProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN__INITBATTLEPRELOADPROVIDER_OFFSET))(this);
		}

		::System::Void PIMHFOAHCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_PIMHFOAHCPI_OFFSET))(this);
		}

		::System::Void BGJGNFHGLBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_BGJGNFHGLBC_OFFSET))(this);
		}

		::System::Void JKOIENJJFJO(::RPG::GameCore::TaskContext* a1, ::NCJILFFNINI* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NCJILFFNINI*, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_JKOIENJJFJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NIOCDJJMPDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_NIOCDJJMPDP_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* HFPODBLDFOI()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_HFPODBLDFOI_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* get__GameMode()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET__GAMEMODE_OFFSET))(this);
		}

		::System::Void set__GameMode(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_SET__GAMEMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleLineupData* GOEJPJEFPCL()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GOEJPJEFPCL_OFFSET))(this);
		}

		::LHHEGNEBMLN_ERegisterMode get_RegisterMode()
		{
			return ((::LHHEGNEBMLN_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_REGISTERMODE_OFFSET))(this);
		}

		::System::Boolean get_ExtraPropertyOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_EXTRAPROPERTYOPENED_OFFSET))(this);
		}

		::System::Boolean get_HasBackendRole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_HASBACKENDROLE_OFFSET))(this);
		}

		::System::Boolean get_BlockBattleLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_BLOCKBATTLELOSE_OFFSET))(this);
		}

		::AKBLDMICKEL* get_BattlePreloadProvider()
		{
			return ((::AKBLDMICKEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_BATTLEPRELOADPROVIDER_OFFSET))(this);
		}

		::System::Void set_BattlePreloadProvider(::AKBLDMICKEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBLDMICKEL*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_SET_BATTLEPRELOADPROVIDER_OFFSET))(this, a1);
		}

		::PIOFKDHFGIF* JHJFDGLHGAN()
		{
			return ((::PIOFKDHFGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_JHJFDGLHGAN_OFFSET))(this);
		}

		::JPBMKCEONNO* get_ProgressMonitor()
		{
			return ((::JPBMKCEONNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GET_PROGRESSMONITOR_OFFSET))(this);
		}

		::System::Void set_ProgressMonitor(::JPBMKCEONNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPBMKCEONNO*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_SET_PROGRESSMONITOR_OFFSET))(this, a1);
		}

	};
