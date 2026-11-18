#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PNHPNNENFLI_CCNMNOOOFCL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D9D6DF0)
#define PNHPNNENFLI_CCNMNOOOFCL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D9D6E20)
#define PNHPNNENFLI_CCNMNOOOFCL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D9D6B60)
#define PNHPNNENFLI_CCNMNOOOFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D6B50)

inline static constexpr unsigned int PNHPNNENFLI_CCNMNOOOFCL_TypeDefinitionIndex = 67270;

class PNHPNNENFLI_CCNMNOOOFCL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CCNMNOOOFCL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CCNMNOOOFCL_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CCNMNOOOFCL_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PNHPNNENFLI_CCNMNOOOFCL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
