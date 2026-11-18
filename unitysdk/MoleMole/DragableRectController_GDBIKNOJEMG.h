#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFFF7880)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFFF78B0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_INVOKE_OFFSET UNITYSDK_OFFSET(0xFFF75F0)
#define MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF75E0)

namespace MoleMole
{
	inline static constexpr unsigned int DragableRectController_GDBIKNOJEMG_TypeDefinitionIndex = 45961;

	class DragableRectController_GDBIKNOJEMG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAGABLERECTCONTROLLER_GDBIKNOJEMG_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
