#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x135B6510)
#define MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x135B6540)
#define MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_INVOKE_OFFSET UNITYSDK_OFFSET(0x135B6280)
#define MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB__CTOR_OFFSET UNITYSDK_OFFSET(0x135B6270)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_JNCKILBDDDB_TypeDefinitionIndex = 87574;

	class MonoDragUIObject_JNCKILBDDDB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_BEGININVOKE_OFFSET))(this, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_JNCKILBDDDB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
