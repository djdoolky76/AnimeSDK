#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class OAEFGCLEHHO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IANDOOLAALI_NGKHGAPPFDA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16F563D0)
#define IANDOOLAALI_NGKHGAPPFDA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16F56400)
#define IANDOOLAALI_NGKHGAPPFDA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16F55EB0)
#define IANDOOLAALI_NGKHGAPPFDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F19E50)

inline static constexpr unsigned int IANDOOLAALI_NGKHGAPPFDA_TypeDefinitionIndex = 82333;

class IANDOOLAALI_NGKHGAPPFDA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IANDOOLAALI_NGKHGAPPFDA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IANDOOLAALI_NGKHGAPPFDA_INVOKE_OFFSET))(this, KGFGOODAFDH);
	}

	::System::IAsyncResult* BeginInvoke(::OAEFGCLEHHO* KGFGOODAFDH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::OAEFGCLEHHO*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IANDOOLAALI_NGKHGAPPFDA_BEGININVOKE_OFFSET))(this, KGFGOODAFDH, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IANDOOLAALI_NGKHGAPPFDA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
