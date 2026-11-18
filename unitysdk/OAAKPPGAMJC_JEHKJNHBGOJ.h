#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CLFBLCIJPKD_PEPKKBJMJCD;
class KAJAGPBJADH;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OAAKPPGAMJC_JEHKJNHBGOJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x114E2BF0)
#define OAAKPPGAMJC_JEHKJNHBGOJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x114E2C70)
#define OAAKPPGAMJC_JEHKJNHBGOJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x114E28D0)
#define OAAKPPGAMJC_JEHKJNHBGOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x114E28C0)

inline static constexpr unsigned int OAAKPPGAMJC_JEHKJNHBGOJ_TypeDefinitionIndex = 72502;

class OAAKPPGAMJC_JEHKJNHBGOJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OAAKPPGAMJC_JEHKJNHBGOJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::CLFBLCIJPKD_PEPKKBJMJCD* Invoke(::System::Int32 CLACNEMIOBA, ::KAJAGPBJADH* AJFHCAJJNOH)
	{
		return ((::CLFBLCIJPKD_PEPKKBJMJCD*(*)(::PVOID, ::System::Int32, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + OAAKPPGAMJC_JEHKJNHBGOJ_INVOKE_OFFSET))(this, CLACNEMIOBA, AJFHCAJJNOH);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 CLACNEMIOBA, ::KAJAGPBJADH* AJFHCAJJNOH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::KAJAGPBJADH*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OAAKPPGAMJC_JEHKJNHBGOJ_BEGININVOKE_OFFSET))(this, CLACNEMIOBA, AJFHCAJJNOH, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::CLFBLCIJPKD_PEPKKBJMJCD* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::CLFBLCIJPKD_PEPKKBJMJCD*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OAAKPPGAMJC_JEHKJNHBGOJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
