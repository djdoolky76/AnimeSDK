#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
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

#define LHHEGNEBMLN_BGJGNFHGLBC_OFFSET UNITYSDK_OFFSET(0xB6AC210)
#define LHHEGNEBMLN_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xB6AACD0)
#define LHHEGNEBMLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AC3F0)
#define LHHEGNEBMLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6ABED0)
#define LHHEGNEBMLN_FNDKPBCKIOK_OFFSET UNITYSDK_OFFSET(0xB6ABCE0)
#define LHHEGNEBMLN_GCEJDEPLNOK_OFFSET UNITYSDK_OFFSET(0xB6AC0C0)
#define LHHEGNEBMLN_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB6ABF40)
#define LHHEGNEBMLN_GET_EXTRAPROPERTYOPENED_OFFSET UNITYSDK_OFFSET(0xB6AC3A0)
#define LHHEGNEBMLN_GET_HASBACKENDROLE_OFFSET UNITYSDK_OFFSET(0xB6AC3B0)
#define LHHEGNEBMLN_GET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0xB6AC3D0)
#define LHHEGNEBMLN_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0xB6AC390)
#define LHHEGNEBMLN_GET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6AC310)
#define LHHEGNEBMLN_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0xB6AB8D0)
#define LHHEGNEBMLN_GOEJPJEFPCL_OFFSET UNITYSDK_OFFSET(0xB6AC330)
#define LHHEGNEBMLN_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0xB6AC300)
#define LHHEGNEBMLN_JHJFDGLHGAN_OFFSET UNITYSDK_OFFSET(0xB6AC3C0)
#define LHHEGNEBMLN_JKOIENJJFJO_OFFSET UNITYSDK_OFFSET(0xB6AC250)
#define LHHEGNEBMLN_KNJKPFCPKAH_OFFSET UNITYSDK_OFFSET(0xB6ABF90)
#define LHHEGNEBMLN_NIOCDJJMPDP_OFFSET UNITYSDK_OFFSET(0xB6AC2F0)
#define LHHEGNEBMLN_NJFNCKMAHAE_OFFSET UNITYSDK_OFFSET(0xB6AC040)
#define LHHEGNEBMLN_OHJIDBHKIOJ_OFFSET UNITYSDK_OFFSET(0xB6AB7A0)
#define LHHEGNEBMLN_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB6AAB50)
#define LHHEGNEBMLN_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0xB6ABFF0)
#define LHHEGNEBMLN_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB6AC080)
#define LHHEGNEBMLN_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB6AC190)
#define LHHEGNEBMLN_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0xB6AC110)
#define LHHEGNEBMLN_PCCMMCHLCCO_OFFSET UNITYSDK_OFFSET(0xB6AC150)
#define LHHEGNEBMLN_PIMHFOAHCPI_OFFSET UNITYSDK_OFFSET(0xB6AC1D0)
#define LHHEGNEBMLN_SET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0xB6AC3E0)
#define LHHEGNEBMLN_SET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB6AC320)

inline static constexpr unsigned int LHHEGNEBMLN_TypeDefinitionIndex = 56018;

	class LHHEGNEBMLN : public ::System::Object
	{
	public:
		::JPBMKCEONNO* _ProgressMonitor_k__BackingField; // 0x10
		::PIOFKDHFGIF* NHNHKBJJKPP; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::BCLJOEGJJOO*>* IDNFBOPGOKF; // 0x20
		::RPG::GameCore::TurnBasedGameMode* __GameMode_k__BackingField; // 0x28
		::System::Boolean BFPNJHNHPKC; // 0x30
		static ::System::Func_2<::LHHEGNEBMLN*, ::PIOFKDHFGIF*>** StaticGet_MOKOMLHIBFB()
		{
			return (::System::Func_2<::LHHEGNEBMLN*, ::PIOFKDHFGIF*>**)UnitySDK::FromName("", "LHHEGNEBMLN")->GetStaticField(0x630C0);
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

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void KNJKPFCPKAH(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LHHEGNEBMLN_KNJKPFCPKAH_OFFSET))(this, a1, a2, a3);
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
