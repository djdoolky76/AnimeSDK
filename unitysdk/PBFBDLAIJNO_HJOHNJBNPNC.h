#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PBFBDLAIJNO_HJOHNJBNPNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13A834F0)
#define PBFBDLAIJNO_HJOHNJBNPNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13A83520)
#define PBFBDLAIJNO_HJOHNJBNPNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A83260)
#define PBFBDLAIJNO_HJOHNJBNPNC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A83250)

inline static constexpr unsigned int PBFBDLAIJNO_HJOHNJBNPNC_TypeDefinitionIndex = 57123;

class PBFBDLAIJNO_HJOHNJBNPNC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HJOHNJBNPNC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HJOHNJBNPNC_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HJOHNJBNPNC_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_HJOHNJBNPNC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
