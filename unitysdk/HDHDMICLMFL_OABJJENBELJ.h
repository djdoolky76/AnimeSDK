#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/EIFGEBDBPDC.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HDHDMICLMFL_OABJJENBELJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16CE57B0)
#define HDHDMICLMFL_OABJJENBELJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16CE5820)
#define HDHDMICLMFL_OABJJENBELJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CE5390)
#define HDHDMICLMFL_OABJJENBELJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE5380)

inline static constexpr unsigned int HDHDMICLMFL_OABJJENBELJ_TypeDefinitionIndex = 85935;

class HDHDMICLMFL_OABJJENBELJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HDHDMICLMFL_OABJJENBELJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::EIFGEBDBPDC BDJODBNJKJP)
	{
		return ((::System::Void(*)(::PVOID, ::EIFGEBDBPDC))((::PBYTE)hIl2Cpp + HDHDMICLMFL_OABJJENBELJ_INVOKE_OFFSET))(this, BDJODBNJKJP);
	}

	::System::IAsyncResult* BeginInvoke(::EIFGEBDBPDC BDJODBNJKJP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::EIFGEBDBPDC, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_OABJJENBELJ_BEGININVOKE_OFFSET))(this, BDJODBNJKJP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_OABJJENBELJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
