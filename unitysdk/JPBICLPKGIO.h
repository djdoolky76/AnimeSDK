#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JPBICLPKGIO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19476D60)
#define JPBICLPKGIO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19476DF0)
#define JPBICLPKGIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x19476A50)
#define JPBICLPKGIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19476A40)

inline static constexpr unsigned int JPBICLPKGIO_TypeDefinitionIndex = 50834;

class JPBICLPKGIO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JPBICLPKGIO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JPBICLPKGIO_INVOKE_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JPBICLPKGIO_BEGININVOKE_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JPBICLPKGIO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
