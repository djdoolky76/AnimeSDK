#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class LanguageManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE90810)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BE90B30)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE90CC0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BE90D20)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BE90CD0)
#define MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BE90B20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager__RequestVersion_d__23_TypeDefinitionIndex = 8074;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class LanguageManager__RequestVersion_d__23 : public ::System::Object
	{
	public:
		::System::String* _url_5__1; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20
		::System::Object* __2__current; // 0x28
		::MiHoYo::SDK::LanguageManager* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER__REQUESTVERSION_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
