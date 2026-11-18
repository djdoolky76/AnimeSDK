#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class OAEFGCLEHHO;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define IANDOOLAALI_DLAAJNDJPLO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x141AEA20)
#define IANDOOLAALI_DLAAJNDJPLO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x141AEA50)
#define IANDOOLAALI_DLAAJNDJPLO_INVOKE_OFFSET UNITYSDK_OFFSET(0x141AE500)
#define IANDOOLAALI_DLAAJNDJPLO__CTOR_OFFSET UNITYSDK_OFFSET(0x141AE4F0)

inline static constexpr unsigned int IANDOOLAALI_DLAAJNDJPLO_TypeDefinitionIndex = 82332;

class IANDOOLAALI_DLAAJNDJPLO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + IANDOOLAALI_DLAAJNDJPLO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DLAAJNDJPLO_INVOKE_OFFSET))(this, KGFGOODAFDH);
	}

	::System::IAsyncResult* BeginInvoke(::OAEFGCLEHHO* KGFGOODAFDH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::OAEFGCLEHHO*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DLAAJNDJPLO_BEGININVOKE_OFFSET))(this, KGFGOODAFDH, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IANDOOLAALI_DLAAJNDJPLO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
