#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
class KNKPLOGICFO;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define ODCFEGFDIMM_BKAAMJPIPLJ_OFFSET UNITYSDK_OFFSET(0xBD80750)
#define ODCFEGFDIMM_CBHFGCJCPBF_OFFSET UNITYSDK_OFFSET(0xBD80E10)
#define ODCFEGFDIMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD7FDB0)
#define ODCFEGFDIMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD7FF60)
#define ODCFEGFDIMM_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0xBD810B0)
#define ODCFEGFDIMM_ENTER_OFFSET UNITYSDK_OFFSET(0xBD80180)
#define ODCFEGFDIMM_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0xBD808F0)
#define ODCFEGFDIMM_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBD80700)
#define ODCFEGFDIMM_HFMIIIOFOHO_OFFSET UNITYSDK_OFFSET(0xBD80840)
#define ODCFEGFDIMM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBD80120)
#define ODCFEGFDIMM_LEAVE_OFFSET UNITYSDK_OFFSET(0xBD80680)
#define ODCFEGFDIMM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBD80600)
#define ODCFEGFDIMM_OJHLFHJCIDH_OFFSET UNITYSDK_OFFSET(0xBD81030)
#define ODCFEGFDIMM_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xBD805C0)
#define ODCFEGFDIMM_PMEDEJPKIFA_OFFSET UNITYSDK_OFFSET(0xBD80BC0)
#define ODCFEGFDIMM_TICK_OFFSET UNITYSDK_OFFSET(0xBD800B0)
#define ODCFEGFDIMM___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0xBD81590)
#define ODCFEGFDIMM___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0xBD81310)
#define ODCFEGFDIMM___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0xBD81460)

inline static constexpr unsigned int ODCFEGFDIMM_TypeDefinitionIndex = 61150;

	class ODCFEGFDIMM : public ::RPG::Client::LoginPhase
	{
	public:
		::KNKPLOGICFO* PCOMMLHHNOA; // 0x28
		::UnityEngine::Coroutine* MBNHHJDLHFI; // 0x30
		::UnityEngine::Coroutine* NNHJIAKEKBG; // 0x38
		::RPG::Client::Promises::Promise* LOIMNCDDIJP; // 0x40
		// static const ::System::Object EPAFNFAHKJC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_ENTER_OFFSET))(this);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_PBBEINJGAOE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NPAFMEBNFOB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BKAAMJPIPLJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_BKAAMJPIPLJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HFMIIIOFOHO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_HFMIIIOFOHO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GBOENALBIIC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_GBOENALBIIC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PMEDEJPKIFA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_PMEDEJPKIFA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CBHFGCJCPBF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_CBHFGCJCPBF_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OJHLFHJCIDH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_OJHLFHJCIDH_OFFSET))(this);
		}

		::System::Void DMJOKNMPLHJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM_DMJOKNMPLHJ_OFFSET))(this, a1);
		}

		::System::Void __InitAudioPck_b__12_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___INITAUDIOPCK_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Void __InitGame_b__13_0(::System::Action* a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___INITGAME_B__13_0_OFFSET))(this, a1, a2);
		}

		::System::Void __EnableLoginButton_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
		}

	};
