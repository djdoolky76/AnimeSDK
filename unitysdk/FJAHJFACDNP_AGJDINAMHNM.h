#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define FJAHJFACDNP_AGJDINAMHNM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x179AEE10)
#define FJAHJFACDNP_AGJDINAMHNM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x179AEE50)
#define FJAHJFACDNP_AGJDINAMHNM_INVOKE_OFFSET UNITYSDK_OFFSET(0x179AE870)
#define FJAHJFACDNP_AGJDINAMHNM__CTOR_OFFSET UNITYSDK_OFFSET(0x179AE860)

inline static constexpr unsigned int FJAHJFACDNP_AGJDINAMHNM_TypeDefinitionIndex = 52949;

class FJAHJFACDNP_AGJDINAMHNM : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGJDINAMHNM__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::MHFGFMELFLB*, ::System::String*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGJDINAMHNM_INVOKE_OFFSET))(this, BBGGFOPDICP, KPIAFDELPJL);
	}

	::System::IAsyncResult* BeginInvoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::String* KPIAFDELPJL, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MHFGFMELFLB*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGJDINAMHNM_BEGININVOKE_OFFSET))(this, BBGGFOPDICP, KPIAFDELPJL, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGJDINAMHNM_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
