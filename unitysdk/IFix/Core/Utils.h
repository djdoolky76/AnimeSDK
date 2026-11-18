#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_UTILS_ENUMUNDERLYING_OFFSET UNITYSDK_OFFSET(0x1E41C520)
#define IFIX_CORE_UTILS_ISASSIGNABLE_1_OFFSET UNITYSDK_OFFSET(0x1E41C060)
#define IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1E41BFF0)
#define IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET UNITYSDK_OFFSET(0x1E41C580)
#define IFIX_CORE_UTILS_TYPEMATCH_OFFSET UNITYSDK_OFFSET(0x1E41C2B0)
#define IFIX_CORE_UTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41CCE0)

namespace IFix::Core
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 6955;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet_DelegateAdaptCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x5CA0);
		}
		static ::System::Boolean* StaticGet_DisableValueTypeFieldFix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x31B0);
		}
		static ::System::Boolean* StaticGet_CheckNewFieldTypeFix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x31B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsAssignable(::System::Reflection::MethodInfo* delegateMethod, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_ISASSIGNABLE_OFFSET))(delegateMethod, method);
		}

		static ::System::Boolean IsAssignable_1(::System::Reflection::MethodInfo* delegateMethod, ::System::Reflection::MethodInfo* method, ::System::Boolean relaxEnum)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_ISASSIGNABLE_1_OFFSET))(delegateMethod, method, relaxEnum);
		}

		static ::System::Type* EnumUnderlying(::System::Type* t)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_ENUMUNDERLYING_OFFSET))(t);
		}

		static ::System::Boolean TypeMatch(::System::Type* a, ::System::Type* b, ::System::Boolean relaxEnum)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_TYPEMATCH_OFFSET))(a, b, relaxEnum);
		}

		static ::System::Delegate* TryAdapterToDelegate(::System::Object* obj, ::System::Type* delegateType, ::System::String* prefix, ::System::String* assemblyName)
		{
			return ((::System::Delegate*(*)(::System::Object*, ::System::Type*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IFIX_CORE_UTILS_TRYADAPTERTODELEGATE_OFFSET))(obj, delegateType, prefix, assemblyName);
		}
	};
}
