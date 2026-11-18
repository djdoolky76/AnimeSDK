#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define GJDLKFAMLAC_JBGPFHHPCNI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15D01290)
#define GJDLKFAMLAC_JBGPFHHPCNI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15D01330)
#define GJDLKFAMLAC_JBGPFHHPCNI_INVOKE_OFFSET UNITYSDK_OFFSET(0x15D00CE0)
#define GJDLKFAMLAC_JBGPFHHPCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15D00CD0)

inline static constexpr unsigned int GJDLKFAMLAC_JBGPFHHPCNI_TypeDefinitionIndex = 39922;

class GJDLKFAMLAC_JBGPFHHPCNI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_JBGPFHHPCNI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::String* LCEGOBBEECM, ::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_JBGPFHHPCNI_INVOKE_OFFSET))(this, LCEGOBBEECM, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* LCEGOBBEECM, ::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_JBGPFHHPCNI_BEGININVOKE_OFFSET))(this, LCEGOBBEECM, GIAEPMKCBIB, DOBFFIICAII, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_JBGPFHHPCNI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
