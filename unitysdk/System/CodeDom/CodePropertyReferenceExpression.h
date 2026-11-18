#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DAD77B0)
#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DAD7830)
#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1DAD77F0)
#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DAD7870)
#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAD7770)
#define SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7730)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodePropertyReferenceExpression_TypeDefinitionIndex = 4269;

	class CodePropertyReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, targetObject, propertyName);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_SET_PROPERTYNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
