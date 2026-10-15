#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
class HFCPGANBGMI;

#define IBDBGGMIBEE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1CB07110)
#define IBDBGGMIBEE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB06D70)
#define IBDBGGMIBEE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1CB06F60)
#define IBDBGGMIBEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB07190)
#define IBDBGGMIBEE_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1CB07160)
#define IBDBGGMIBEE_GET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1CB07170)
#define IBDBGGMIBEE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CB06B60)
#define IBDBGGMIBEE_SET__STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1CB07180)

inline static constexpr unsigned int IBDBGGMIBEE_TypeDefinitionIndex = 43659;

	class IBDBGGMIBEE : public ::System::Object
	{
	public:
		::HFCPGANBGMI* __StateMachine_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_CLEAR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_EPPAFNJFCMH_OFFSET))(this);
		}

		::HFCPGANBGMI* get__StateMachine()
		{
			return ((::HFCPGANBGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_GET__STATEMACHINE_OFFSET))(this);
		}

		::System::Void set__StateMachine(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + IBDBGGMIBEE_SET__STATEMACHINE_OFFSET))(this, a1);
		}

	};
