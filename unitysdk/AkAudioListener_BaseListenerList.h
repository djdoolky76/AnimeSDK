#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkAudioListener;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_BASELISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1FC94C50)
#define AKAUDIOLISTENER_BASELISTENERLIST_GETLISTENERIDS_OFFSET UNITYSDK_OFFSET(0x1FC94F80)
#define AKAUDIOLISTENER_BASELISTENERLIST_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1FC94C40)
#define AKAUDIOLISTENER_BASELISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1FC94E00)
#define AKAUDIOLISTENER_BASELISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC94FF0)

inline static constexpr unsigned int AkAudioListener_BaseListenerList_TypeDefinitionIndex = 33316;

class AkAudioListener_BaseListenerList : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* listenerIdList; // 0x10
	::System::Collections::Generic::List_1<::AkAudioListener*>* listenerList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkAudioListener*>* get_ListenerList()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_GET_LISTENERLIST_OFFSET))(this);
	}

	::System::Boolean Add(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_ADD_OFFSET))(this, listener);
	}

	::System::Boolean Remove(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_REMOVE_OFFSET))(this, listener);
	}

	::Il2CppArray<::System::UInt64>* GetListenerIds()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_GETLISTENERIDS_OFFSET))(this);
	}
};
