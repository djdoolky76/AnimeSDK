#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
class EMJIDLCDFMI;
class IBDBGGMIBEE;
namespace Entitas { class IContexts; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFCPGANBGMI_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0x1CA99CB0)
#define HFCPGANBGMI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA99440)
#define HFCPGANBGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA99E10)
#define HFCPGANBGMI_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0x1CA99880)
#define HFCPGANBGMI_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CA99D90)
#define HFCPGANBGMI_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CA99DB0)
#define HFCPGANBGMI_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1CA99D50)
#define HFCPGANBGMI_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1CA99DD0)
#define HFCPGANBGMI_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1CA99D70)
#define HFCPGANBGMI_GET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA99DF0)
#define HFCPGANBGMI_HKMPJGMGHEG_OFFSET UNITYSDK_OFFSET(0x1CA99D10)
#define HFCPGANBGMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CA991F0)
#define HFCPGANBGMI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA99C50)
#define HFCPGANBGMI_PBAHNFEPAID_OFFSET UNITYSDK_OFFSET(0x1CA99700)
#define HFCPGANBGMI_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CA99DA0)
#define HFCPGANBGMI_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CA99DC0)
#define HFCPGANBGMI_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1CA99D60)
#define HFCPGANBGMI_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1CA99DE0)
#define HFCPGANBGMI_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1CA99D80)
#define HFCPGANBGMI_SET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CA99E00)

inline static constexpr unsigned int HFCPGANBGMI_TypeDefinitionIndex = 43661;

	class HFCPGANBGMI : public ::System::Object
	{
	public:
		::IBDBGGMIBEE* __CurrentStateInstance_k__BackingField; // 0x10
		::Entitas::IEntity* _OwnerEntity_k__BackingField; // 0x18
		::EMJIDLCDFMI* _Services_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::Move::MoveState, ::IBDBGGMIBEE*>* PFNCFHNGHAG; // 0x28
		::Entitas::IContexts* _Contexts_k__BackingField; // 0x30
		::RPG::Client::LittleGame::Move::MoveState _PrevState_k__BackingField; // 0x38
		::RPG::Client::LittleGame::Move::MoveState _CurrentState_k__BackingField; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::Entitas::IEntity* a1, ::EMJIDLCDFMI* a2, ::Entitas::IContexts* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::EMJIDLCDFMI*, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + HFCPGANBGMI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_CLEAR_OFFSET))(this);
		}

		::System::Void EMHDHINLCOP(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HFCPGANBGMI_EMHDHINLCOP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFCPGANBGMI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void AJAMJDIIFDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFCPGANBGMI_AJAMJDIIFDO_OFFSET))(this, a1);
		}

		::System::Void HKMPJGMGHEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_HKMPJGMGHEG_OFFSET))(this);
		}

		::System::Void PBAHNFEPAID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_PBAHNFEPAID_OFFSET))(this);
		}

		::Entitas::IEntity* get_OwnerEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::EMJIDLCDFMI* get_Services()
		{
			return ((::EMJIDLCDFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::EMJIDLCDFMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJIDLCDFMI*))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET_SERVICES_OFFSET))(this, a1);
		}

		::Entitas::IContexts* get_Contexts()
		{
			return ((::Entitas::IContexts*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET_CONTEXTS_OFFSET))(this);
		}

		::System::Void set_Contexts(::Entitas::IContexts* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContexts*))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET_CONTEXTS_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState get_CurrentState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET_CURRENTSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState get_PrevState()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET_PREVSTATE_OFFSET))(this);
		}

		::System::Void set_PrevState(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET_PREVSTATE_OFFSET))(this, a1);
		}

		::IBDBGGMIBEE* get__CurrentStateInstance()
		{
			return ((::IBDBGGMIBEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCPGANBGMI_GET__CURRENTSTATEINSTANCE_OFFSET))(this);
		}

		::System::Void set__CurrentStateInstance(::IBDBGGMIBEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBDBGGMIBEE*))((::PBYTE)hIl2Cpp + HFCPGANBGMI_SET__CURRENTSTATEINSTANCE_OFFSET))(this, a1);
		}

	};
