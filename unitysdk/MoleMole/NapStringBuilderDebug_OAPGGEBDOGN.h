#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F3E65A0)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F3E65D0)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F3E6310)
#define MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E6300)

namespace MoleMole
{
	inline static constexpr unsigned int NapStringBuilderDebug_OAPGGEBDOGN_TypeDefinitionIndex = 7853;

	class NapStringBuilderDebug_OAPGGEBDOGN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSTRINGBUILDERDEBUG_OAPGGEBDOGN_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
