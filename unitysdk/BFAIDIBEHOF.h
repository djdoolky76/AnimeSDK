#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class KPNIFGIKELE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BFAIDIBEHOF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1854ECA0)
#define BFAIDIBEHOF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1854ECD0)
#define BFAIDIBEHOF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1854E780)
#define BFAIDIBEHOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1854E770)

inline static constexpr unsigned int BFAIDIBEHOF_TypeDefinitionIndex = 45966;

class BFAIDIBEHOF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BFAIDIBEHOF__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KPNIFGIKELE* FDFJBOLAALK)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFAIDIBEHOF_INVOKE_OFFSET))(this, FDFJBOLAALK);
	}

	::System::IAsyncResult* BeginInvoke(::KPNIFGIKELE* FDFJBOLAALK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KPNIFGIKELE*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BFAIDIBEHOF_BEGININVOKE_OFFSET))(this, FDFJBOLAALK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BFAIDIBEHOF_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
