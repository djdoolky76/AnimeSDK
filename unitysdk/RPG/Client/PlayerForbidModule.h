#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJLPAIMJJLE.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class OHLGEHNPAAL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERFORBIDMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B90F0)
#define RPG_CLIENT_PLAYERFORBIDMODULE_GETFORBIDINFO_OFFSET UNITYSDK_OFFSET(0x1E2B8960)
#define RPG_CLIENT_PLAYERFORBIDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1E2B8480)
#define RPG_CLIENT_PLAYERFORBIDMODULE_ISFORBID_OFFSET UNITYSDK_OFFSET(0x1E2B8780)
#define RPG_CLIENT_PLAYERFORBIDMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1E2B8560)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1E2B85F0)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ISFORBIDACTIVE_OFFSET UNITYSDK_OFFSET(0x1E2B8870)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONGETPLAYERFORBIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1E2B8B30)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1E2B8A70)
#define RPG_CLIENT_PLAYERFORBIDMODULE__ONPLAYERFORBIDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1E2B9070)
#define RPG_CLIENT_PLAYERFORBIDMODULE__UPDATEFORBIDLIST_OFFSET UNITYSDK_OFFSET(0x1E2B8BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerForbidModule_TypeDefinitionIndex = 68604;

	class PlayerForbidModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LJLPAIMJJLE, ::OHLGEHNPAAL*>* _ForbidDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsForbid(::LJLPAIMJJLE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJLPAIMJJLE))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_ISFORBID_OFFSET))(this, a1);
		}

		::OHLGEHNPAAL* GetForbidInfo(::LJLPAIMJJLE a1)
		{
			return ((::OHLGEHNPAAL*(*)(::PVOID, ::LJLPAIMJJLE))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE_GETFORBIDINFO_OFFSET))(this, a1);
		}

		::System::Void _OnModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnGetPlayerForbidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONGETPLAYERFORBIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerForbidScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ONPLAYERFORBIDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateForbidList(::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__UPDATEFORBIDLIST_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsForbidActive(::OHLGEHNPAAL* a1)
		{
			return ((::System::Boolean(*)(::OHLGEHNPAAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERFORBIDMODULE__ISFORBIDACTIVE_OFFSET))(a1);
		}

	};
}
