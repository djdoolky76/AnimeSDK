#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console { class ProtocolManager; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD49D10)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD49D00)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1DD48C10)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x1DD49760)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1DD48540)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1DD48530)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x1DD48990)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x1DD48930)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x1DD48E60)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1DD49C10)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1DD49900)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1DD49470)
#define MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1DD497F0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 9001;

	class ProtocolManager : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* _latestProtocolInfo; // 0x10
		static ::MiHoYo::SDK::Console::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ProtocolManager**)UnitySDK::FromName("MiHoYo.SDK.Console", "ProtocolManager")->GetStaticField(0x3E640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_LatestProtocolInfo()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET))(this);
		}

		::System::Void GetServerProtocolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, a1);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, a1);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::String* GetProtocolVersionKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, a1);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, a1, a2);
		}

		::System::String* LoadProtocolInfoData(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, a1);
		}

	};
}
