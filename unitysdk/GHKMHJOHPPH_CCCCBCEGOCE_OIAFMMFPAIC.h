#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10FD94C0)
#define GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10FD94F0)
#define GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_INVOKE_OFFSET UNITYSDK_OFFSET(0x10FD8FA0)
#define GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD8F90)

inline static constexpr unsigned int GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_TypeDefinitionIndex = 64824;

class GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::Object* DNOMAJFOBJA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_INVOKE_OFFSET))(this, DNOMAJFOBJA);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* DNOMAJFOBJA, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_BEGININVOKE_OFFSET))(this, DNOMAJFOBJA, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + GHKMHJOHPPH_CCCCBCEGOCE_OIAFMMFPAIC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
