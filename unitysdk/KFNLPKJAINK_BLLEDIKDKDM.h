#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CEKNEMMJFPA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define KFNLPKJAINK_BLLEDIKDKDM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18622CB0)
#define KFNLPKJAINK_BLLEDIKDKDM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18622D40)
#define KFNLPKJAINK_BLLEDIKDKDM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18622980)
#define KFNLPKJAINK_BLLEDIKDKDM__CTOR_OFFSET UNITYSDK_OFFSET(0x18622970)

inline static constexpr unsigned int KFNLPKJAINK_BLLEDIKDKDM_TypeDefinitionIndex = 92638;

class KFNLPKJAINK_BLLEDIKDKDM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KFNLPKJAINK_BLLEDIKDKDM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Int32 DJCNCELJPOM, ::System::String* BHDNBGLCNOM, ::CEKNEMMJFPA* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::CEKNEMMJFPA*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_BLLEDIKDKDM_INVOKE_OFFSET))(this, DJCNCELJPOM, BHDNBGLCNOM, IGAAKDOIPNN);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 DJCNCELJPOM, ::System::String* BHDNBGLCNOM, ::CEKNEMMJFPA* IGAAKDOIPNN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::CEKNEMMJFPA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_BLLEDIKDKDM_BEGININVOKE_OFFSET))(this, DJCNCELJPOM, BHDNBGLCNOM, IGAAKDOIPNN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KFNLPKJAINK_BLLEDIKDKDM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
