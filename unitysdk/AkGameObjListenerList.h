#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BF838EAF3DACDAFA.h"

class AkAudioListener;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x2918940)
#define AKGAMEOBJLISTENERLIST_INIT_OFFSET UNITYSDK_OFFSET(0x2918A20)
#define AKGAMEOBJLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x2918B90)
#define AKGAMEOBJLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x2918C70)

inline static constexpr unsigned int AkGameObjListenerList_TypeDefinitionIndex = 20437;

class AkGameObjListenerList : public ::AkAudioListener_BF838EAF3DACDAFA
{
public:
	::AkGameObj* akGameObj; // 0x20
	::System::Collections::Generic::List_1<::AkAudioListener*>* initialListenerList; // 0x28
	::System::Boolean useDefaultListeners; // 0x30

	::System::Boolean Remove(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_REMOVE_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Void Init(::AkGameObj* AF91C540DAC3462A)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_INIT_OFFSET))(this, AF91C540DAC3462A);
	}

	::System::Boolean Add(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_ADD_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST__CTOR_OFFSET))(this);
	}
};
