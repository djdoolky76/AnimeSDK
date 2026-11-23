#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Session.h"
#include "unitysdk/HoudiniEngineUnity/SessionConnectionState.h"
#include "unitysdk/HoudiniEngineUnity/SessionMode.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_SessionSyncData; }
namespace System { class String; }
namespace System { class Type; }

#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET UNITYSDK_OFFSET(0x165A3B0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET UNITYSDK_OFFSET(0x1FAADA0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x381BD10)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x381BDA0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET UNITYSDK_OFFSET(0x16A7BD0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x381BCC0)
#define HOUDINIENGINEUNITY_HEU_SESSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x381BD00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SessionData_TypeDefinitionIndex = 17919;

	class HEU_SessionData : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_INVALID_SESSION_ID()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(HEU_SessionData_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::HoudiniEngineUnity::HAPI_Session _HAPISession; // 0x10
		::System::Int32 _serverProcessID; // 0x20
		::System::Boolean _initialized; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* _pipeName; // 0x28
		::System::Int32 _port; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* _sessionClassType; // 0x38
		::System::Boolean _isDefaultSession; // 0x40
		::System::Byte _padding2[0x7];
		::HoudiniEngineUnity::HEU_SessionSyncData* _sessionSync; // 0x48
		::HoudiniEngineUnity::SessionConnectionState _connectionState; // 0x50
		::HoudiniEngineUnity::SessionMode _sessionMode; // 0x54

		::HoudiniEngineUnity::SessionConnectionState get_ThisConnectionMode()
		{
			return ((::HoudiniEngineUnity::SessionConnectionState(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_THISCONNECTIONMODE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISDEFAULTSESSION_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsSessionSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_ISSESSIONSYNC_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA__CTOR_OFFSET))(this);
		}

		::System::Int64 get_SessionID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONID_OFFSET))(this);
		}

		::System::Type* get_SessionClassType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SESSIONDATA_GET_SESSIONCLASSTYPE_OFFSET))(this);
		}
	};
}
