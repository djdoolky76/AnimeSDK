#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FJAHJFACDNP_HHANJECKDLA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1429B730)
#define FJAHJFACDNP_HHANJECKDLA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1429B760)
#define FJAHJFACDNP_HHANJECKDLA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1429B210)
#define FJAHJFACDNP_HHANJECKDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1429B200)

inline static constexpr unsigned int FJAHJFACDNP_HHANJECKDLA_TypeDefinitionIndex = 52950;

class FJAHJFACDNP_HHANJECKDLA : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_HHANJECKDLA__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MHFGFMELFLB* BBGGFOPDICP)
	{
		return ((::System::Void(*)(::PVOID, ::MHFGFMELFLB*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_HHANJECKDLA_INVOKE_OFFSET))(this, BBGGFOPDICP);
	}

	::System::IAsyncResult* BeginInvoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MHFGFMELFLB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_HHANJECKDLA_BEGININVOKE_OFFSET))(this, BBGGFOPDICP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_HHANJECKDLA_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
