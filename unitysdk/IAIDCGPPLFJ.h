#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFFLCBGIGNO.h"
#include "unitysdk/LNFNHIDAGBE.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/NJNGHAOBGCA.h"
#include "unitysdk/OAIBKEECKEP.h"

class CLNGHONFNHE;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IAIDCGPPLFJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F7A3BA0)
#define IAIDCGPPLFJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F7A3C80)
#define IAIDCGPPLFJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7A34D0)
#define IAIDCGPPLFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A34C0)

inline static constexpr unsigned int IAIDCGPPLFJ_TypeDefinitionIndex = 28805;

class IAIDCGPPLFJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IAIDCGPPLFJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::LNFNHIDAGBE FKMHMOELCIO, ::IFFLCBGIGNO KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::LNFNHIDAGBE, ::IFFLCBGIGNO))((::PBYTE)hIl2Cpp + IAIDCGPPLFJ_INVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI, FKMHMOELCIO, KKMENMCMMBN);
	}

	::System::IAsyncResult* BeginInvoke(::CLNGHONFNHE* BMEPJBGGDFN, ::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::LNFNHIDAGBE FKMHMOELCIO, ::IFFLCBGIGNO KKMENMCMMBN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CLNGHONFNHE*, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::LNFNHIDAGBE, ::IFFLCBGIGNO, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IAIDCGPPLFJ_BEGININVOKE_OFFSET))(this, BMEPJBGGDFN, HBMGHPEPBNC, NAJBLDOCOAI, FKMHMOELCIO, KKMENMCMMBN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::NJNGHAOBGCA& HBMGHPEPBNC, ::OAIBKEECKEP& NAJBLDOCOAI, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::NJNGHAOBGCA&, ::OAIBKEECKEP&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IAIDCGPPLFJ_ENDINVOKE_OFFSET))(this, HBMGHPEPBNC, NAJBLDOCOAI, IGAAKDOIPNN);
	}
};
