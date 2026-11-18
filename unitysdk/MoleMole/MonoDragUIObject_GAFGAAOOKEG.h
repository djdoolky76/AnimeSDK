#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class MonoDragUIObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10432730)
#define MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10432760)
#define MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_INVOKE_OFFSET UNITYSDK_OFFSET(0x10432210)
#define MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG__CTOR_OFFSET UNITYSDK_OFFSET(0x10432200)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_GAFGAAOOKEG_TypeDefinitionIndex = 87575;

	class MonoDragUIObject_GAFGAAOOKEG : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::MoleMole::MonoDragUIObject* IIIKEIHKANP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_INVOKE_OFFSET))(this, IIIKEIHKANP);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoDragUIObject* IIIKEIHKANP, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_BEGININVOKE_OFFSET))(this, IIIKEIHKANP, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_GAFGAAOOKEG_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
