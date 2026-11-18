#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKBMMHDLNOB_OEFOOKGPIDF.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IKBMMHDLNOB_CJOFNLCDKHB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x138115E0)
#define IKBMMHDLNOB_CJOFNLCDKHB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x13811650)
#define IKBMMHDLNOB_CJOFNLCDKHB_INVOKE_OFFSET UNITYSDK_OFFSET(0x138112E0)
#define IKBMMHDLNOB_CJOFNLCDKHB__CTOR_OFFSET UNITYSDK_OFFSET(0x138112D0)

inline static constexpr unsigned int IKBMMHDLNOB_CJOFNLCDKHB_TypeDefinitionIndex = 57025;

class IKBMMHDLNOB_CJOFNLCDKHB : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IKBMMHDLNOB_CJOFNLCDKHB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::IKBMMHDLNOB_OEFOOKGPIDF KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::IKBMMHDLNOB_OEFOOKGPIDF))((::PBYTE)hIl2Cpp + IKBMMHDLNOB_CJOFNLCDKHB_INVOKE_OFFSET))(this, KKMENMCMMBN);
	}

	::System::IAsyncResult* BeginInvoke(::IKBMMHDLNOB_OEFOOKGPIDF KKMENMCMMBN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::IKBMMHDLNOB_OEFOOKGPIDF, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IKBMMHDLNOB_CJOFNLCDKHB_BEGININVOKE_OFFSET))(this, KKMENMCMMBN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IKBMMHDLNOB_CJOFNLCDKHB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
