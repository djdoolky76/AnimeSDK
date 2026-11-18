#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CIIBMFNMPCG_JBPIMNFHHFN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x145543D0)
#define CIIBMFNMPCG_JBPIMNFHHFN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14554440)
#define CIIBMFNMPCG_JBPIMNFHHFN_INVOKE_OFFSET UNITYSDK_OFFSET(0x145540D0)
#define CIIBMFNMPCG_JBPIMNFHHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x145540C0)

inline static constexpr unsigned int CIIBMFNMPCG_JBPIMNFHHFN_TypeDefinitionIndex = 82681;

class CIIBMFNMPCG_JBPIMNFHHFN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_JBPIMNFHHFN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::String* Invoke(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_JBPIMNFHHFN_INVOKE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 ABHBKFJKINO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_JBPIMNFHHFN_BEGININVOKE_OFFSET))(this, ABHBKFJKINO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::String* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_JBPIMNFHHFN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
