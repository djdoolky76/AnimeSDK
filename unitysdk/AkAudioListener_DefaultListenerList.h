#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"
class AkAudioListener;

#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1EEF65D0)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7180)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EEF6740)

inline static constexpr unsigned int AkAudioListener_DefaultListenerList_TypeDefinitionIndex = 45988;

	class AkAudioListener_DefaultListenerList : public ::AkAudioListener_BaseListenerList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_CTOR_OFFSET))(this);
		}

		::System::Boolean Add(::AkAudioListener* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET))(this, a1);
		}

		::System::Boolean Remove(::AkAudioListener* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET))(this, a1);
		}

	};
