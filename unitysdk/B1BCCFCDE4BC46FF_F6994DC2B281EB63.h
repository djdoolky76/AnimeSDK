#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACCD4AE635058D88;
namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class String; }

#define B1BCCFCDE4BC46FF_F6994DC2B281EB63_EC9FD0C61974BEBC_OFFSET UNITYSDK_OFFSET(0x2A1C1D0)
#define B1BCCFCDE4BC46FF_F6994DC2B281EB63__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1BCCFCDE4BC46FF_F6994DC2B281EB63_TypeDefinitionIndex = 15908;

class B1BCCFCDE4BC46FF_F6994DC2B281EB63 : public ::System::Object
{
public:
	::ACCD4AE635058D88* F70AC30395956F92; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1BCCFCDE4BC46FF_F6994DC2B281EB63__CTOR_OFFSET))(this);
	}

	::System::Void EC9FD0C61974BEBC(::MiHoYo::SDK::MiHoYoSDKWebView* B5F62894A37965D9, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::System::String*))((::PBYTE)hIl2Cpp + B1BCCFCDE4BC46FF_F6994DC2B281EB63_EC9FD0C61974BEBC_OFFSET))(this, B5F62894A37965D9, B960AC235824C6C8);
	}
};
