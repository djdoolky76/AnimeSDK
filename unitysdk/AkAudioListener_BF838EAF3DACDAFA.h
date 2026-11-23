#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkAudioListener;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_BF838EAF3DACDAFA_E1FC5B03E68AA828_OFFSET UNITYSDK_OFFSET(0x2928930)
#define AKAUDIOLISTENER_BF838EAF3DACDAFA_EEB1E08B08CB4A40_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define AKAUDIOLISTENER_BF838EAF3DACDAFA_FB89F4D60C29B43F_OFFSET UNITYSDK_OFFSET(0x2928A90)
#define AKAUDIOLISTENER_BF838EAF3DACDAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x2928B60)

inline static constexpr unsigned int AkAudioListener_BF838EAF3DACDAFA_TypeDefinitionIndex = 20470;

class AkAudioListener_BF838EAF3DACDAFA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* F16D9AC9A8C6A462; // 0x10
	::System::Collections::Generic::List_1<::AkAudioListener*>* F9279096BC792E19; // 0x18

	::System::Collections::Generic::List_1<::AkAudioListener*>* EEB1E08B08CB4A40()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BF838EAF3DACDAFA_EEB1E08B08CB4A40_OFFSET))(this);
	}

	::System::Boolean E1FC5B03E68AA828(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BF838EAF3DACDAFA_E1FC5B03E68AA828_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Boolean FB89F4D60C29B43F(::AkAudioListener* BF907075E0691EF3)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BF838EAF3DACDAFA_FB89F4D60C29B43F_OFFSET))(this, BF907075E0691EF3);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BF838EAF3DACDAFA__CTOR_OFFSET))(this);
	}
};
