#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BDBICJJJGFA;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MGGALPAONGN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F35BAD0)
#define MGGALPAONGN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F35BB00)
#define MGGALPAONGN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F35B5B0)
#define MGGALPAONGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F35B5A0)

inline static constexpr unsigned int MGGALPAONGN_TypeDefinitionIndex = 28757;

class MGGALPAONGN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MGGALPAONGN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::BDBICJJJGFA* MMCPBJJCKAC)
	{
		return ((::System::Void(*)(::PVOID, ::BDBICJJJGFA*))((::PBYTE)hIl2Cpp + MGGALPAONGN_INVOKE_OFFSET))(this, MMCPBJJCKAC);
	}

	::System::IAsyncResult* BeginInvoke(::BDBICJJJGFA* MMCPBJJCKAC, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BDBICJJJGFA*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MGGALPAONGN_BEGININVOKE_OFFSET))(this, MMCPBJJCKAC, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MGGALPAONGN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
