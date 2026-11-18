#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class KFHNCJALFJK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define FJAHJFACDNP_AGCPMPDMFKH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10EBB1E0)
#define FJAHJFACDNP_AGCPMPDMFKH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10EBB290)
#define FJAHJFACDNP_AGCPMPDMFKH_INVOKE_OFFSET UNITYSDK_OFFSET(0x10EBAB90)
#define FJAHJFACDNP_AGCPMPDMFKH__CTOR_OFFSET UNITYSDK_OFFSET(0x10EBAB80)

inline static constexpr unsigned int FJAHJFACDNP_AGCPMPDMFKH_TypeDefinitionIndex = 52947;

class FJAHJFACDNP_AGCPMPDMFKH : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGCPMPDMFKH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::KFHNCJALFJK* GBELIHABEDH, ::System::String* KKJEJNMLIFP, ::System::String* KPIAFDELPJL, ::System::Boolean BGDDLAPKKFG)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGCPMPDMFKH_INVOKE_OFFSET))(this, GBELIHABEDH, KKJEJNMLIFP, KPIAFDELPJL, BGDDLAPKKFG);
	}

	::System::IAsyncResult* BeginInvoke(::KFHNCJALFJK* GBELIHABEDH, ::System::String* KKJEJNMLIFP, ::System::String* KPIAFDELPJL, ::System::Boolean BGDDLAPKKFG, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::KFHNCJALFJK*, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGCPMPDMFKH_BEGININVOKE_OFFSET))(this, GBELIHABEDH, KKJEJNMLIFP, KPIAFDELPJL, BGDDLAPKKFG, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FJAHJFACDNP_AGCPMPDMFKH_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
