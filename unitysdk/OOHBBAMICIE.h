#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/KNKLMAIENDF.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define OOHBBAMICIE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x178A3D10)
#define OOHBBAMICIE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x178A3D80)
#define OOHBBAMICIE_INVOKE_OFFSET UNITYSDK_OFFSET(0x178A3A20)
#define OOHBBAMICIE__CTOR_OFFSET UNITYSDK_OFFSET(0x178A3A10)

inline static constexpr unsigned int OOHBBAMICIE_TypeDefinitionIndex = 62284;

class OOHBBAMICIE : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + OOHBBAMICIE__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KNKLMAIENDF& BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::KNKLMAIENDF&))((::PBYTE)hIl2Cpp + OOHBBAMICIE_INVOKE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::IAsyncResult* BeginInvoke(::KNKLMAIENDF& BHDNBGLCNOM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KNKLMAIENDF&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + OOHBBAMICIE_BEGININVOKE_OFFSET))(this, BHDNBGLCNOM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::KNKLMAIENDF& BHDNBGLCNOM, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::KNKLMAIENDF&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + OOHBBAMICIE_ENDINVOKE_OFFSET))(this, BHDNBGLCNOM, IGAAKDOIPNN);
	}
};
