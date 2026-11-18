#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BLANKLINESBETWEENMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E32E820)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BRACINGSTYLE_OFFSET UNITYSDK_OFFSET(0x1E32E8A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ELSEONCLOSING_OFFSET UNITYSDK_OFFSET(0x1E32E920)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_INDENTSTRING_OFFSET UNITYSDK_OFFSET(0x1E32E9A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E32EA20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_VERBATIMORDER_OFFSET UNITYSDK_OFFSET(0x1E32EAA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BLANKLINESBETWEENMEMBERS_OFFSET UNITYSDK_OFFSET(0x1E32E860)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BRACINGSTYLE_OFFSET UNITYSDK_OFFSET(0x1E32E8E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ELSEONCLOSING_OFFSET UNITYSDK_OFFSET(0x1E32E960)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_INDENTSTRING_OFFSET UNITYSDK_OFFSET(0x1E32E9E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E32EA60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_VERBATIMORDER_OFFSET UNITYSDK_OFFSET(0x1E32EAE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E7E0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeGeneratorOptions_TypeDefinitionIndex = 4031;

	class CodeGeneratorOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_BlankLinesBetweenMembers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BLANKLINESBETWEENMEMBERS_OFFSET))(this);
		}

		::System::Void set_BlankLinesBetweenMembers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BLANKLINESBETWEENMEMBERS_OFFSET))(this, value);
		}

		::System::String* get_BracingStyle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_BRACINGSTYLE_OFFSET))(this);
		}

		::System::Void set_BracingStyle(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_BRACINGSTYLE_OFFSET))(this, value);
		}

		::System::Boolean get_ElseOnClosing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ELSEONCLOSING_OFFSET))(this);
		}

		::System::Void set_ElseOnClosing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ELSEONCLOSING_OFFSET))(this, value);
		}

		::System::String* get_IndentString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_INDENTSTRING_OFFSET))(this);
		}

		::System::Void set_IndentString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_INDENTSTRING_OFFSET))(this, value);
		}

		::System::Object* get_Item(::System::String* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::String* index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean get_VerbatimOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_GET_VERBATIMORDER_OFFSET))(this);
		}

		::System::Void set_VerbatimOrder(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOROPTIONS_SET_VERBATIMORDER_OFFSET))(this, value);
		}
	};
}
