#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEINCMGEKFL;
namespace System { class Object; }

#define FEINCMGEKFL___STARTCHILDREN_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x15723B50)
#define FEINCMGEKFL___STARTCHILDREN_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15723C00)
#define FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15723D20)
#define FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15723D80)
#define FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15723D30)
#define FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15723BF0)

inline static constexpr unsigned int FEINCMGEKFL___StartChildren_d__6_TypeDefinitionIndex = 80855;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class FEINCMGEKFL___StartChildren_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::FEINCMGEKFL* __4__this; // 0x18
		::System::Int32 _nextStartIndex_5__3; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single _elapsed_5__2; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEINCMGEKFL___STARTCHILDREN_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
