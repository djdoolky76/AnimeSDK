#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/JOFANLNIMPC.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define JOFANLNIMPC_HKLKHCGCJPP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17B58980)
#define JOFANLNIMPC_HKLKHCGCJPP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17B589F0)
#define JOFANLNIMPC_HKLKHCGCJPP_INVOKE_OFFSET UNITYSDK_OFFSET(0x17B58690)
#define JOFANLNIMPC_HKLKHCGCJPP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B58680)

inline static constexpr unsigned int JOFANLNIMPC_HKLKHCGCJPP_TypeDefinitionIndex = 54094;

class JOFANLNIMPC_HKLKHCGCJPP : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HKLKHCGCJPP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::JOFANLNIMPC& LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HKLKHCGCJPP_INVOKE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::IAsyncResult* BeginInvoke(::JOFANLNIMPC& LJBPECKCCEA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::JOFANLNIMPC&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HKLKHCGCJPP_BEGININVOKE_OFFSET))(this, LJBPECKCCEA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::JOFANLNIMPC& LJBPECKCCEA, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::JOFANLNIMPC&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + JOFANLNIMPC_HKLKHCGCJPP_ENDINVOKE_OFFSET))(this, LJBPECKCCEA, IGAAKDOIPNN);
	}
};
