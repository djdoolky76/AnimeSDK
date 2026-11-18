#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFFLCBGIGNO.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/NJNGHAOBGCA.h"
#include "unitysdk/OAIBKEECKEP.h"

class CLNGHONFNHE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LLFEPJOMMMP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F30ED50)
#define LLFEPJOMMMP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F30EDF0)
#define LLFEPJOMMMP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F30E780)
#define LLFEPJOMMMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F30E770)

inline static constexpr unsigned int LLFEPJOMMMP_TypeDefinitionIndex = 28700;

class LLFEPJOMMMP : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LLFEPJOMMMP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::IFFLCBGIGNO Invoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI)
	{
		return ((::IFFLCBGIGNO(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&))((::PBYTE)hIl2Cpp + LLFEPJOMMMP_INVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI);
	}

	::System::IAsyncResult* BeginInvoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LLFEPJOMMMP_BEGININVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::IFFLCBGIGNO EndInvoke(::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::IFFLCBGIGNO(*)(::PVOID, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LLFEPJOMMMP_ENDINVOKE_OFFSET))(this, HBMGHPEPBNC, NAJBLDOCOAI, IGAAKDOIPNN);
	}
};
