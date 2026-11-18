#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class HMNIABJLPGA;
class IMNGPABLOPF;
class NIBDDIKJPMO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IJNCJFFEMPL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CDDF9F0)
#define IJNCJFFEMPL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CDDFA40)
#define IJNCJFFEMPL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CDDF390)
#define IJNCJFFEMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDF380)

inline static constexpr unsigned int IJNCJFFEMPL_TypeDefinitionIndex = 29003;

class IJNCJFFEMPL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IJNCJFFEMPL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Boolean Invoke(::NIBDDIKJPMO* HLFCANNKIJL, ::NIBDDIKJPMO* HJKHHIEDNGB, ::HMNIABJLPGA* EKPINEFPJDN, ::IMNGPABLOPF* MAEOLKMAAOO)
	{
		return ((::System::Boolean(*)(::PVOID, ::NIBDDIKJPMO*, ::NIBDDIKJPMO*, ::HMNIABJLPGA*, ::IMNGPABLOPF*))((::PBYTE)hIl2Cpp + IJNCJFFEMPL_INVOKE_OFFSET))(this, HLFCANNKIJL, HJKHHIEDNGB, EKPINEFPJDN, MAEOLKMAAOO);
	}

	::System::IAsyncResult* BeginInvoke(::NIBDDIKJPMO* HLFCANNKIJL, ::NIBDDIKJPMO* HJKHHIEDNGB, ::HMNIABJLPGA* EKPINEFPJDN, ::IMNGPABLOPF* MAEOLKMAAOO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::NIBDDIKJPMO*, ::NIBDDIKJPMO*, ::HMNIABJLPGA*, ::IMNGPABLOPF*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IJNCJFFEMPL_BEGININVOKE_OFFSET))(this, HLFCANNKIJL, HJKHHIEDNGB, EKPINEFPJDN, MAEOLKMAAOO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IJNCJFFEMPL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
