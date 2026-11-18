#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HHMKCBFMIGN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CE964F0)
#define HHMKCBFMIGN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CE96560)
#define HHMKCBFMIGN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CE7EBD0)
#define HHMKCBFMIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE964E0)

inline static constexpr unsigned int HHMKCBFMIGN_TypeDefinitionIndex = 34822;

class HHMKCBFMIGN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HHMKCBFMIGN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + HHMKCBFMIGN_INVOKE_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::IAsyncResult* BeginInvoke(::MNAGAGOHIGH& NFFNEFLKPDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MNAGAGOHIGH&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HHMKCBFMIGN_BEGININVOKE_OFFSET))(this, NFFNEFLKPDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::MNAGAGOHIGH& NFFNEFLKPDG, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HHMKCBFMIGN_ENDINVOKE_OFFSET))(this, NFFNEFLKPDG, IGAAKDOIPNN);
	}
};
