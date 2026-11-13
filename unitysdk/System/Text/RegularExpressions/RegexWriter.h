#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x190D7FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CURPOS_OFFSET UNITYSDK_OFFSET(0x190D8710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET UNITYSDK_OFFSET(0x190D8C50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_1_OFFSET UNITYSDK_OFFSET(0x190D87B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_2_OFFSET UNITYSDK_OFFSET(0x190D8830)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET UNITYSDK_OFFSET(0x190D8750)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x190D86C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAKEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x190D8AB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET UNITYSDK_OFFSET(0x190D8B30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET UNITYSDK_OFFSET(0x190D8720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_POPINT_OFFSET UNITYSDK_OFFSET(0x190D86D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PUSHINT_OFFSET UNITYSDK_OFFSET(0x190D8630)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x190D8080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET UNITYSDK_OFFSET(0x190D88C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x190BA430)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexWriter_TypeDefinitionIndex = 2530;

	class RegexWriter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _intStack; // 0x10
		::Il2CppArray<::System::Int32>* _emitted; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _stringhash; // 0x20
		::System::Collections::Hashtable* _caps; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _stringtable; // 0x30
		::System::Int32 _curpos; // 0x38
		::System::Int32 _depth; // 0x3C
		::System::Boolean _counting; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 _trackcount; // 0x44
		::System::Int32 _count; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexCode* Write(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Text::RegularExpressions::RegexCode*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET))(a1);
		}

		::System::Void PushInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PUSHINT_OFFSET))(this, a1);
		}

		::System::Boolean EmptyStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMPTYSTACK_OFFSET))(this);
		}

		::System::Int32 PopInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_POPINT_OFFSET))(this);
		}

		::System::Int32 CurPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CURPOS_OFFSET))(this);
		}

		::System::Void PatchJump(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET))(this, a1, a2);
		}

		::System::Void Emit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET))(this, a1);
		}

		::System::Void Emit_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_1_OFFSET))(this, a1, a2);
		}

		::System::Void Emit_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 StringCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET))(this, a1);
		}

		::System::ArgumentException* MakeException(::System::String* a1)
		{
			return ((::System::ArgumentException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAKEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Int32 MapCapnum(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree* a1)
		{
			return ((::System::Text::RegularExpressions::RegexCode*(*)(::PVOID, ::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET))(this, a1);
		}

		::System::Void EmitFragment(::System::Int32 a1, ::System::Text::RegularExpressions::RegexNode* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET))(this, a1, a2, a3);
		}

	};
}
