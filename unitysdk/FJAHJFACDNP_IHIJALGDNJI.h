#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FJAHJFACDNP_IHIJALGDNJI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBB497C0)
#define FJAHJFACDNP_IHIJALGDNJI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBB497F0)
#define FJAHJFACDNP_IHIJALGDNJI_INVOKE_OFFSET UNITYSDK_OFFSET(0xBB492A0)
#define FJAHJFACDNP_IHIJALGDNJI__CTOR_OFFSET UNITYSDK_OFFSET(0xBB49290)

inline static constexpr unsigned int FJAHJFACDNP_IHIJALGDNJI_TypeDefinitionIndex = 52945;

class FJAHJFACDNP_IHIJALGDNJI : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_IHIJALGDNJI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MHFGFMELFLB* BBGGFOPDICP)
	{
		return ((::System::Void(*)(::PVOID, ::MHFGFMELFLB*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_IHIJALGDNJI_INVOKE_OFFSET))(this, BBGGFOPDICP);
	}

	::System::IAsyncResult* BeginInvoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MHFGFMELFLB*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_IHIJALGDNJI_BEGININVOKE_OFFSET))(this, BBGGFOPDICP, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_IHIJALGDNJI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
