#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COJCEEHGOFM_KHHBEGIABOH.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define HFCJJLJCCIG_JPLCFOHALOO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16CEB5A0)
#define HFCJJLJCCIG_JPLCFOHALOO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16CEB610)
#define HFCJJLJCCIG_JPLCFOHALOO_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CEB2A0)
#define HFCJJLJCCIG_JPLCFOHALOO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEB290)

inline static constexpr unsigned int HFCJJLJCCIG_JPLCFOHALOO_TypeDefinitionIndex = 86336;

class HFCJJLJCCIG_JPLCFOHALOO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HFCJJLJCCIG_JPLCFOHALOO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::String* Invoke(::COJCEEHGOFM_KHHBEGIABOH JKBLDFBGBPK)
	{
		return ((::System::String*(*)(::PVOID, ::COJCEEHGOFM_KHHBEGIABOH))((::PBYTE)hIl2Cpp + HFCJJLJCCIG_JPLCFOHALOO_INVOKE_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::IAsyncResult* BeginInvoke(::COJCEEHGOFM_KHHBEGIABOH JKBLDFBGBPK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::COJCEEHGOFM_KHHBEGIABOH, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HFCJJLJCCIG_JPLCFOHALOO_BEGININVOKE_OFFSET))(this, JKBLDFBGBPK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::String* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HFCJJLJCCIG_JPLCFOHALOO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
