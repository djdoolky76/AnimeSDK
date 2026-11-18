#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class AEBNPGJCBEP;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define KFNLPKJAINK_HNKFMGLDPCI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17650040)
#define KFNLPKJAINK_HNKFMGLDPCI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176500D0)
#define KFNLPKJAINK_HNKFMGLDPCI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1764FD10)
#define KFNLPKJAINK_HNKFMGLDPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1764FD00)

inline static constexpr unsigned int KFNLPKJAINK_HNKFMGLDPCI_TypeDefinitionIndex = 92639;

class KFNLPKJAINK_HNKFMGLDPCI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KFNLPKJAINK_HNKFMGLDPCI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 DJCNCELJPOM, ::System::String* BHDNBGLCNOM, ::AEBNPGJCBEP* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::AEBNPGJCBEP*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_HNKFMGLDPCI_INVOKE_OFFSET))(this, DJCNCELJPOM, BHDNBGLCNOM, IGAAKDOIPNN);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 DJCNCELJPOM, ::System::String* BHDNBGLCNOM, ::AEBNPGJCBEP* IGAAKDOIPNN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::AEBNPGJCBEP*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_HNKFMGLDPCI_BEGININVOKE_OFFSET))(this, DJCNCELJPOM, BHDNBGLCNOM, IGAAKDOIPNN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_HNKFMGLDPCI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
