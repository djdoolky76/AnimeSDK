#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/QA/QAManager_Message.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_CTOR_OFFSET UNITYSDK_OFFSET(0xE87F630)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE87F7A0)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE880750)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE8807B0)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE880760)
#define RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE87F790)

namespace RPG::QA
{
	inline static constexpr unsigned int QAManager___SendMessageToApmCo_d__42_TypeDefinitionIndex = 51819;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42>
	class QAManager___SendMessageToApmCo_d__42 : public ::System::Object
	{
	public:
		::RPG::QA::QAManager_Message message; // 0x10
		::System::Action* callback; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_QA_QAMANAGER___SENDMESSAGETOAPMCO_D__42_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
