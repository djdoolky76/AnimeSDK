#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC80B0)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDFC8570)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDFC8870)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFC8800)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xDFC88F0)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDFC8860)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xDFC8810)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFC8550)
#define DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDFC8560)

inline static constexpr unsigned int DAPFANDHPAA__GetStillGradeAnimIDsForStoryAvatar_d__4_TypeDefinitionIndex = 48368;

	template <typename T1, typename T2, typename T3, typename T4>
	class DAPFANDHPAA__GetStillGradeAnimIDsForStoryAvatar_d__4 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap2; // 0x10
		::System::Byte _padding0[0x20];
		::System::String* storyAvatarID; // 0x38
		::System::String* __2__current; // 0x40
		::System::String* __3__storyAvatarID; // 0x48
		::System::String* _freeStyleID_5__2; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __l__initialThreadId; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPFANDHPAA__GETSTILLGRADEANIMIDSFORSTORYAVATAR_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
