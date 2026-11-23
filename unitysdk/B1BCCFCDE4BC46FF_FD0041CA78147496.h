#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACCD4AE635058D88;
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class String; }

#define B1BCCFCDE4BC46FF_FD0041CA78147496_EFF1B9987323736F_OFFSET UNITYSDK_OFFSET(0x2A1C100)
#define B1BCCFCDE4BC46FF_FD0041CA78147496__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1BCCFCDE4BC46FF_FD0041CA78147496_TypeDefinitionIndex = 15903;

class B1BCCFCDE4BC46FF_FD0041CA78147496 : public ::System::Object
{
public:
	::ACCD4AE635058D88* F70AC30395956F92; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1BCCFCDE4BC46FF_FD0041CA78147496__CTOR_OFFSET))(this);
	}

	::System::Void EFF1B9987323736F(::MiHoYo::SDK::MiHoYoSDKWebView* B5F62894A37965D9, ::System::String* B960AC235824C6C8, ::System::Int32 B3F53603F39CD6A9, ::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + B1BCCFCDE4BC46FF_FD0041CA78147496_EFF1B9987323736F_OFFSET))(this, B5F62894A37965D9, B960AC235824C6C8, B3F53603F39CD6A9, A7714DE08D5D7E93);
	}
};
