#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFFF7B70)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFFF7BA0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_INVOKE_OFFSET UNITYSDK_OFFSET(0xFFF78D0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF78C0)

namespace MoleMole
{
	inline static constexpr unsigned int DragableRectController_IEMHOBJBHBN_TypeDefinitionIndex = 45962;

	class DragableRectController_IEMHOBJBHBN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_IEMHOBJBHBN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
