#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
class NMGLDNNFHFB;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }

#define RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET UNITYSDK_OFFSET(0xEB1D610)
#define RPG_CLIENT_SERVERSELECTPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xEB1CE80)
#define RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB1CF00)
#define RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xEB1CFB0)
#define RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xEB1D560)
#define RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEB1D480)
#define RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xEB1D4E0)
#define RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET UNITYSDK_OFFSET(0xEB1D1F0)
#define RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xEB1CF50)
#define RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0xEB1DB30)
#define RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0xEB1D750)
#define RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET UNITYSDK_OFFSET(0xEB1DE60)
#define RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEB1DD80)
#define RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0xEB1D5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerSelectPhase_TypeDefinitionIndex = 62548;

	class ServerSelectPhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartServerLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CheckUpdateIFix()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CheckServerState(::NMGLDNNFHFB* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::NMGLDNNFHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ServerSelectComplete()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ReportLocalAssetInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET))(this);
		}

	};
}
