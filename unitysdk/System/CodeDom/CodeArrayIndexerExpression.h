#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System::CodeDom { class CodeExpressionCollection; }

#define SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1DB9A030)
#define SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DB9A070)
#define SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1DB9A0B0)
#define SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB99FF0)
#define SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB99FB0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeArrayIndexerExpression_TypeDefinitionIndex = 4237;

	class CodeArrayIndexerExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::Il2CppArray<::System::CodeDom::CodeExpression*>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION__CTOR_1_OFFSET))(this, targetObject, indices);
		}

		::System::CodeDom::CodeExpressionCollection* get_Indices()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_GET_INDICES_OFFSET))(this);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARRAYINDEXEREXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
