#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FJAHJFACDNP_CAIGGHKMGCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1429AB00)
#define FJAHJFACDNP_CAIGGHKMGCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1429AB80)
#define FJAHJFACDNP_CAIGGHKMGCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1429A580)
#define FJAHJFACDNP_CAIGGHKMGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1429A570)

inline static constexpr unsigned int FJAHJFACDNP_CAIGGHKMGCH_TypeDefinitionIndex = 52948;

class FJAHJFACDNP_CAIGGHKMGCH : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_CAIGGHKMGCH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::Int32 NFPOCLPENDG)
	{
		return ((::System::Void(*)(::PVOID, ::MHFGFMELFLB*, ::System::Int32))((::PBYTE)hIl2Cpp + FJAHJFACDNP_CAIGGHKMGCH_INVOKE_OFFSET))(this, BBGGFOPDICP, NFPOCLPENDG);
	}

	::System::IAsyncResult* BeginInvoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::Int32 NFPOCLPENDG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MHFGFMELFLB*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_CAIGGHKMGCH_BEGININVOKE_OFFSET))(this, BBGGFOPDICP, NFPOCLPENDG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_CAIGGHKMGCH_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
