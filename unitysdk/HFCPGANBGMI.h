#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
class EMJIDLCDFMI;
class IBDBGGMIBEE;
namespace Entitas { class IContexts; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFCPGANBGMI_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0x1CAC80A0)
#define HFCPGANBGMI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAC7830)
#define HFCPGANBGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC8200)
#define HFCPGANBGMI_EMHDHINLCOP_OFFSET UNITYSDK_OFFSET(0x1CAC7C70)
#define HFCPGANBGMI_GET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CAC8180)
#define HFCPGANBGMI_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CAC81A0)
#define HFCPGANBGMI_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1CAC8140)
#define HFCPGANBGMI_GET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1CAC81C0)
#define HFCPGANBGMI_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1CAC8160)
#define HFCPGANBGMI_GET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CAC81E0)
#define HFCPGANBGMI_HKMPJGMGHEG_OFFSET UNITYSDK_OFFSET(0x1CAC8100)
#define HFCPGANBGMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CAC75E0)
#define HFCPGANBGMI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CAC8040)
#define HFCPGANBGMI_PBAHNFEPAID_OFFSET UNITYSDK_OFFSET(0x1CAC7AF0)
#define HFCPGANBGMI_SET_CONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CAC8190)
#define HFCPGANBGMI_SET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CAC81B0)
#define HFCPGANBGMI_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1CAC8150)
#define HFCPGANBGMI_SET_PREVSTATE_OFFSET UNITYSDK_OFFSET(0x1CAC81D0)
#define HFCPGANBGMI_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x1CAC8170)
#define HFCPGANBGMI_SET__CURRENTSTATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1CAC81F0)

inline static constexpr unsigned int HFCPGANBGMI_TypeDefinitionIndex = 43661;

	class HFCPGANBGMI : public ::System::Object
	{
	public:
		::EMJIDLCDFMI* _Services_k__BackingField; // 0x10
		::Entitas::IEntity* _OwnerEntity_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::Move::MoveState, ::IBDBGGMIBEE*>* PFNCFHNGHAG; // 0x20
		::Entitas::IContexts* _Contexts_k__BackingField; // 0x28
		::IBDBGGMIBEE* __CurrentStateInstance_k__BackingField; // 0x30
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
