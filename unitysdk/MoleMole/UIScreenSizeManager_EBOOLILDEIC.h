#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14810700)
#define MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14810770)
#define MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_INVOKE_OFFSET UNITYSDK_OFFSET(0x148103E0)
#define MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC__CTOR_OFFSET UNITYSDK_OFFSET(0x148103D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScreenSizeManager_EBOOLILDEIC_TypeDefinitionIndex = 39899;

	class UIScreenSizeManager_EBOOLILDEIC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::UnityEngine::Vector2 NHOEAFJJJGA, ::UnityEngine::Vector2 CMJHMGPKGKH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_INVOKE_OFFSET))(this, NHOEAFJJJGA, CMJHMGPKGKH);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 NHOEAFJJJGA, ::UnityEngine::Vector2 CMJHMGPKGKH, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_BEGININVOKE_OFFSET))(this, NHOEAFJJJGA, CMJHMGPKGKH, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCREENSIZEMANAGER_EBOOLILDEIC_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
