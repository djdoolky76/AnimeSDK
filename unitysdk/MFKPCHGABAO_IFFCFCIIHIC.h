#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BGADAPCBDFJ;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MFKPCHGABAO_IFFCFCIIHIC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15E2AD10)
#define MFKPCHGABAO_IFFCFCIIHIC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15E2AD40)
#define MFKPCHGABAO_IFFCFCIIHIC_INVOKE_OFFSET UNITYSDK_OFFSET(0x15E2AA20)
#define MFKPCHGABAO_IFFCFCIIHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2AA10)

inline static constexpr unsigned int MFKPCHGABAO_IFFCFCIIHIC_TypeDefinitionIndex = 72528;

class MFKPCHGABAO_IFFCFCIIHIC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MFKPCHGABAO_IFFCFCIIHIC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BGADAPCBDFJ*& ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::BGADAPCBDFJ*&))((::PBYTE)hIl2Cpp + MFKPCHGABAO_IFFCFCIIHIC_INVOKE_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::IAsyncResult* BeginInvoke(::BGADAPCBDFJ*& ECMMKCJLBMD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BGADAPCBDFJ*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MFKPCHGABAO_IFFCFCIIHIC_BEGININVOKE_OFFSET))(this, ECMMKCJLBMD, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::BGADAPCBDFJ*& ECMMKCJLBMD, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::BGADAPCBDFJ*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MFKPCHGABAO_IFFCFCIIHIC_ENDINVOKE_OFFSET))(this, ECMMKCJLBMD, IGAAKDOIPNN);
	}
};
