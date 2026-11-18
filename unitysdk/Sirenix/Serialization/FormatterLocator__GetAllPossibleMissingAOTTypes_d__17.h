#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F3C1990)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F3C2050)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F3C1FE0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F3C20D0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F3C2040)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F3C1FF0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3C17C0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C17A0)
#define SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F3C18B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocator__GetAllPossibleMissingAOTTypes_d__17_TypeDefinitionIndex = 7449;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class FormatterLocator__GetAllPossibleMissingAOTTypes_d__17 : public ::System::Object
	{
	public:
		::System::Type* _arg_5__4; // 0x10
		::System::Type* __3__type; // 0x18
		::System::Collections::Generic::IEnumerator_1<::System::String*>* __7__wrap4; // 0x20
		::Il2CppArray<::System::Type*>* __7__wrap1; // 0x28
		::System::String* __2__current; // 0x30
		::System::Type* type; // 0x38
		::System::Int32 __7__wrap2; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Int32 __l__initialThreadId; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17___M__FINALLY1_OFFSET))(this);
		}

		::System::String* System_Collections_Generic_IEnumerator_System_String__get_Current()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_STRING__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* System_Collections_Generic_IEnumerable_System_String__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_STRING__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_FORMATTERLOCATOR__GETALLPOSSIBLEMISSINGAOTTYPES_D__17_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
