#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRouteState.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class ELANINIDLGJ;
class MIHNHJJBFJP;
class OHKGNIAAAAM;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BAIBJGAMDAI_ACJDLDLJKFD_OFFSET UNITYSDK_OFFSET(0x15E5EC80)
#define BAIBJGAMDAI_BEPNIFPPOFD_OFFSET UNITYSDK_OFFSET(0x15E5F170)
#define BAIBJGAMDAI_BNMFMCEFHLH_OFFSET UNITYSDK_OFFSET(0x15E5ECD0)
#define BAIBJGAMDAI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5F540)
#define BAIBJGAMDAI_DIGLGOOGMPF_OFFSET UNITYSDK_OFFSET(0x15E5F4E0)
#define BAIBJGAMDAI_EPEDKBBELLE_OFFSET UNITYSDK_OFFSET(0x15E5F1F0)
#define BAIBJGAMDAI_GET_BATTLEENDDATA_OFFSET UNITYSDK_OFFSET(0x15E5EBE0)
#define BAIBJGAMDAI_GET_CONSUMEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x15E5EC40)
#define BAIBJGAMDAI_GET_FSM_OFFSET UNITYSDK_OFFSET(0x15E5EC20)
#define BAIBJGAMDAI_GET_ISSETTLERECEIVED_OFFSET UNITYSDK_OFFSET(0x15E5EC60)
#define BAIBJGAMDAI_GET_MAP_OFFSET UNITYSDK_OFFSET(0x15E5EBC0)
#define BAIBJGAMDAI_GET_ROUTESTATEMAP_OFFSET UNITYSDK_OFFSET(0x15E5EC30)
#define BAIBJGAMDAI_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x15E5EC00)
#define BAIBJGAMDAI_IMABHGAAJFG_OFFSET UNITYSDK_OFFSET(0x15E5F1B0)
#define BAIBJGAMDAI_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15E5EFA0)
#define BAIBJGAMDAI_POFNHBOENGJ_OFFSET UNITYSDK_OFFSET(0x15E5EE30)
#define BAIBJGAMDAI_SET_BATTLEENDDATA_OFFSET UNITYSDK_OFFSET(0x15E5EBF0)
#define BAIBJGAMDAI_SET_CONSUMEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x15E5EC50)
#define BAIBJGAMDAI_SET_ISSETTLERECEIVED_OFFSET UNITYSDK_OFFSET(0x15E5EC70)
#define BAIBJGAMDAI_SET_MAP_OFFSET UNITYSDK_OFFSET(0x15E5EBD0)
#define BAIBJGAMDAI_SET_TEAMS_OFFSET UNITYSDK_OFFSET(0x15E5EC10)

inline static constexpr unsigned int BAIBJGAMDAI_TypeDefinitionIndex = 63879;

	class BAIBJGAMDAI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* _RouteStateMap_k__BackingField; // 0x10
		::MIHNHJJBFJP* _BattleEndData_k__BackingField; // 0x18
		::ELANINIDLGJ* _Fsm_k__BackingField; // 0x20
		::RPG::Client::ExpeditionBattleMap* _Map_k__BackingField; // 0x28
		::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* _Teams_k__BackingField; // 0x30
		::System::UInt32 _ConsumedLevelCount_k__BackingField; // 0x38
		::System::Boolean _IsSettleReceived_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_CTOR_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleMap* get_Map()
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_MAP_OFFSET))(this);
		}

		::System::Void set_Map(::RPG::Client::ExpeditionBattleMap* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_SET_MAP_OFFSET))(this, a1);
		}

		::MIHNHJJBFJP* get_BattleEndData()
		{
			return ((::MIHNHJJBFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_BATTLEENDDATA_OFFSET))(this);
		}

		::System::Void set_BattleEndData(::MIHNHJJBFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIHNHJJBFJP*))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_SET_BATTLEENDDATA_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* get_Teams()
		{
			return ((::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_TEAMS_OFFSET))(this);
		}

		::System::Void set_Teams(::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_SET_TEAMS_OFFSET))(this, a1);
		}

		::ELANINIDLGJ* get_Fsm()
		{
			return ((::ELANINIDLGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_FSM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* get_RouteStateMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_ROUTESTATEMAP_OFFSET))(this);
		}

		::System::UInt32 get_ConsumedLevelCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_CONSUMEDLEVELCOUNT_OFFSET))(this);
		}

		::System::Void set_ConsumedLevelCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_SET_CONSUMEDLEVELCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSettleReceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_GET_ISSETTLERECEIVED_OFFSET))(this);
		}

		::System::Void set_IsSettleReceived(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_SET_ISSETTLERECEIVED_OFFSET))(this, a1);
		}

		::System::UInt32 ACJDLDLJKFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_ACJDLDLJKFD_OFFSET))(this);
		}

		::RPG::GameCore::ExpeditionBattleFlowStateType BNMFMCEFHLH()
		{
			return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_BNMFMCEFHLH_OFFSET))(this);
		}

		::System::UInt32 POFNHBOENGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_POFNHBOENGJ_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::RPG::Client::ExpeditionBattleMap* a1, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void BEPNIFPPOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_BEPNIFPPOFD_OFFSET))(this);
		}

		::System::Void IMABHGAAJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_IMABHGAAJFG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* EPEDKBBELLE()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_EPEDKBBELLE_OFFSET))(this);
		}

		::OHKGNIAAAAM* DIGLGOOGMPF()
		{
			return ((::OHKGNIAAAAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIBJGAMDAI_DIGLGOOGMPF_OFFSET))(this);
		}

	};
