#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/IEGMIHHJMEP_GGKCBDPBIBF.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IEGMIHHJMEP_LIFKFGOMENL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xEBBD370)
#define IEGMIHHJMEP_LIFKFGOMENL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xEBBD3E0)
#define IEGMIHHJMEP_LIFKFGOMENL_INVOKE_OFFSET UNITYSDK_OFFSET(0xEBBD080)
#define IEGMIHHJMEP_LIFKFGOMENL__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBD070)

inline static constexpr unsigned int IEGMIHHJMEP_LIFKFGOMENL_TypeDefinitionIndex = 39111;

class IEGMIHHJMEP_LIFKFGOMENL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_LIFKFGOMENL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::IEGMIHHJMEP_GGKCBDPBIBF& FAJNJHEJMEA)
	{
		return ((::System::Void(*)(::PVOID, ::IEGMIHHJMEP_GGKCBDPBIBF&))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_LIFKFGOMENL_INVOKE_OFFSET))(this, FAJNJHEJMEA);
	}

	::System::IAsyncResult* BeginInvoke(::IEGMIHHJMEP_GGKCBDPBIBF& FAJNJHEJMEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::IEGMIHHJMEP_GGKCBDPBIBF&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_LIFKFGOMENL_BEGININVOKE_OFFSET))(this, FAJNJHEJMEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::IEGMIHHJMEP_GGKCBDPBIBF& FAJNJHEJMEA, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::IEGMIHHJMEP_GGKCBDPBIBF&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IEGMIHHJMEP_LIFKFGOMENL_ENDINVOKE_OFFSET))(this, FAJNJHEJMEA, IGAAKDOIPNN);
	}
};
