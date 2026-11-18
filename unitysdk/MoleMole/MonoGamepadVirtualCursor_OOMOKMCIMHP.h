#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class LGMMGPPLLHN;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x162E25D0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x162E2650)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_INVOKE_OFFSET UNITYSDK_OFFSET(0x162E1FB0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP__CTOR_OFFSET UNITYSDK_OFFSET(0x162E1FA0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_OOMOKMCIMHP_TypeDefinitionIndex = 59849;

	class MonoGamepadVirtualCursor_OOMOKMCIMHP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::LGMMGPPLLHN* HODAIDNDKHD, ::System::Boolean LIEJIGMGGOL)
		{
			return ((::System::Void(*)(::PVOID, ::LGMMGPPLLHN*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_INVOKE_OFFSET))(this, HODAIDNDKHD, LIEJIGMGGOL);
		}

		::System::IAsyncResult* BeginInvoke(::LGMMGPPLLHN* HODAIDNDKHD, ::System::Boolean LIEJIGMGGOL, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::LGMMGPPLLHN*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_BEGININVOKE_OFFSET))(this, HODAIDNDKHD, LIEJIGMGGOL, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOMOKMCIMHP_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
