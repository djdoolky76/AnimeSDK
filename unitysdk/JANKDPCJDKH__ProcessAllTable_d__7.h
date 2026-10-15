#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JANKDPCJDKH_KEOGIKIPECH;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define JANKDPCJDKH__PROCESSALLTABLE_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6E60)
#define JANKDPCJDKH__PROCESSALLTABLE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CFD6EA0)
#define JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D011470)
#define JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D0114D0)
#define JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D011480)
#define JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CFD6E90)

inline static constexpr unsigned int JANKDPCJDKH__ProcessAllTable_d__7_TypeDefinitionIndex = 13253;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class JANKDPCJDKH__ProcessAllTable_d__7 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* predicate; // 0x10
		::JANKDPCJDKH_KEOGIKIPECH* process; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Action* Callback; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JANKDPCJDKH__PROCESSALLTABLE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
