#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F38E000)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F38E340)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F38E2D0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F38E3C0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F38E330)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F38E2E0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F38DFF0)
#define SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39__CTOR_OFFSET UNITYSDK_OFFSET(0x1F38DFD0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int TypeExtensions__GetAllPublicStaticMethods_d__39_TypeDefinitionIndex = 7642;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39>
	class TypeExtensions__GetAllPublicStaticMethods_d__39 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::MemberInfo*>* __7__wrap3; // 0x10
		::System::Type* __3__type; // 0x18
		::System::Reflection::MethodInfo* __2__current; // 0x20
		::System::Type* type; // 0x28
		::System::Type* _currentType_5__3; // 0x30
		::System::Reflection::BindingFlags _flags_5__2; // 0x38
		::System::Int32 __7__wrap4; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Int32 __l__initialThreadId; // 0x44

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_MOVENEXT_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* System_Collections_Generic_IEnumerator_System_Reflection_MethodInfo__get_Current()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_REFLECTION_METHODINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>* System_Collections_Generic_IEnumerable_System_Reflection_MethodInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_REFLECTION_METHODINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_TYPEEXTENSIONS__GETALLPUBLICSTATICMETHODS_D__39_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
