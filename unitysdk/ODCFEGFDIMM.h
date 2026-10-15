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
namespace UnityEngine { class Coroutine; }

#define ODCFEGFDIMM_BKAAMJPIPLJ_OFFSET UNITYSDK_OFFSET(0xBD87B70)
#define ODCFEGFDIMM_CBHFGCJCPBF_OFFSET UNITYSDK_OFFSET(0xBD88230)
#define ODCFEGFDIMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD871D0)
#define ODCFEGFDIMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD87380)
#define ODCFEGFDIMM_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0xBD884D0)
#define ODCFEGFDIMM_ENTER_OFFSET UNITYSDK_OFFSET(0xBD875A0)
#define ODCFEGFDIMM_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0xBD87D10)
#define ODCFEGFDIMM_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBD87B20)
#define ODCFEGFDIMM_HFMIIIOFOHO_OFFSET UNITYSDK_OFFSET(0xBD87C60)
#define ODCFEGFDIMM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBD87540)
#define ODCFEGFDIMM_LEAVE_OFFSET UNITYSDK_OFFSET(0xBD87AA0)
#define ODCFEGFDIMM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBD87A20)
#define ODCFEGFDIMM_OJHLFHJCIDH_OFFSET UNITYSDK_OFFSET(0xBD88450)
#define ODCFEGFDIMM_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xBD879E0)
#define ODCFEGFDIMM_PMEDEJPKIFA_OFFSET UNITYSDK_OFFSET(0xBD87FE0)
#define ODCFEGFDIMM_TICK_OFFSET UNITYSDK_OFFSET(0xBD874D0)
#define ODCFEGFDIMM___ENABLELOGINBUTTON_B__14_0_OFFSET UNITYSDK_OFFSET(0xBD889C0)
#define ODCFEGFDIMM___INITAUDIOPCK_B__12_0_OFFSET UNITYSDK_OFFSET(0xBD88740)
#define ODCFEGFDIMM___INITGAME_B__13_0_OFFSET UNITYSDK_OFFSET(0xBD88890)

inline static constexpr unsigned int ODCFEGFDIMM_TypeDefinitionIndex = 61150;

	class ODCFEGFDIMM : public ::RPG::Client::LoginPhase
	{
	public:
		::RPG::Client::Promises::Promise* LOIMNCDDIJP; // 0x28
		::UnityEngine::Coroutine* NNHJIAKEKBG; // 0x30
		::KNKPLOGICFO* PCOMMLHHNOA; // 0x38
		::UnityEngine::Coroutine* MBNHHJDLHFI; // 0x40
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

		::System::Void __InitAudioPck_b__12_0(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___INITAUDIOPCK_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Void __InitGame_b__13_0(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___INITGAME_B__13_0_OFFSET))(this, a1, a2);
		}

		::System::Void __EnableLoginButton_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___ENABLELOGINBUTTON_B__14_0_OFFSET))(this);
		}

	};
