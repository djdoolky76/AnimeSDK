#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_OOABFKDMAAA.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12483350)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x124833C0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_INVOKE_OFFSET UNITYSDK_OFFSET(0x12483060)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH__CTOR_OFFSET UNITYSDK_OFFSET(0x12483050)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_NLOHLMCCMKH_TypeDefinitionIndex = 59851;

	class MonoGamepadVirtualCursor_NLOHLMCCMKH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA& HODAIDNDKHD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_INVOKE_OFFSET))(this, HODAIDNDKHD);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA& HODAIDNDKHD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_BEGININVOKE_OFFSET))(this, HODAIDNDKHD, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA& HODAIDNDKHD, ::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_NLOHLMCCMKH_ENDINVOKE_OFFSET))(this, HODAIDNDKHD, IGAAKDOIPNN);
		}
	};
}
