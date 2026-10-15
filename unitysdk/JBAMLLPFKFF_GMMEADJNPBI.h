#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/KBAALMJFHGC.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JBAMLLPFKFF_GMMEADJNPBI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16550DB0)
#define JBAMLLPFKFF_GMMEADJNPBI_CTOR_OFFSET UNITYSDK_OFFSET(0x16550D30)
#define JBAMLLPFKFF_GMMEADJNPBI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16550E20)
#define JBAMLLPFKFF_GMMEADJNPBI_INVOKE_OFFSET UNITYSDK_OFFSET(0x16550DA0)

inline static constexpr unsigned int JBAMLLPFKFF_GMMEADJNPBI_TypeDefinitionIndex = 59068;

	class JBAMLLPFKFF_GMMEADJNPBI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JBAMLLPFKFF_GMMEADJNPBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::KBAALMJFHGC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBAALMJFHGC))((::PBYTE)hIl2Cpp + JBAMLLPFKFF_GMMEADJNPBI_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::KBAALMJFHGC a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::KBAALMJFHGC, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JBAMLLPFKFF_GMMEADJNPBI_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::KBAALMJFHGC a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBAALMJFHGC, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JBAMLLPFKFF_GMMEADJNPBI_ENDINVOKE_OFFSET))(this, a1, a2);
		}

	};
