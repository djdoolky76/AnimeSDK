#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class ProtocolManager; }
namespace System { class String; }

#define MIHOYO_SDK_PS_PROTOCOLMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF5FC80)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5FC70)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1AF5EB80)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x1AF5F6D0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1AF5E500)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1AF5E4F0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x1AF5E900)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET UNITYSDK_OFFSET(0x1AF5E8A0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET UNITYSDK_OFFSET(0x1AF5EDD0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1AF5FB80)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1AF5F870)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET UNITYSDK_OFFSET(0x1AF5F3E0)
#define MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET UNITYSDK_OFFSET(0x1AF5F760)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 8933;

	class ProtocolManager : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* _latestProtocolInfo; // 0x10
		static ::MiHoYo::SDK::PS::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::ProtocolManager**)UnitySDK::FromName("MiHoYo.SDK.PS", "ProtocolManager")->GetStaticField(0x17BE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::JSONNode* get_LatestProtocolInfo()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GET_LATESTPROTOCOLINFO_OFFSET))(this);
		}

		::System::Void GetServerProtocolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETSERVERPROTOCOLINFO_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTENABLED_OFFSET))(this);
		}

		::System::Boolean IsUserAgreementAcceptedLocally(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTACCEPTEDLOCALLY_OFFSET))(this, a1);
		}

		::System::Boolean IsUserAgreementUpdated(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ISUSERAGREEMENTUPDATED_OFFSET))(this, a1);
		}

		::System::Void SaveLatestProtocolInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVELATESTPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::Void OnGetLatestProtocol(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_ONGETLATESTPROTOCOL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetLocalProtocolInfo(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETLOCALPROTOCOLINFO_OFFSET))(this, a1);
		}

		::System::String* GetProtocolVersionKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, a1);
		}

		::System::Boolean SaveProtocolInfoData(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_SAVEPROTOCOLINFODATA_OFFSET))(this, a1, a2);
		}

		::System::String* LoadProtocolInfoData(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PROTOCOLMANAGER_LOADPROTOCOLINFODATA_OFFSET))(this, a1);
		}

	};
}
