#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GDFDDNKFCOI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA0630)
#define GDFDDNKFCOI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA0660)
#define GDFDDNKFCOI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA0390)
#define GDFDDNKFCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA0380)

inline static constexpr unsigned int GDFDDNKFCOI_TypeDefinitionIndex = 29021;

class GDFDDNKFCOI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GDFDDNKFCOI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::UInt64 Invoke()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFDDNKFCOI_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GDFDDNKFCOI_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::UInt64 EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GDFDDNKFCOI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
