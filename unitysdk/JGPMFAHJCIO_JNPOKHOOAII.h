#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class HDJJJGCHLEE;
class JGPMFAHJCIO;
class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JGPMFAHJCIO_JNPOKHOOAII_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15263000)
#define JGPMFAHJCIO_JNPOKHOOAII_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x152630A0)
#define JGPMFAHJCIO_JNPOKHOOAII_INVOKE_OFFSET UNITYSDK_OFFSET(0x152629E0)
#define JGPMFAHJCIO_JNPOKHOOAII__CTOR_OFFSET UNITYSDK_OFFSET(0x152629D0)

inline static constexpr unsigned int JGPMFAHJCIO_JNPOKHOOAII_TypeDefinitionIndex = 81403;

class JGPMFAHJCIO_JNPOKHOOAII : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JGPMFAHJCIO_JNPOKHOOAII__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::JGPMFAHJCIO* GJBHEJGENMI, ::System::Single JFLHDBCKGGF)
	{
		return ((::System::Void(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::JGPMFAHJCIO*, ::System::Single))((::PBYTE)hIl2Cpp + JGPMFAHJCIO_JNPOKHOOAII_INVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JFLHDBCKGGF);
	}

	::System::IAsyncResult* BeginInvoke(::HDJJJGCHLEE* GHOGJBEFACH, ::MHFGFMELFLB* HBMGHPEPBNC, ::JGPMFAHJCIO* GJBHEJGENMI, ::System::Single JFLHDBCKGGF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::HDJJJGCHLEE*, ::MHFGFMELFLB*, ::JGPMFAHJCIO*, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JGPMFAHJCIO_JNPOKHOOAII_BEGININVOKE_OFFSET))(this, GHOGJBEFACH, HBMGHPEPBNC, GJBHEJGENMI, JFLHDBCKGGF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JGPMFAHJCIO_JNPOKHOOAII_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
