#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define HDG_RDTTYPEEXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6B69D0)
#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET UNITYSDK_OFFSET(0x1A6B67E0)
#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1A6AFFB0)
#define HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A6B1100)
#define HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A69A460)
#define HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET UNITYSDK_OFFSET(0x1A6AA010)
#define HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A6AA360)
#define HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET UNITYSDK_OFFSET(0x1A6AA1E0)

namespace Hdg
{
	inline static constexpr unsigned int rdtTypeExtensions_TypeDefinitionIndex = 48019;

	class rdtTypeExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>** StaticGet_s_fields()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>**)UnitySDK::FromName("Hdg", "rdtTypeExtensions")->GetStaticField(0x16E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUserStruct(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericList(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET))(a1);
		}

		static ::System::Boolean IsReference(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET))(a1);
		}

		static ::System::Type* GetListElementType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET))(a1);
		}

		static ::System::Reflection::FieldInfo* GetFieldInHierarchy(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET))(a1, a2);
		}

		static ::System::Void GetAllFieldsImp(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET))(a1);
		}

	};
}
