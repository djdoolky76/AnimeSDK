#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MoleMole { class MonoDragUIObject; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14AF9370)
#define MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14AF93B0)
#define MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AF8DD0)
#define MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF8DC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDragUIObject_PKJLBKMAFLB_TypeDefinitionIndex = 87578;

	class MonoDragUIObject_PKJLBKMAFLB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
		}

		::System::Void Invoke(::MoleMole::MonoDragUIObject* IIIKEIHKANP, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_INVOKE_OFFSET))(this, IIIKEIHKANP, DIHNFECKHMD);
		}

		::System::IAsyncResult* BeginInvoke(::MoleMole::MonoDragUIObject* IIIKEIHKANP, ::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MoleMole::MonoDragUIObject*, ::UnityEngine::EventSystems::PointerEventData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_BEGININVOKE_OFFSET))(this, IIIKEIHKANP, DIHNFECKHMD, EJGDHCIBCJH, FABAAKLFDHN);
		}

		::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRAGUIOBJECT_PKJLBKMAFLB_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
		}
	};
}
