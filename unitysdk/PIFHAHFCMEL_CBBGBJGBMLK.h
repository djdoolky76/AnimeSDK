#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/PIFHAHFCMEL.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define PIFHAHFCMEL_CBBGBJGBMLK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D629F90)
#define PIFHAHFCMEL_CBBGBJGBMLK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D62A000)
#define PIFHAHFCMEL_CBBGBJGBMLK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D629C90)
#define PIFHAHFCMEL_CBBGBJGBMLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D629C80)

inline static constexpr unsigned int PIFHAHFCMEL_CBBGBJGBMLK_TypeDefinitionIndex = 58199;

class PIFHAHFCMEL_CBBGBJGBMLK : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_CBBGBJGBMLK__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::PIFHAHFCMEL JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::PIFHAHFCMEL))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_CBBGBJGBMLK_INVOKE_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::IAsyncResult* BeginInvoke(::PIFHAHFCMEL JKBLDFBGBPK, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::PIFHAHFCMEL, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_CBBGBJGBMLK_BEGININVOKE_OFFSET))(this, JKBLDFBGBPK, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_CBBGBJGBMLK_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
