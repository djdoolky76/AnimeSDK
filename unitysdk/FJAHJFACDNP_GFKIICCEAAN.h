#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGLNLMAAGGG.h"
#include "unitysdk/System/MulticastDelegate.h"

class MHFGFMELFLB;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FJAHJFACDNP_GFKIICCEAAN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1429B150)
#define FJAHJFACDNP_GFKIICCEAAN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1429B1F0)
#define FJAHJFACDNP_GFKIICCEAAN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1429ABA0)
#define FJAHJFACDNP_GFKIICCEAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1429AB90)

inline static constexpr unsigned int FJAHJFACDNP_GFKIICCEAAN_TypeDefinitionIndex = 52946;

class FJAHJFACDNP_GFKIICCEAAN : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_GFKIICCEAAN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::Int32 BJMFKAHHBCF, ::KGLNLMAAGGG IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::MHFGFMELFLB*, ::System::Int32, ::KGLNLMAAGGG))((::PBYTE)hIl2Cpp + FJAHJFACDNP_GFKIICCEAAN_INVOKE_OFFSET))(this, BBGGFOPDICP, BJMFKAHHBCF, IGAAKDOIPNN);
	}

	::System::IAsyncResult* BeginInvoke(::MHFGFMELFLB* BBGGFOPDICP, ::System::Int32 BJMFKAHHBCF, ::KGLNLMAAGGG IGAAKDOIPNN, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::MHFGFMELFLB*, ::System::Int32, ::KGLNLMAAGGG, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_GFKIICCEAAN_BEGININVOKE_OFFSET))(this, BBGGFOPDICP, BJMFKAHHBCF, IGAAKDOIPNN, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_GFKIICCEAAN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
