#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class LGMMGPPLLHN;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162E1F40)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162E1F70)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_INVOKE_OFFSET UNITYSDK_OFFSET(0x162E1A20)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x162E1A10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_OILGIJNNPCI_TypeDefinitionIndex = 59850;

	class MonoGamepadVirtualCursor_OILGIJNNPCI : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Boolean Invoke(::LGMMGPPLLHN* HODAIDNDKHD)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGMMGPPLLHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_INVOKE_OFFSET))(this, HODAIDNDKHD);
		}

		::System::IAsyncResult* BeginInvoke(::LGMMGPPLLHN* HODAIDNDKHD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::LGMMGPPLLHN*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_BEGININVOKE_OFFSET))(this, HODAIDNDKHD, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OILGIJNNPCI_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
