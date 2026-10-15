#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class EKPJADDELLM;
class HBPNHCICJGF;
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define EBBJGCKIBAA_BMLIHCDKLJG_OFFSET UNITYSDK_OFFSET(0x12CE7800)
#define EBBJGCKIBAA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE6130)
#define EBBJGCKIBAA_EGDDNNMNMFE_OFFSET UNITYSDK_OFFSET(0x12CE7F00)
#define EBBJGCKIBAA_EOJJEKMKKAI_OFFSET UNITYSDK_OFFSET(0x12CE61C0)
#define EBBJGCKIBAA_FKCIDOIKJBK_OFFSET UNITYSDK_OFFSET(0x12CE74B0)
#define EBBJGCKIBAA_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x12CE8710)
#define EBBJGCKIBAA_GET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x12CE8770)
#define EBBJGCKIBAA_GET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x12CE87A0)
#define EBBJGCKIBAA_GET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x12CE8750)
#define EBBJGCKIBAA_GET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x12CE87C0)
#define EBBJGCKIBAA_GET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x12CE8730)
#define EBBJGCKIBAA_GGJNMKCHAJJ_OFFSET UNITYSDK_OFFSET(0x12CE8150)
#define EBBJGCKIBAA_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x12CE8530)
#define EBBJGCKIBAA_IPMFJFAGANI_OFFSET UNITYSDK_OFFSET(0x12CE7EA0)
#define EBBJGCKIBAA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CE8200)
#define EBBJGCKIBAA_JMHKDMFBPKO_OFFSET UNITYSDK_OFFSET(0x12CE7F60)
#define EBBJGCKIBAA_KAIEEPCLOCI_OFFSET UNITYSDK_OFFSET(0x12CE76D0)
#define EBBJGCKIBAA_KIMAOEPMMGF_OFFSET UNITYSDK_OFFSET(0x12CE8090)
#define EBBJGCKIBAA_LMFNIIOPKAD_OFFSET UNITYSDK_OFFSET(0x12CE7770)
#define EBBJGCKIBAA_LPNCOBNGCOG_OFFSET UNITYSDK_OFFSET(0x12CE7FC0)
#define EBBJGCKIBAA_NLALGCABCEE_OFFSET UNITYSDK_OFFSET(0x12CE7600)
#define EBBJGCKIBAA_PBKLDOOPHAJ_OFFSET UNITYSDK_OFFSET(0x12CE6D70)
#define EBBJGCKIBAA_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x12CE8720)
#define EBBJGCKIBAA_SET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x12CE8780)
#define EBBJGCKIBAA_SET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x12CE8790)
#define EBBJGCKIBAA_SET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x12CE8760)
#define EBBJGCKIBAA_SET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x12CE87B0)
#define EBBJGCKIBAA_SET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x12CE8740)

	class EBBJGCKIBAA : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* _NextTurnStateQueue_k__BackingField; // 0x18
		::EKPJADDELLM* LBDMJJOHLEF; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState>* ECDIEPJFBKJ; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::HBPNHCICJGF*>* BNKCCBLMCIL; // 0x30
		::RPG::GameCore::TurnState _RollbackState_k__BackingField; // 0x38
		::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x3C
		::System::Boolean _NewWaveFlag_k__BackingField; // 0x40
		::System::Boolean _OneMoreActionFlag_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::RPG::GameCore::TurnState _TargetTurnState_k__BackingField; // 0x44
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_CTOR_OFFSET))(this, a1);
		}

		::System::Void FKCIDOIKJBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_FKCIDOIKJBK_OFFSET))(this);
		}

		::System::Void NLALGCABCEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_NLALGCABCEE_OFFSET))(this);
		}

		::System::Void KAIEEPCLOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_KAIEEPCLOCI_OFFSET))(this);
		}

		::System::Boolean LMFNIIOPKAD(::RPG::GameCore::TurnState a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnState, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_LMFNIIOPKAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean IPMFJFAGANI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_IPMFJFAGANI_OFFSET))(this);
		}

		::System::Boolean EGDDNNMNMFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_EGDDNNMNMFE_OFFSET))(this);
		}

		::System::Void JMHKDMFBPKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_JMHKDMFBPKO_OFFSET))(this);
		}

		::System::Boolean LPNCOBNGCOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_LPNCOBNGCOG_OFFSET))(this);
		}

		::System::Boolean KIMAOEPMMGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_KIMAOEPMMGF_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::String* INOMGFMHLDO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_INOMGFMHLDO_OFFSET))(this);
		}

		::System::Void EOJJEKMKKAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_EOJJEKMKKAI_OFFSET))(this);
		}

		::System::Void PBKLDOOPHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_PBKLDOOPHAJ_OFFSET))(this);
		}

		::System::Void BMLIHCDKLJG(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_BMLIHCDKLJG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TurnState get_CurrentTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_CURRENTTURNSTATE_OFFSET))(this);
		}

		::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_CURRENTTURNSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState get_TargetTurnState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_TARGETTURNSTATE_OFFSET))(this);
		}

		::System::Void set_TargetTurnState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_TARGETTURNSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState GGJNMKCHAJJ()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GGJNMKCHAJJ_OFFSET))(this);
		}

		::System::Boolean get_OneMoreActionFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_ONEMOREACTIONFLAG_OFFSET))(this);
		}

		::System::Void set_OneMoreActionFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_ONEMOREACTIONFLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_NewWaveFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_NEWWAVEFLAG_OFFSET))(this);
		}

		::System::Void set_NewWaveFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_NEWWAVEFLAG_OFFSET))(this, a1);
		}

		::System::Void set_NextTurnStateQueue(::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_NEXTTURNSTATEQUEUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* get_NextTurnStateQueue()
		{
			return ((::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_NEXTTURNSTATEQUEUE_OFFSET))(this);
		}

		::System::Void set_RollbackState(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_SET_ROLLBACKSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnState get_RollbackState()
		{
			return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBJGCKIBAA_GET_ROLLBACKSTATE_OFFSET))(this);
		}

	};
