#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CFMGIKJLMBJ;
class IKNGGHOCDBF;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PMDFNIFMDAP_NHJLKGGHPJF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEFEB0)
#define PMDFNIFMDAP_NHJLKGGHPJF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEFF30)
#define PMDFNIFMDAP_NHJLKGGHPJF_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBEFB90)
#define PMDFNIFMDAP_NHJLKGGHPJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEFB80)

inline static constexpr unsigned int PMDFNIFMDAP_NHJLKGGHPJF_TypeDefinitionIndex = 28707;

class PMDFNIFMDAP_NHJLKGGHPJF : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_NHJLKGGHPJF__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::CFMGIKJLMBJ* Invoke(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA)
	{
		return ((::CFMGIKJLMBJ*(*)(::PVOID, ::System::Int32, ::IKNGGHOCDBF*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_NHJLKGGHPJF_INVOKE_OFFSET))(this, AEMAHLJGGMO, IOPMHNGHKGA);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 AEMAHLJGGMO, ::IKNGGHOCDBF* IOPMHNGHKGA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::IKNGGHOCDBF*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_NHJLKGGHPJF_BEGININVOKE_OFFSET))(this, AEMAHLJGGMO, IOPMHNGHKGA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::CFMGIKJLMBJ* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::CFMGIKJLMBJ*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PMDFNIFMDAP_NHJLKGGHPJF_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
