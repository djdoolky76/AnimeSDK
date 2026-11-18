#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PFEOJDIJIBM_MFLCLODDICJ_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x150C2F10)
#define PFEOJDIJIBM_MFLCLODDICJ_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x150C2F80)
#define PFEOJDIJIBM_MFLCLODDICJ_INVOKE_OFFSET UNITYSDK_OFFSET(0x150C2A40)
#define PFEOJDIJIBM_MFLCLODDICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150C2A30)

inline static constexpr unsigned int PFEOJDIJIBM_MFLCLODDICJ_TypeDefinitionIndex = 62744;

class PFEOJDIJIBM_MFLCLODDICJ : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_MFLCLODDICJ__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Invoke(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_MFLCLODDICJ_INVOKE_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::IAsyncResult* BeginInvoke(::LGCNEDCMPKM BKBGPKNGNMF, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::LGCNEDCMPKM, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_MFLCLODDICJ_BEGININVOKE_OFFSET))(this, BKBGPKNGNMF, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + PFEOJDIJIBM_MFLCLODDICJ_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
