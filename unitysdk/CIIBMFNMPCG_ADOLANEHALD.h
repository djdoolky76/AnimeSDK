#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CIIBMFNMPCG_ADOLANEHALD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x132616A0)
#define CIIBMFNMPCG_ADOLANEHALD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x132616D0)
#define CIIBMFNMPCG_ADOLANEHALD_INVOKE_OFFSET UNITYSDK_OFFSET(0x13261400)
#define CIIBMFNMPCG_ADOLANEHALD__CTOR_OFFSET UNITYSDK_OFFSET(0x132613F0)

inline static constexpr unsigned int CIIBMFNMPCG_ADOLANEHALD_TypeDefinitionIndex = 82680;

class CIIBMFNMPCG_ADOLANEHALD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_ADOLANEHALD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Int32 Invoke()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_ADOLANEHALD_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_ADOLANEHALD_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CIIBMFNMPCG_ADOLANEHALD_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
