#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFIEIBPFID.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PCAPBLPGMJM_DICANIBIMLM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11954980)
#define PCAPBLPGMJM_DICANIBIMLM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11954A10)
#define PCAPBLPGMJM_DICANIBIMLM_INVOKE_OFFSET UNITYSDK_OFFSET(0x11954670)
#define PCAPBLPGMJM_DICANIBIMLM__CTOR_OFFSET UNITYSDK_OFFSET(0x11954660)

inline static constexpr unsigned int PCAPBLPGMJM_DICANIBIMLM_TypeDefinitionIndex = 41795;

class PCAPBLPGMJM_DICANIBIMLM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_DICANIBIMLM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 MGMDLMBEDJF, ::EMFIEIBPFID JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EMFIEIBPFID))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_DICANIBIMLM_INVOKE_OFFSET))(this, MGMDLMBEDJF, JKBLDFBGBPK);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 MGMDLMBEDJF, ::EMFIEIBPFID JKBLDFBGBPK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::EMFIEIBPFID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_DICANIBIMLM_BEGININVOKE_OFFSET))(this, MGMDLMBEDJF, JKBLDFBGBPK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PCAPBLPGMJM_DICANIBIMLM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
