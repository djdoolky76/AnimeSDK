#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NCCGOIBPBGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1157DFF0)
#define NCCGOIBPBGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1157E020)
#define NCCGOIBPBGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1157DD60)
#define NCCGOIBPBGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1157DD50)

inline static constexpr unsigned int NCCGOIBPBGE_TypeDefinitionIndex = 65496;

class NCCGOIBPBGE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NCCGOIBPBGE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCGOIBPBGE_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NCCGOIBPBGE_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NCCGOIBPBGE_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
