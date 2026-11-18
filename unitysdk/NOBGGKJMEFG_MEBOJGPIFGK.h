#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class JJKEGEMHDGD;
class KBFCHHGAPFP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NOBGGKJMEFG_MEBOJGPIFGK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE7786C0)
#define NOBGGKJMEFG_MEBOJGPIFGK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE778700)
#define NOBGGKJMEFG_MEBOJGPIFGK_INVOKE_OFFSET UNITYSDK_OFFSET(0xE778120)
#define NOBGGKJMEFG_MEBOJGPIFGK__CTOR_OFFSET UNITYSDK_OFFSET(0xE778110)

inline static constexpr unsigned int NOBGGKJMEFG_MEBOJGPIFGK_TypeDefinitionIndex = 46801;

class NOBGGKJMEFG_MEBOJGPIFGK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MEBOJGPIFGK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KBFCHHGAPFP* PHNCGEEHFFH, ::JJKEGEMHDGD* CECLAKEIAIL)
	{
		return ((::System::Void(*)(::PVOID, ::KBFCHHGAPFP*, ::JJKEGEMHDGD*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MEBOJGPIFGK_INVOKE_OFFSET))(this, PHNCGEEHFFH, CECLAKEIAIL);
	}

	::System::IAsyncResult* BeginInvoke(::KBFCHHGAPFP* PHNCGEEHFFH, ::JJKEGEMHDGD* CECLAKEIAIL, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KBFCHHGAPFP*, ::JJKEGEMHDGD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MEBOJGPIFGK_BEGININVOKE_OFFSET))(this, PHNCGEEHFFH, CECLAKEIAIL, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NOBGGKJMEFG_MEBOJGPIFGK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
