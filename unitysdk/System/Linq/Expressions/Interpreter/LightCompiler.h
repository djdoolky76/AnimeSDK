#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LabelScopeKind.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/LocalDefinition.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class ElementInit; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class IArgumentProvider; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { class MemberBinding; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class StackGuard; }
namespace System::Linq::Expressions { class SwitchExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Linq::Expressions::Interpreter { class ByRefUpdater; }
namespace System::Linq::Expressions::Interpreter { class DebugInfo; }
namespace System::Linq::Expressions::Interpreter { class InstructionList; }
namespace System::Linq::Expressions::Interpreter { class Interpreter; }
namespace System::Linq::Expressions::Interpreter { class LabelInfo; }
namespace System::Linq::Expressions::Interpreter { class LabelScopeInfo; }
namespace System::Linq::Expressions::Interpreter { class LightCompiler; }
namespace System::Linq::Expressions::Interpreter { class LightDelegateCreator; }
namespace System::Linq::Expressions::Interpreter { class LocalVariable; }
namespace System::Linq::Expressions::Interpreter { class LocalVariables; }
namespace System::Linq::Expressions::Interpreter { template <typename T1, typename T2> class HybridReferenceDictionary_2; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C3120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CHECKRETHROW_OFFSET UNITYSDK_OFFSET(0x200B9DA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEADDRESS_OFFSET UNITYSDK_OFFSET(0x200BBD40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEANDALSOBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B4D70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARITHMETIC_OFFSET UNITYSDK_OFFSET(0x200B10E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARRAYINDEXADDRESS_OFFSET UNITYSDK_OFFSET(0x200BD040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASSIGNBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200AE9B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASVOID_OFFSET UNITYSDK_OFFSET(0x200AD5B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200AEB50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEND_OFFSET UNITYSDK_OFFSET(0x200AD510)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200ACAA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKSTART_OFFSET UNITYSDK_OFFSET(0x200ACD40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOALESCEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BFE10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOMPARISON_OFFSET UNITYSDK_OFFSET(0x200B1EF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONDITIONALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B6680)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONSTANTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200ABFF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTTOTYPE_OFFSET UNITYSDK_OFFSET(0x200B3210)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B2520)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEBUGINFOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BF4B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_1_OFFSET UNITYSDK_OFFSET(0x200AC1C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200AC120)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEEQUAL_OFFSET UNITYSDK_OFFSET(0x200B1B10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETBOXEDVARIABLE_OFFSET UNITYSDK_OFFSET(0x200AC880)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETVARIABLE_OFFSET UNITYSDK_OFFSET(0x200AC450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGOTOEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B8F30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x200ADAA0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200AD7D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINVOCATIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C09A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELABELEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B8CE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELAMBDAEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BFBC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELIFTEDLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B53C0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C0DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINIT_OFFSET UNITYSDK_OFFSET(0x200C0E60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B4DF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOOPEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B6C10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_1_OFFSET UNITYSDK_OFFSET(0x200AE100)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x200ADFC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BE550)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C1540)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINIT_OFFSET UNITYSDK_OFFSET(0x200C15B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBER_OFFSET UNITYSDK_OFFSET(0x200BE650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_1_OFFSET UNITYSDK_OFFSET(0x200BB380)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BB290)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B5080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMULTIDIMARRAYACCESS_OFFSET UNITYSDK_OFFSET(0x200BD840)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWARRAYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BEEE0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BE080)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOLABELPUSH_OFFSET UNITYSDK_OFFSET(0x200C2B80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x200B1D00)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B3E30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEORELSEBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B5000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEPARAMETEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x200ACA20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEQUOTEUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C1D20)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILERUNTIMEVARIABLESEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BF790)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESETVARIABLE_OFFSET UNITYSDK_OFFSET(0x200AC910)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESTRINGSWITCHEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B81E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESWITCHEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B6FB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETHROWUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B9E10)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETOP_OFFSET UNITYSDK_OFFSET(0x200AB650)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BA020)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYFAULTEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200BAF70)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEASEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B4920)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEEQUALEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C2580)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEISEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C27B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B3FF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNBOXUNARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200C2350)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNLIFTEDLOGICALBINARYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x200B6450)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEVARIABLEASSIGNMENT_OFFSET UNITYSDK_OFFSET(0x200AE8D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x200AB9F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x200AD4B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200AB620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CTOR_OFFSET UNITYSDK_OFFSET(0x200AB470)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINEBLOCKLABELS_OFFSET UNITYSDK_OFFSET(0x200B9BC0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINELABEL_OFFSET UNITYSDK_OFFSET(0x200B6ED0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITCOPYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x200AC5B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITINDEXGET_OFFSET UNITYSDK_OFFSET(0x200AD8E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITTHISFORMETHODCALL_OFFSET UNITYSDK_OFFSET(0x200AD8D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYBOOLCHECK_OFFSET UNITYSDK_OFFSET(0x200B4990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYMETHODCALL_OFFSET UNITYSDK_OFFSET(0x200B4730)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSUREAVAILABLEFORCLOSURE_OFFSET UNITYSDK_OFFSET(0x200AC2F0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSURELABEL_OFFSET UNITYSDK_OFFSET(0x200B9250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x200C1BB0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GET_INSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x200AB640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_LOADLOCALNOVALUETYPECOPY_OFFSET UNITYSDK_OFFSET(0x200AC500)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAKEINTERPRETER_OFFSET UNITYSDK_OFFSET(0x200ABA40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAYBEMUTABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x200AC700)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_POPLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x200B6F90)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_PUSHLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x200B6E80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_REFERENCELABEL_OFFSET UNITYSDK_OFFSET(0x200B9170)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_RESOLVELOCAL_OFFSET UNITYSDK_OFFSET(0x200AC400)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_SHOULDWRITEBACKNODE_OFFSET UNITYSDK_OFFSET(0x200BD400)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_TRYPUSHLABELBLOCK_OFFSET UNITYSDK_OFFSET(0x200B9360)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LightCompiler_TypeDefinitionIndex = 3485;

	class LightCompiler : public ::System::Object
	{
	public:
		::System::Linq::Expressions::Interpreter::LightCompiler* _parent; // 0x10
		::System::Linq::Expressions::Interpreter::LabelScopeInfo* _labelBlock; // 0x18
		::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>* _debugInfos; // 0x20
		::System::Linq::Expressions::Interpreter::InstructionList* _instructions; // 0x28
		::System::Linq::Expressions::StackGuard* _guard; // 0x30
		::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* _treeLabels; // 0x38
		::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>* _exceptionForRethrowStack; // 0x40
		::System::Linq::Expressions::Interpreter::LocalVariables* _locals; // 0x48
		static ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>** StaticGet_s_emptyLocals()
		{
			return (::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>**)UnitySDK::FromName("System.Linq.Expressions.Interpreter", "LightCompiler")->GetStaticField(0x42990);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Linq::Expressions::Interpreter::LightCompiler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LightCompiler*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CCTOR_OFFSET))();
		}

		::System::Linq::Expressions::Interpreter::InstructionList* get_Instructions()
		{
			return ((::System::Linq::Expressions::Interpreter::InstructionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GET_INSTRUCTIONS_OFFSET))(this);
		}

		::System::Linq::Expressions::Interpreter::LightDelegateCreator* CompileTop(::System::Linq::Expressions::LambdaExpression* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LightDelegateCreator*(*)(::PVOID, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETOP_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::Interpreter* MakeInterpreter(::System::String* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::Interpreter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAKEINTERPRETER_OFFSET))(this, a1);
		}

		::System::Void CompileConstantExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONSTANTEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileDefaultExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileDefaultExpression_1(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEFAULTEXPRESSION_1_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* EnsureAvailableForClosure(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSUREAVAILABLEFORCLOSURE_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::LocalVariable* ResolveLocal(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LocalVariable*(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_RESOLVELOCAL_OFFSET))(this, a1);
		}

		::System::Void CompileGetVariable(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETVARIABLE_OFFSET))(this, a1);
		}

		::System::Void EmitCopyValueType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITCOPYVALUETYPE_OFFSET))(this, a1);
		}

		::System::Void LoadLocalNoValueTypeCopy(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_LOADLOCALNOVALUETYPECOPY_OFFSET))(this, a1);
		}

		::System::Boolean MaybeMutableValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_MAYBEMUTABLEVALUETYPE_OFFSET))(this, a1);
		}

		::System::Void CompileGetBoxedVariable(::System::Linq::Expressions::ParameterExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGETBOXEDVARIABLE_OFFSET))(this, a1);
		}

		::System::Void CompileSetVariable(::System::Linq::Expressions::ParameterExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ParameterExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESETVARIABLE_OFFSET))(this, a1, a2);
		}

		::System::Void CompileParameterExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEPARAMETEREXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileBlockExpression(::System::Linq::Expressions::Expression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEXPRESSION_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* CompileBlockStart(::System::Linq::Expressions::BlockExpression* a1)
		{
			return ((::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*(*)(::PVOID, ::System::Linq::Expressions::BlockExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKSTART_OFFSET))(this, a1);
		}

		::System::Void CompileBlockEnd(::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Linq::Expressions::Interpreter::LocalDefinition>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBLOCKEND_OFFSET))(this, a1);
		}

		::System::Void CompileIndexExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void EmitIndexGet(::System::Linq::Expressions::IndexExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::IndexExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITINDEXGET_OFFSET))(this, a1);
		}

		::System::Void CompileIndexAssignment(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINDEXASSIGNMENT_OFFSET))(this, a1, a2);
		}

		::System::Void CompileMemberAssignment(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_OFFSET))(this, a1, a2);
		}

		::System::Void CompileMemberAssignment_1(::System::Boolean a1, ::System::Reflection::MemberInfo* a2, ::System::Linq::Expressions::Expression* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Reflection::MemberInfo*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERASSIGNMENT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CompileVariableAssignment(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEVARIABLEASSIGNMENT_OFFSET))(this, a1, a2);
		}

		::System::Void CompileAssignBinaryExpression(::System::Linq::Expressions::Expression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASSIGNBINARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileBinaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEBINARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEEQUAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompileNotEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEQUAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompileComparison(::System::Linq::Expressions::BinaryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOMPARISON_OFFSET))(this, a1);
		}

		::System::Void CompileArithmetic(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARITHMETIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompileConvertUnaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTUNARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileConvertToType(::System::Type* a1, ::System::Type* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONVERTTOTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CompileNotExpression(::System::Linq::Expressions::UnaryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOTEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileUnaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void EmitUnaryMethodCall(::System::Linq::Expressions::UnaryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYMETHODCALL_OFFSET))(this, a1);
		}

		::System::Void EmitUnaryBoolCheck(::System::Linq::Expressions::UnaryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITUNARYBOOLCHECK_OFFSET))(this, a1);
		}

		::System::Void CompileAndAlsoBinaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEANDALSOBINARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileOrElseBinaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEORELSEBINARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOGICALBINARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileMethodLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODLOGICALBINARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileLiftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELIFTEDLOGICALBINARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileUnliftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::BinaryExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNLIFTEDLOGICALBINARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileConditionalExpression(::System::Linq::Expressions::Expression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECONDITIONALEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileLoopExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELOOPEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileSwitchExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESWITCHEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileStringSwitchExpression(::System::Linq::Expressions::SwitchExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::SwitchExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILESTRINGSWITCHEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileLabelExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELABELEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileGotoExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEGOTOEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void PushLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeKind))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_PUSHLABELBLOCK_OFFSET))(this, a1);
		}

		::System::Void PopLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Interpreter::LabelScopeKind))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_POPLABELBLOCK_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* EnsureLabel(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_ENSURELABEL_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* ReferenceLabel(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_REFERENCELABEL_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Interpreter::LabelInfo* DefineLabel(::System::Linq::Expressions::LabelTarget* a1)
		{
			return ((::System::Linq::Expressions::Interpreter::LabelInfo*(*)(::PVOID, ::System::Linq::Expressions::LabelTarget*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINELABEL_OFFSET))(this, a1);
		}

		::System::Boolean TryPushLabelBlock(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_TRYPUSHLABELBLOCK_OFFSET))(this, a1);
		}

		::System::Void DefineBlockLabels(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_DEFINEBLOCKLABELS_OFFSET))(this, a1);
		}

		::System::Void CheckRethrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_CHECKRETHROW_OFFSET))(this);
		}

		::System::Void CompileThrowUnaryExpression(::System::Linq::Expressions::Expression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETHROWUNARYEXPRESSION_OFFSET))(this, a1, a2);
		}

		::System::Void CompileTryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileTryFaultExpression(::System::Linq::Expressions::TryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::TryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETRYFAULTEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileMethodCallExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileMethodCallExpression_1(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::IArgumentProvider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::IArgumentProvider*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMETHODCALLEXPRESSION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileArrayIndexAddress(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Int32 a3)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEARRAYINDEXADDRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EmitThisForMethodCall(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_EMITTHISFORMETHODCALL_OFFSET))(this, a1);
		}

		static ::System::Boolean ShouldWritebackNode(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_SHOULDWRITEBACKNODE_OFFSET))(a1);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileAddress(::System::Linq::Expressions::Expression* a1, ::System::Int32 a2)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEADDRESS_OFFSET))(this, a1, a2);
		}

		::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileMultiDimArrayAccess(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::IArgumentProvider* a2, ::System::Int32 a3)
		{
			return ((::System::Linq::Expressions::Interpreter::ByRefUpdater*(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::IArgumentProvider*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMULTIDIMARRAYACCESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompileNewExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileMemberExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBEREXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileMember(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MemberInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompileNewArrayExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENEWARRAYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileDebugInfoExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEDEBUGINFOEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileRuntimeVariablesExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILERUNTIMEVARIABLESEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileLambdaExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELAMBDAEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileCoalesceBinaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILECOALESCEBINARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileInvocationExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEINVOCATIONEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileListInitExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINITEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileListInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILELISTINIT_OFFSET))(this, a1);
		}

		::System::Void CompileMemberInitExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINITEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileMemberInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEMEMBERINIT_OFFSET))(this, a1);
		}

		static ::System::Type* GetMemberType(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_GETMEMBERTYPE_OFFSET))(a1);
		}

		::System::Void CompileQuoteUnaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEQUOTEUNARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileUnboxUnaryExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEUNBOXUNARYEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileTypeEqualExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEEQUALEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileTypeAsExpression(::System::Linq::Expressions::UnaryExpression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::UnaryExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEASEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void CompileTypeIsExpression(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILETYPEISEXPRESSION_OFFSET))(this, a1);
		}

		::System::Void Compile(::System::Linq::Expressions::Expression* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::Void CompileAsVoid(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILEASVOID_OFFSET))(this, a1);
		}

		::System::Void CompileNoLabelPush(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILENOLABELPUSH_OFFSET))(this, a1);
		}

		::System::Void Compile_1(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LIGHTCOMPILER_COMPILE_1_OFFSET))(this, a1);
		}

	};
}
