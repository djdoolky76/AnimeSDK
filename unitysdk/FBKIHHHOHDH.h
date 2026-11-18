#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FBKIHHHOHDH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x169C1060)
#define FBKIHHHOHDH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x169C1090)
#define FBKIHHHOHDH_INVOKE_OFFSET UNITYSDK_OFFSET(0x169C0DD0)
#define FBKIHHHOHDH__CTOR_OFFSET UNITYSDK_OFFSET(0x169C0DC0)

inline static constexpr unsigned int FBKIHHHOHDH_TypeDefinitionIndex = 53012;

class FBKIHHHOHDH : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FBKIHHHOHDH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIHHHOHDH_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FBKIHHHOHDH_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FBKIHHHOHDH_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
