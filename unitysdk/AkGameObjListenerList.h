#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"
class AkAudioListener;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1EF148A0)
#define AKGAMEOBJLISTENERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF175F0)
#define AKGAMEOBJLISTENERLIST_INIT_OFFSET UNITYSDK_OFFSET(0x1EF15A20)
#define AKGAMEOBJLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EF14A30)
#define AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1EF181F0)

inline static constexpr unsigned int AkGameObjListenerList_TypeDefinitionIndex = 46006;

	class AkGameObjListenerList : public ::AkAudioListener_BaseListenerList
	{
	public:
		::AkGameObj* akGameObj; // 0x20
		::System::Collections::Generic::List_1<::AkAudioListener*>* initialListenerList; // 0x28
		::System::Boolean useDefaultListeners; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_CTOR_OFFSET))(this);
		}

		::System::Void SetUseDefaultListeners(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET))(this, a1);
		}

		::System::Void Init(::AkGameObj* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_INIT_OFFSET))(this, a1);
		}

		::System::Boolean Add(::AkAudioListener* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_ADD_OFFSET))(this, a1);
		}

		::System::Boolean Remove(::AkAudioListener* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_REMOVE_OFFSET))(this, a1);
		}

	};
