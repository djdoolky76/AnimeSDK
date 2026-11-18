#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10D3BB00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10D3BB30)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D3B5E0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_GKOMHIKLIAL_TypeDefinitionIndex = 59844;

	class MonoGamepadVirtualCursor_GKOMHIKLIAL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Object*>* IDKNEIEMPAP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_INVOKE_OFFSET))(this, IDKNEIEMPAP);
		}

		::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::System::Object*>* IDKNEIEMPAP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_BEGININVOKE_OFFSET))(this, IDKNEIEMPAP, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GKOMHIKLIAL_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
