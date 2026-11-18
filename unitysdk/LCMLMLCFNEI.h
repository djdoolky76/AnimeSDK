#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBILDAHPBOH.h"
#include "unitysdk/System/MulticastDelegate.h"

class BLCIDFMMHIL;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LCMLMLCFNEI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A2ED3F0)
#define LCMLMLCFNEI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A2ED470)
#define LCMLMLCFNEI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A2ED0D0)
#define LCMLMLCFNEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2ED0C0)

inline static constexpr unsigned int LCMLMLCFNEI_TypeDefinitionIndex = 57979;

class LCMLMLCFNEI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LCMLMLCFNEI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BLCIDFMMHIL*& ECMMKCJLBMD, ::FBILDAHPBOH& OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*&, ::FBILDAHPBOH&))((::PBYTE)hIl2Cpp + LCMLMLCFNEI_INVOKE_OFFSET))(this, ECMMKCJLBMD, OBNIAHNMHPF);
	}

	::System::IAsyncResult* BeginInvoke(::BLCIDFMMHIL*& ECMMKCJLBMD, ::FBILDAHPBOH& OBNIAHNMHPF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BLCIDFMMHIL*&, ::FBILDAHPBOH&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LCMLMLCFNEI_BEGININVOKE_OFFSET))(this, ECMMKCJLBMD, OBNIAHNMHPF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::BLCIDFMMHIL*& ECMMKCJLBMD, ::FBILDAHPBOH& OBNIAHNMHPF, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*&, ::FBILDAHPBOH&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LCMLMLCFNEI_ENDINVOKE_OFFSET))(this, ECMMKCJLBMD, OBNIAHNMHPF, IGAAKDOIPNN);
	}
};
