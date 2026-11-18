#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define PMDFNIFMDAP_DDJLJCOEAPI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F43C310)
#define PMDFNIFMDAP_DDJLJCOEAPI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F43C380)
#define PMDFNIFMDAP_DDJLJCOEAPI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F43C010)
#define PMDFNIFMDAP_DDJLJCOEAPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43C000)

inline static constexpr unsigned int PMDFNIFMDAP_DDJLJCOEAPI_TypeDefinitionIndex = 28708;

class PMDFNIFMDAP_DDJLJCOEAPI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_DDJLJCOEAPI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::String* Invoke(::System::Int32 AEMAHLJGGMO)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_DDJLJCOEAPI_INVOKE_OFFSET))(this, AEMAHLJGGMO);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 AEMAHLJGGMO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_DDJLJCOEAPI_BEGININVOKE_OFFSET))(this, AEMAHLJGGMO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::String* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_DDJLJCOEAPI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
