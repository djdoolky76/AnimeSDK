#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class EHGPNGPADCB;
class EPABBKALJPO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OLAMIEEIDPC_NBIFOHMMDEK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16C1CC50)
#define OLAMIEEIDPC_NBIFOHMMDEK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16C1CC80)
#define OLAMIEEIDPC_NBIFOHMMDEK_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C1C730)
#define OLAMIEEIDPC_NBIFOHMMDEK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C720)

inline static constexpr unsigned int OLAMIEEIDPC_NBIFOHMMDEK_TypeDefinitionIndex = 75217;

class OLAMIEEIDPC_NBIFOHMMDEK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_NBIFOHMMDEK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::EPABBKALJPO* Invoke(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::EPABBKALJPO*(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_NBIFOHMMDEK_INVOKE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::IAsyncResult* BeginInvoke(::EHGPNGPADCB* LJBPECKCCEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EHGPNGPADCB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_NBIFOHMMDEK_BEGININVOKE_OFFSET))(this, LJBPECKCCEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::EPABBKALJPO* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::EPABBKALJPO*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OLAMIEEIDPC_NBIFOHMMDEK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
