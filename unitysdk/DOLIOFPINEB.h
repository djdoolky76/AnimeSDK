#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DOLIOFPINEB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1587FC10)
#define DOLIOFPINEB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1587FC80)
#define DOLIOFPINEB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1587F8E0)
#define DOLIOFPINEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1587F8D0)

inline static constexpr unsigned int DOLIOFPINEB_TypeDefinitionIndex = 58654;

class DOLIOFPINEB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DOLIOFPINEB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Single Invoke(::System::Single GALBDCDBCOP)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOLIOFPINEB_INVOKE_OFFSET))(this, GALBDCDBCOP);
	}

	::System::IAsyncResult* BeginInvoke(::System::Single GALBDCDBCOP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DOLIOFPINEB_BEGININVOKE_OFFSET))(this, GALBDCDBCOP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Single EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Single(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DOLIOFPINEB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
