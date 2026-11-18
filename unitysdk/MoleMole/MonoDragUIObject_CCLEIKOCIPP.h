#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x124740F0)
#define MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12474120)
#define MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_INVOKE_OFFSET UNITYSDK_OFFSET(0x12473E60)
#define MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP__CTOR_OFFSET UNITYSDK_OFFSET(0x12473E50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_CCLEIKOCIPP_TypeDefinitionIndex = 87577;

	class MonoDragUIObject_CCLEIKOCIPP : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_CCLEIKOCIPP_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
