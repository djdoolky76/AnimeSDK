#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BPHGNMNLLHF;
namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x173F7E90)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x173F7F10)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x173F7B70)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x173F7B60)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_OnGetRoleSelectContextDel_TypeDefinitionIndex = 81299;

	class UILineupSelectContext_OnGetRoleSelectContextDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL__CTOR_OFFSET))(this, object, method);
		}

		::MoleMole::UIRoleSelectPageContext* Invoke(::System::Int32 selectIndex, ::Il2CppArray<::BPHGNMNLLHF*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_INVOKE_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 selectIndex, ::Il2CppArray<::BPHGNMNLLHF*>* currentSelected, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::BPHGNMNLLHF*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_BEGININVOKE_OFFSET))(this, selectIndex, currentSelected, callback, object);
		}

		::MoleMole::UIRoleSelectPageContext* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_ONGETROLESELECTCONTEXTDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
