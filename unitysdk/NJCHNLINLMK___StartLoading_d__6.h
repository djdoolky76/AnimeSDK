#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJCHNLINLMK;
namespace System { class Object; }

#define NJCHNLINLMK___STARTLOADING_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0xC4ED420)
#define NJCHNLINLMK___STARTLOADING_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC4ED590)
#define NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4EDE60)
#define NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC4EDEC0)
#define NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC4EDE70)
#define NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4ED580)

inline static constexpr unsigned int NJCHNLINLMK___StartLoading_d__6_TypeDefinitionIndex = 60717;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class NJCHNLINLMK___StartLoading_d__6 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NJCHNLINLMK* __4__this; // 0x18
		::System::Int32 _toProgress_5__3; // 0x20
		::System::Int32 _displayProgress_5__2; // 0x24
		::System::Int32 __1__state; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK___STARTLOADING_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
