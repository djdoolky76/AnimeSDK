#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/NJNGHAOBGCA.h"
#include "unitysdk/OAIBKEECKEP.h"

class CLNGHONFNHE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PFHKPPECKKD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA9230)
#define PFHKPPECKKD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA92D0)
#define PFHKPPECKKD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFA8C70)
#define PFHKPPECKKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA8C60)

inline static constexpr unsigned int PFHKPPECKKD_TypeDefinitionIndex = 28816;

class PFHKPPECKKD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PFHKPPECKKD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI)
	{
		return ((::System::Void(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&))((::PBYTE)hIl2Cpp + PFHKPPECKKD_INVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI);
	}

	::System::IAsyncResult* BeginInvoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PFHKPPECKKD_BEGININVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PFHKPPECKKD_ENDINVOKE_OFFSET))(this, HBMGHPEPBNC, NAJBLDOCOAI, IGAAKDOIPNN);
	}
};
