#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BLIDNEBFCLI;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FCJHKNJNBEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FD08DE0)
#define FCJHKNJNBEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FD08E10)
#define FCJHKNJNBEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FD088C0)
#define FCJHKNJNBEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD088B0)

inline static constexpr unsigned int FCJHKNJNBEL_TypeDefinitionIndex = 29059;

class FCJHKNJNBEL : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FCJHKNJNBEL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BLIDNEBFCLI* KGFNDCDLDND)
	{
		return ((::System::Void(*)(::PVOID, ::BLIDNEBFCLI*))((::PBYTE)hIl2Cpp + FCJHKNJNBEL_INVOKE_OFFSET))(this, KGFNDCDLDND);
	}

	::System::IAsyncResult* BeginInvoke(::BLIDNEBFCLI* KGFNDCDLDND, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BLIDNEBFCLI*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FCJHKNJNBEL_BEGININVOKE_OFFSET))(this, KGFNDCDLDND, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FCJHKNJNBEL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
