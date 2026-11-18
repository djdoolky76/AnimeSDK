#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class KPNIFGIKELE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FOOFMPKNKKJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E7A710)
#define FOOFMPKNKKJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E7A740)
#define FOOFMPKNKKJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E7A1F0)
#define FOOFMPKNKKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7A1E0)

inline static constexpr unsigned int FOOFMPKNKKJ_TypeDefinitionIndex = 48616;

class FOOFMPKNKKJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FOOFMPKNKKJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KPNIFGIKELE* FDFJBOLAALK)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + FOOFMPKNKKJ_INVOKE_OFFSET))(this, FDFJBOLAALK);
	}

	::System::IAsyncResult* BeginInvoke(::KPNIFGIKELE* FDFJBOLAALK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KPNIFGIKELE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FOOFMPKNKKJ_BEGININVOKE_OFFSET))(this, FDFJBOLAALK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FOOFMPKNKKJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
