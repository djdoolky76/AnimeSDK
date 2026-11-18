#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PHGIJHEPAOH_FFCONGKEKPD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FDBEB50)
#define PHGIJHEPAOH_FFCONGKEKPD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FDBEB80)
#define PHGIJHEPAOH_FFCONGKEKPD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FDBE8B0)
#define PHGIJHEPAOH_FFCONGKEKPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBEB40)

inline static constexpr unsigned int PHGIJHEPAOH_FFCONGKEKPD_TypeDefinitionIndex = 28189;

class PHGIJHEPAOH_FFCONGKEKPD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PHGIJHEPAOH_FFCONGKEKPD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGIJHEPAOH_FFCONGKEKPD_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PHGIJHEPAOH_FFCONGKEKPD_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PHGIJHEPAOH_FFCONGKEKPD_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
