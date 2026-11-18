#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/Compiler/GeneratorSupport.h"
#include "unitysdk/System/CodeDom/CodeBinaryOperatorType.h"
#include "unitysdk/System/CodeDom/FieldDirection.h"
#include "unitysdk/System/CodeDom/MemberAttributes.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"

namespace System { class String; }
namespace System::CodeDom { class CodeAttributeArgument; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeBinaryOperatorExpression; }
namespace System::CodeDom { class CodeCommentStatement; }
namespace System::CodeDom { class CodeCommentStatementCollection; }
namespace System::CodeDom { class CodeCompileUnit; }
namespace System::CodeDom { class CodeDefaultValueExpression; }
namespace System::CodeDom { class CodeDirectionExpression; }
namespace System::CodeDom { class CodeDirectiveCollection; }
namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeExpressionCollection; }
namespace System::CodeDom { class CodeNamespace; }
namespace System::CodeDom { class CodeObject; }
namespace System::CodeDom { class CodeParameterDeclarationExpression; }
namespace System::CodeDom { class CodeParameterDeclarationExpressionCollection; }
namespace System::CodeDom { class CodePrimitiveExpression; }
namespace System::CodeDom { class CodeSnippetCompileUnit; }
namespace System::CodeDom { class CodeSnippetStatement; }
namespace System::CodeDom { class CodeStatement; }
namespace System::CodeDom { class CodeStatementCollection; }
namespace System::CodeDom { class CodeTypeDeclaration; }
namespace System::CodeDom { class CodeTypeMember; }
namespace System::CodeDom { class CodeTypeOfExpression; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom { class CodeTypeReferenceExpression; }
namespace System::CodeDom::Compiler { class CodeGeneratorOptions; }
namespace System::IO { class TextWriter; }

#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_CONTINUEONNEWLINE_OFFSET UNITYSDK_OFFSET(0x1E4F94E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEBINARYOPERATOREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9520)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECODEFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x1E4F9560)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMMENTSTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1E4F95E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMMENTSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1E4F95A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNITEND_OFFSET UNITYSDK_OFFSET(0x1E4F9660)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNITSTART_OFFSET UNITYSDK_OFFSET(0x1E4F96A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNIT_OFFSET UNITYSDK_OFFSET(0x1E4F9620)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDECIMALVALUE_OFFSET UNITYSDK_OFFSET(0x1E4F96E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDEFAULTVALUEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9720)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDIRECTIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9760)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x1E4F97A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x1E4F97E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9820)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACEIMPORTS_OFFSET UNITYSDK_OFFSET(0x1E4F98A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACES_OFFSET UNITYSDK_OFFSET(0x1E4F98E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4F9860)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEPARAMETERDECLARATIONEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9920)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEPRIMITIVEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9960)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESINGLEFLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1E4F99A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESNIPPETCOMPILEUNIT_OFFSET UNITYSDK_OFFSET(0x1E4F99E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESNIPPETSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1E4F9A20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1E4F9AA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESTATEMENT_OFFSET UNITYSDK_OFFSET(0x1E4F9A60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPEOFEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9AE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPEREFERENCEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9B20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPES_OFFSET UNITYSDK_OFFSET(0x1E4F9B60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTCLASS_OFFSET UNITYSDK_OFFSET(0x1E4F91A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1E4F9220)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTMEMBER_OFFSET UNITYSDK_OFFSET(0x1E4F91E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTTYPENAME_OFFSET UNITYSDK_OFFSET(0x1E4F9260)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x1E4F92A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTCLASS_OFFSET UNITYSDK_OFFSET(0x1E4F9320)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E4F9360)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTENUM_OFFSET UNITYSDK_OFFSET(0x1E4F93A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTINTERFACE_OFFSET UNITYSDK_OFFSET(0x1E4F93E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E4F9420)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1E4F9460)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1E4F94A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_ISVALIDLANGUAGEINDEPENDENTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9BA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTATTRIBUTEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1E4F9BE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTATTRIBUTEDECLARATIONS_OFFSET UNITYSDK_OFFSET(0x1E4F9C20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1E4F9C60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTEXPRESSIONLIST_1_OFFSET UNITYSDK_OFFSET(0x1E4F9CE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTEXPRESSIONLIST_OFFSET UNITYSDK_OFFSET(0x1E4F9CA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTFIELDSCOPEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9D20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9D60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTMEMBERACCESSMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9DA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTMEMBERSCOPEMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9DE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTOPERATOR_OFFSET UNITYSDK_OFFSET(0x1E4F9E20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E4F9E60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTTYPEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E4F9EA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTTYPENAMEPAIR_OFFSET UNITYSDK_OFFSET(0x1E4F9EE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SET_INDENT_OFFSET UNITYSDK_OFFSET(0x1E4F92E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_CREATEESCAPEDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9F20)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_CREATEVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4F9F60)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMCOMPILEUNIT_OFFSET UNITYSDK_OFFSET(0x1E4F9FA0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E4F9FE0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E4FA020)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1E4FA060)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1E4FA0A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GETTYPEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E4FA0E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_ISVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4FA120)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_SUPPORTS_OFFSET UNITYSDK_OFFSET(0x1E4FA160)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_VALIDATEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4FA1A0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_VALIDATEIDENTIFIERS_OFFSET UNITYSDK_OFFSET(0x1E4FA220)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_VALIDATEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E4FA1E0)
#define SYSTEM_CODEDOM_COMPILER_CODEGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F9160)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeGenerator_TypeDefinitionIndex = 4288;

	class CodeGenerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeDeclaration* get_CurrentClass()
		{
			return ((::System::CodeDom::CodeTypeDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTCLASS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeMember* get_CurrentMember()
		{
			return ((::System::CodeDom::CodeTypeMember*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTMEMBER_OFFSET))(this);
		}

		::System::String* get_CurrentMemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTMEMBERNAME_OFFSET))(this);
		}

		::System::String* get_CurrentTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_CURRENTTYPENAME_OFFSET))(this);
		}

		::System::Int32 get_Indent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_INDENT_OFFSET))(this);
		}

		::System::Void set_Indent(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SET_INDENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurrentClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTCLASS_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentDelegate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTDELEGATE_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentEnum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTENUM_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTINTERFACE_OFFSET))(this);
		}

		::System::Boolean get_IsCurrentStruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_ISCURRENTSTRUCT_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CodeGeneratorOptions* get_Options()
		{
			return ((::System::CodeDom::Compiler::CodeGeneratorOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_OPTIONS_OFFSET))(this);
		}

		::System::IO::TextWriter* get_Output()
		{
			return ((::System::IO::TextWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GET_OUTPUT_OFFSET))(this);
		}

		::System::Void ContinueOnNewLine(::System::String* st)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_CONTINUEONNEWLINE_OFFSET))(this, st);
		}

		::System::Void GenerateBinaryOperatorExpression(::System::CodeDom::CodeBinaryOperatorExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeBinaryOperatorExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEBINARYOPERATOREXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateCodeFromMember(::System::CodeDom::CodeTypeMember* member, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMember*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECODEFROMMEMBER_OFFSET))(this, member, writer, options);
		}

		::System::Void GenerateCommentStatement(::System::CodeDom::CodeCommentStatement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCommentStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMMENTSTATEMENT_OFFSET))(this, e);
		}

		::System::Void GenerateCommentStatements(::System::CodeDom::CodeCommentStatementCollection* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCommentStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMMENTSTATEMENTS_OFFSET))(this, e);
		}

		::System::Void GenerateCompileUnit(::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNIT_OFFSET))(this, e);
		}

		::System::Void GenerateCompileUnitEnd(::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNITEND_OFFSET))(this, e);
		}

		::System::Void GenerateCompileUnitStart(::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATECOMPILEUNITSTART_OFFSET))(this, e);
		}

		::System::Void GenerateDecimalValue(::System::Decimal d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDECIMALVALUE_OFFSET))(this, d);
		}

		::System::Void GenerateDefaultValueExpression(::System::CodeDom::CodeDefaultValueExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDefaultValueExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDEFAULTVALUEEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateDirectionExpression(::System::CodeDom::CodeDirectionExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDirectionExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDIRECTIONEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateDirectives(::System::CodeDom::CodeDirectiveCollection* directives)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeDirectiveCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDIRECTIVES_OFFSET))(this, directives);
		}

		::System::Void GenerateDoubleValue(::System::Double d)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEDOUBLEVALUE_OFFSET))(this, d);
		}

		::System::Void GenerateExpression(::System::CodeDom::CodeExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateNamespace(::System::CodeDom::CodeNamespace* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACE_OFFSET))(this, e);
		}

		::System::Void GenerateNamespaceImports(::System::CodeDom::CodeNamespace* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACEIMPORTS_OFFSET))(this, e);
		}

		::System::Void GenerateNamespaces(::System::CodeDom::CodeCompileUnit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATENAMESPACES_OFFSET))(this, e);
		}

		::System::Void GenerateParameterDeclarationExpression(::System::CodeDom::CodeParameterDeclarationExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEPARAMETERDECLARATIONEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GeneratePrimitiveExpression(::System::CodeDom::CodePrimitiveExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodePrimitiveExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATEPRIMITIVEEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateSingleFloatValue(::System::Single s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESINGLEFLOATVALUE_OFFSET))(this, s);
		}

		::System::Void GenerateSnippetCompileUnit(::System::CodeDom::CodeSnippetCompileUnit* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeSnippetCompileUnit*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESNIPPETCOMPILEUNIT_OFFSET))(this, e);
		}

		::System::Void GenerateSnippetStatement(::System::CodeDom::CodeSnippetStatement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeSnippetStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESNIPPETSTATEMENT_OFFSET))(this, e);
		}

		::System::Void GenerateStatement(::System::CodeDom::CodeStatement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESTATEMENT_OFFSET))(this, e);
		}

		::System::Void GenerateStatements(::System::CodeDom::CodeStatementCollection* stms)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATESTATEMENTS_OFFSET))(this, stms);
		}

		::System::Void GenerateTypeOfExpression(::System::CodeDom::CodeTypeOfExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeOfExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPEOFEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateTypeReferenceExpression(::System::CodeDom::CodeTypeReferenceExpression* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReferenceExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPEREFERENCEEXPRESSION_OFFSET))(this, e);
		}

		::System::Void GenerateTypes(::System::CodeDom::CodeNamespace* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_GENERATETYPES_OFFSET))(this, e);
		}

		static ::System::Boolean IsValidLanguageIndependentIdentifier(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_ISVALIDLANGUAGEINDEPENDENTIDENTIFIER_OFFSET))(value);
		}

		::System::Void OutputAttributeArgument(::System::CodeDom::CodeAttributeArgument* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTATTRIBUTEARGUMENT_OFFSET))(this, arg);
		}

		::System::Void OutputAttributeDeclarations(::System::CodeDom::CodeAttributeDeclarationCollection* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTATTRIBUTEDECLARATIONS_OFFSET))(this, attributes);
		}

		::System::Void OutputDirection(::System::CodeDom::FieldDirection dir)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::FieldDirection))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTDIRECTION_OFFSET))(this, dir);
		}

		::System::Void OutputExpressionList(::System::CodeDom::CodeExpressionCollection* expressions)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTEXPRESSIONLIST_OFFSET))(this, expressions);
		}

		::System::Void OutputExpressionList_1(::System::CodeDom::CodeExpressionCollection* expressions, ::System::Boolean newlineBetweenItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpressionCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTEXPRESSIONLIST_1_OFFSET))(this, expressions, newlineBetweenItems);
		}

		::System::Void OutputFieldScopeModifier(::System::CodeDom::MemberAttributes attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::MemberAttributes))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTFIELDSCOPEMODIFIER_OFFSET))(this, attributes);
		}

		::System::Void OutputIdentifier(::System::String* ident)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTIDENTIFIER_OFFSET))(this, ident);
		}

		::System::Void OutputMemberAccessModifier(::System::CodeDom::MemberAttributes attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::MemberAttributes))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTMEMBERACCESSMODIFIER_OFFSET))(this, attributes);
		}

		::System::Void OutputMemberScopeModifier(::System::CodeDom::MemberAttributes attributes)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::MemberAttributes))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTMEMBERSCOPEMODIFIER_OFFSET))(this, attributes);
		}

		::System::Void OutputOperator(::System::CodeDom::CodeBinaryOperatorType op)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeBinaryOperatorType))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTOPERATOR_OFFSET))(this, op);
		}

		::System::Void OutputParameters(::System::CodeDom::CodeParameterDeclarationExpressionCollection* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTPARAMETERS_OFFSET))(this, parameters);
		}

		::System::Void OutputTypeAttributes(::System::Reflection::TypeAttributes attributes, ::System::Boolean isStruct, ::System::Boolean isEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::TypeAttributes, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTTYPEATTRIBUTES_OFFSET))(this, attributes, isStruct, isEnum);
		}

		::System::Void OutputTypeNamePair(::System::CodeDom::CodeTypeReference* typeRef, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_OUTPUTTYPENAMEPAIR_OFFSET))(this, typeRef, name);
		}

		::System::String* System_CodeDom_Compiler_ICodeGenerator_CreateEscapedIdentifier(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_CREATEESCAPEDIDENTIFIER_OFFSET))(this, value);
		}

		::System::String* System_CodeDom_Compiler_ICodeGenerator_CreateValidIdentifier(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_CREATEVALIDIDENTIFIER_OFFSET))(this, value);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_GenerateCodeFromCompileUnit(::System::CodeDom::CodeCompileUnit* e, ::System::IO::TextWriter* w, ::System::CodeDom::Compiler::CodeGeneratorOptions* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMCOMPILEUNIT_OFFSET))(this, e, w, o);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_GenerateCodeFromExpression(::System::CodeDom::CodeExpression* e, ::System::IO::TextWriter* w, ::System::CodeDom::Compiler::CodeGeneratorOptions* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMEXPRESSION_OFFSET))(this, e, w, o);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_GenerateCodeFromNamespace(::System::CodeDom::CodeNamespace* e, ::System::IO::TextWriter* w, ::System::CodeDom::Compiler::CodeGeneratorOptions* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMNAMESPACE_OFFSET))(this, e, w, o);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_GenerateCodeFromStatement(::System::CodeDom::CodeStatement* e, ::System::IO::TextWriter* w, ::System::CodeDom::Compiler::CodeGeneratorOptions* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMSTATEMENT_OFFSET))(this, e, w, o);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_GenerateCodeFromType(::System::CodeDom::CodeTypeDeclaration* e, ::System::IO::TextWriter* w, ::System::CodeDom::Compiler::CodeGeneratorOptions* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GENERATECODEFROMTYPE_OFFSET))(this, e, w, o);
		}

		::System::String* System_CodeDom_Compiler_ICodeGenerator_GetTypeOutput(::System::CodeDom::CodeTypeReference* type)
		{
			return ((::System::String*(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_GETTYPEOUTPUT_OFFSET))(this, type);
		}

		::System::Boolean System_CodeDom_Compiler_ICodeGenerator_IsValidIdentifier(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_ISVALIDIDENTIFIER_OFFSET))(this, value);
		}

		::System::Boolean System_CodeDom_Compiler_ICodeGenerator_Supports(::System::CodeDom::Compiler::GeneratorSupport support)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::Compiler::GeneratorSupport))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_SUPPORTS_OFFSET))(this, support);
		}

		::System::Void System_CodeDom_Compiler_ICodeGenerator_ValidateIdentifier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_SYSTEM_CODEDOM_COMPILER_ICODEGENERATOR_VALIDATEIDENTIFIER_OFFSET))(this, value);
		}

		::System::Void ValidateIdentifier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_VALIDATEIDENTIFIER_OFFSET))(this, value);
		}

		static ::System::Void ValidateIdentifiers(::System::CodeDom::CodeObject* e)
		{
			return ((::System::Void(*)(::System::CodeDom::CodeObject*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEGENERATOR_VALIDATEIDENTIFIERS_OFFSET))(e);
		}
	};
}
