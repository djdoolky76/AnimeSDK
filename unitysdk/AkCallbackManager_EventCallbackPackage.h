#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FF4E7A0)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1FF4E990)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF4E660)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4E790)

inline static constexpr unsigned int AkCallbackManager_EventCallbackPackage_TypeDefinitionIndex = 33233;

class AkCallbackManager_EventCallbackPackage : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::System::Object*>** StaticGet_m_Pool()
	{
		return (::System::Collections::Generic::Stack_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_EventCallbackPackage_TypeDefinitionIndex)->GetStaticField(0x29D60);
	}
	// static const ::System::Int32 POOL_SIZE = 0x400; // 0x0
	::System::Object* m_Cookie; // 0x10
	::AkCallbackManager_EventCallback* m_Callback; // 0x18
	::System::Boolean m_bNotifyEndOfEvent; // 0x20
	::System::Byte _padding0[0x3];
	::System::UInt32 m_playingID; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}

	static ::AkCallbackManager_EventCallbackPackage* Create(::AkCallbackManager_EventCallback* in_cb, ::System::Object* in_cookie, ::System::UInt32& io_Flags)
	{
		return ((::AkCallbackManager_EventCallbackPackage*(*)(::AkCallbackManager_EventCallback*, ::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET))(in_cb, in_cookie, io_Flags);
	}

	static ::System::Void Recycle(::AkCallbackManager_EventCallbackPackage* evt)
	{
		return ((::System::Void(*)(::AkCallbackManager_EventCallbackPackage*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_RECYCLE_OFFSET))(evt);
	}
};
