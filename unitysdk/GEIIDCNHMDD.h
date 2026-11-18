#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CDNGFHNAGKM;
class OKHLOBHHGGI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GEIIDCNHMDD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEA720)
#define GEIIDCNHMDD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEA750)
#define GEIIDCNHMDD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEA200)
#define GEIIDCNHMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEA1F0)

inline static constexpr unsigned int GEIIDCNHMDD_TypeDefinitionIndex = 28768;

class GEIIDCNHMDD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GEIIDCNHMDD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::CDNGFHNAGKM* Invoke(::OKHLOBHHGGI* PMKPCJGAKKB)
	{
		return ((::CDNGFHNAGKM*(*)(::PVOID, ::OKHLOBHHGGI*))((::PBYTE)hIl2Cpp + GEIIDCNHMDD_INVOKE_OFFSET))(this, PMKPCJGAKKB);
	}

	::System::IAsyncResult* BeginInvoke(::OKHLOBHHGGI* PMKPCJGAKKB, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::OKHLOBHHGGI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GEIIDCNHMDD_BEGININVOKE_OFFSET))(this, PMKPCJGAKKB, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::CDNGFHNAGKM* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::CDNGFHNAGKM*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GEIIDCNHMDD_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
