#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1AB9C130)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x1AB98930)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET UNITYSDK_OFFSET(0x1AB9A910)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AB9DE20)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1AB9E2A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AB9EB10)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x1AB9F580)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9AC20)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET UNITYSDK_OFFSET(0x1AB9EE10)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9AE00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1AB9DB40)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET UNITYSDK_OFFSET(0x1AB9F4B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AB9D130)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x1AB9BDD0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x1AB9C330)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AB9CFC0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET UNITYSDK_OFFSET(0x1AB9B370)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET UNITYSDK_OFFSET(0x1AB9B070)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET UNITYSDK_OFFSET(0x1AB9CDE0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x1AB9C1D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET UNITYSDK_OFFSET(0x1AB9CD50)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AB9CF00)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET UNITYSDK_OFFSET(0x1AB9D960)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET UNITYSDK_OFFSET(0x1AB9D500)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AB9DAF0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET UNITYSDK_OFFSET(0x1AB9D6A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AB9D8C0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET UNITYSDK_OFFSET(0x1AB9B650)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x1AB9B210)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET UNITYSDK_OFFSET(0x1AB9CE70)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET UNITYSDK_OFFSET(0x1AB9C560)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9AFD0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9ACD0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET UNITYSDK_OFFSET(0x1AB9B7D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1AB9B0B0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET UNITYSDK_OFFSET(0x1AB99260)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET UNITYSDK_OFFSET(0x1AB9B4D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9B820)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AB987A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET UNITYSDK_OFFSET(0x1AB9EF30)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x1AB9EF20)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeUtils_TypeDefinitionIndex = 3691;

	class TypeUtils : public ::System::Object
	{
	public:
		static ::System::Reflection::Assembly** StaticGet_s_mscorlib()
		{
			return (::System::Reflection::Assembly**)UnitySDK::FromName("System.Dynamic.Utils", "TypeUtils")->GetStaticField(0x2E790);
		}

		static ::System::Type* GetNonNullableType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Type* GetNullableType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsNullableType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsNullableOrReferenceType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsNumeric(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET))(a1);
		}

		static ::System::Boolean IsInteger(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET))(a1);
		}

		static ::System::Boolean IsArithmetic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET))(a1);
		}

		static ::System::Boolean IsUnsignedInt(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET))(a1);
		}

		static ::System::Boolean IsIntegerOrBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsNumericOrBool(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET))(a1);
		}

		static ::System::Boolean IsValidInstanceType(::System::Reflection::MemberInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasIdentityPrimitiveOrNullableConversionTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasReferenceConversionTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsCovariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsContravariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsInvariant(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsDelegate(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET))(a1);
		}

		static ::System::Boolean IsLegalExplicitVariantDelegateConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsConvertible(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET))(a1);
		}

		static ::System::Boolean HasReferenceEquality(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasBuiltInEqualityOperator(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitlyConvertibleTo(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* FindConversionOperator(::Il2CppArray<::System::Reflection::MethodInfo*>* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::Il2CppArray<::System::Reflection::MethodInfo*>*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsImplicitNumericConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitReferenceConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitBoxingConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsImplicitNullableConversion(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET))(a1, a2);
		}

		static ::System::Type* FindGenericType(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET))(a1, a2);
		}

		static ::System::Type* GetNonRefType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET))(a1);
		}

		static ::System::Boolean AreEquivalent(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET))(a1, a2);
		}

		static ::System::Boolean AreReferenceAssignable(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSameOrSubclass(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateType(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateType_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ValidateType_2(::System::Type* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::Assembly* get_MsCorLib()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GET_MSCORLIB_OFFSET))();
		}

		static ::System::Boolean CanCache(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_CANCACHE_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET))(a1);
		}

	};
}
