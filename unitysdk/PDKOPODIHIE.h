#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/GEJADGCJEBG.h"

class CPJHOPDANAJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PDKOPODIHIE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178B9A90)
#define PDKOPODIHIE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x178B9B00)
#define PDKOPODIHIE_INVOKE_OFFSET UNITYSDK_OFFSET(0x178B95C0)
#define PDKOPODIHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x178B95B0)

inline static constexpr unsigned int PDKOPODIHIE_TypeDefinitionIndex = 93141;

class PDKOPODIHIE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PDKOPODIHIE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::CPJHOPDANAJ* Invoke(::GEJADGCJEBG AAOCANGHBDG)
	{
		return ((::CPJHOPDANAJ*(*)(::PVOID, ::GEJADGCJEBG))((::PBYTE)hIl2Cpp + PDKOPODIHIE_INVOKE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::IAsyncResult* BeginInvoke(::GEJADGCJEBG AAOCANGHBDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::GEJADGCJEBG, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PDKOPODIHIE_BEGININVOKE_OFFSET))(this, AAOCANGHBDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::CPJHOPDANAJ* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::CPJHOPDANAJ*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PDKOPODIHIE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
