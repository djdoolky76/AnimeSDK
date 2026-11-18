#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class CLFBLCIJPKD_PEPKKBJMJCD;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define NBNJMJGKOEO_JBIOFAJIOJO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ADF0A50)
#define NBNJMJGKOEO_JBIOFAJIOJO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ADF0AD0)
#define NBNJMJGKOEO_JBIOFAJIOJO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADF0730)
#define NBNJMJGKOEO_JBIOFAJIOJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF0720)

inline static constexpr unsigned int NBNJMJGKOEO_JBIOFAJIOJO_TypeDefinitionIndex = 68600;

class NBNJMJGKOEO_JBIOFAJIOJO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_JBIOFAJIOJO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::CLFBLCIJPKD_PEPKKBJMJCD* Invoke(::System::Int32 HEOBGDJFHKO, ::System::String* APDLILLHFEA)
	{
		return ((::CLFBLCIJPKD_PEPKKBJMJCD*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_JBIOFAJIOJO_INVOKE_OFFSET))(this, HEOBGDJFHKO, APDLILLHFEA);
	}

	::System::IAsyncResult* BeginInvoke(::System::Int32 HEOBGDJFHKO, ::System::String* APDLILLHFEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_JBIOFAJIOJO_BEGININVOKE_OFFSET))(this, HEOBGDJFHKO, APDLILLHFEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::CLFBLCIJPKD_PEPKKBJMJCD* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::CLFBLCIJPKD_PEPKKBJMJCD*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NBNJMJGKOEO_JBIOFAJIOJO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
