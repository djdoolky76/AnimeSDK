#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MMBKAKPDHIF_LIDJLLIMFFD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14070230)
#define MMBKAKPDHIF_LIDJLLIMFFD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x140702E0)
#define MMBKAKPDHIF_LIDJLLIMFFD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1406FEE0)
#define MMBKAKPDHIF_LIDJLLIMFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1406FED0)

inline static constexpr unsigned int MMBKAKPDHIF_LIDJLLIMFFD_TypeDefinitionIndex = 44480;

class MMBKAKPDHIF_LIDJLLIMFFD : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MMBKAKPDHIF_LIDJLLIMFFD__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single& BDEDDEGJFKL, ::System::Single& LEKNOCJHGEM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MMBKAKPDHIF_LIDJLLIMFFD_INVOKE_OFFSET))(this, FEFNENBAMKL, BDEDDEGJFKL, LEKNOCJHGEM);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single& BDEDDEGJFKL, ::System::Single& LEKNOCJHGEM, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MMBKAKPDHIF_LIDJLLIMFFD_BEGININVOKE_OFFSET))(this, FEFNENBAMKL, BDEDDEGJFKL, LEKNOCJHGEM, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single& BDEDDEGJFKL, ::System::Single& LEKNOCJHGEM, ::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MMBKAKPDHIF_LIDJLLIMFFD_ENDINVOKE_OFFSET))(this, FEFNENBAMKL, BDEDDEGJFKL, LEKNOCJHGEM, IGAAKDOIPNN);
	}
};
