#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ELOCBOPDNAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11CB7F70)
#define ELOCBOPDNAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11CB7FA0)
#define ELOCBOPDNAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x11CB7A50)
#define ELOCBOPDNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB7A40)

inline static constexpr unsigned int ELOCBOPDNAL_TypeDefinitionIndex = 60009;

class ELOCBOPDNAL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ELOCBOPDNAL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::String* FAELKDHFDOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELOCBOPDNAL_INVOKE_OFFSET))(this, FAELKDHFDOP);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* FAELKDHFDOP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ELOCBOPDNAL_BEGININVOKE_OFFSET))(this, FAELKDHFDOP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ELOCBOPDNAL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
