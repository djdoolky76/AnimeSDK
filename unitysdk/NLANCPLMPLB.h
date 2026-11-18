#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NLANCPLMPLB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1729A5E0)
#define NLANCPLMPLB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1729A650)
#define NLANCPLMPLB_INVOKE_OFFSET UNITYSDK_OFFSET(0x1729A1F0)
#define NLANCPLMPLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1729A1E0)

inline static constexpr unsigned int NLANCPLMPLB_TypeDefinitionIndex = 87862;

class NLANCPLMPLB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NLANCPLMPLB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::JOHNONOOOCH Invoke(::CKMMPOGHDFI& HODAIDNDKHD)
	{
		return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + NLANCPLMPLB_INVOKE_OFFSET))(this, HODAIDNDKHD);
	}

	::System::IAsyncResult* BeginInvoke(::CKMMPOGHDFI& HODAIDNDKHD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::CKMMPOGHDFI&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NLANCPLMPLB_BEGININVOKE_OFFSET))(this, HODAIDNDKHD, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::JOHNONOOOCH EndInvoke(::CKMMPOGHDFI& HODAIDNDKHD, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NLANCPLMPLB_ENDINVOKE_OFFSET))(this, HODAIDNDKHD, IGAAKDOIPNN);
	}
};
