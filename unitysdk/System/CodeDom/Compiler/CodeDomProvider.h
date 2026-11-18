#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/Compiler/GeneratorSupport.h"
#include "unitysdk/System/CodeDom/Compiler/LanguageOptions.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeCompileUnit; }
namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeNamespace; }
namespace System::CodeDom { class CodeStatement; }
namespace System::CodeDom { class CodeTypeDeclaration; }
namespace System::CodeDom { class CodeTypeMember; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom::Compiler { class CodeGeneratorOptions; }
namespace System::CodeDom::Compiler { class CompilerInfo; }
namespace System::CodeDom::Compiler { class CompilerParameters; }
namespace System::CodeDom::Compiler { class CompilerResults; }
namespace System::CodeDom::Compiler { class ICodeGenerator; }
namespace System::CodeDom::Compiler { class ICodeParser; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::IO { class TextReader; }
namespace System::IO { class TextWriter; }

#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMDOM_OFFSET UNITYSDK_OFFSET(0x1E32E160)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMFILE_OFFSET UNITYSDK_OFFSET(0x1E32E1A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x1E32E1E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEESCAPEDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E32E220)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEGENERATOR_1_OFFSET UNITYSDK_OFFSET(0x1E32E260)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEGENERATOR_2_OFFSET UNITYSDK_OFFSET(0x1E32E2A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPARSER_OFFSET UNITYSDK_OFFSET(0x1E32E2E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1E32E360)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1E32E320)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E32E3A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMCOMPILEUNIT_OFFSET UNITYSDK_OFFSET(0x1E32E3E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1E32E420)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x1E32E460)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E32E4A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMSTATEMENT_OFFSET UNITYSDK_OFFSET(0x1E32E4E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1E32E520)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETALLCOMPILERINFO_OFFSET UNITYSDK_OFFSET(0x1E32E560)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETCOMPILERINFO_OFFSET UNITYSDK_OFFSET(0x1E32E5A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1E32E5E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETLANGUAGEFROMEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E32E620)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETTYPEOUTPUT_OFFSET UNITYSDK_OFFSET(0x1E32E660)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GET_FILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E32E0E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GET_LANGUAGEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E32E120)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISDEFINEDEXTENSION_OFFSET UNITYSDK_OFFSET(0x1E32E6A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISDEFINEDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1E32E6E0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISVALIDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1E32E720)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_PARSE_OFFSET UNITYSDK_OFFSET(0x1E32E760)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_SUPPORTS_OFFSET UNITYSDK_OFFSET(0x1E32E7A0)
#define SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32E0A0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeDomProvider_TypeDefinitionIndex = 4025;

	class CodeDomProvider : public ::System::ComponentModel::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER__CTOR_OFFSET))(this);
		}

		::System::String* get_FileExtension()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GET_FILEEXTENSION_OFFSET))(this);
		}

		::System::CodeDom::Compiler::LanguageOptions get_LanguageOptions()
		{
			return ((::System::CodeDom::Compiler::LanguageOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GET_LANGUAGEOPTIONS_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CompilerResults* CompileAssemblyFromDom(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>* compilationUnits)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::CodeDom::CodeCompileUnit*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMDOM_OFFSET))(this, options, compilationUnits);
		}

		::System::CodeDom::Compiler::CompilerResults* CompileAssemblyFromFile(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* fileNames)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMFILE_OFFSET))(this, options, fileNames);
		}

		::System::CodeDom::Compiler::CompilerResults* CompileAssemblyFromSource(::System::CodeDom::Compiler::CompilerParameters* options, ::Il2CppArray<::System::String*>* sources)
		{
			return ((::System::CodeDom::Compiler::CompilerResults*(*)(::PVOID, ::System::CodeDom::Compiler::CompilerParameters*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_COMPILEASSEMBLYFROMSOURCE_OFFSET))(this, options, sources);
		}

		::System::String* CreateEscapedIdentifier(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEESCAPEDIDENTIFIER_OFFSET))(this, value);
		}

		::System::CodeDom::Compiler::ICodeGenerator* CreateGenerator_1(::System::IO::TextWriter* output)
		{
			return ((::System::CodeDom::Compiler::ICodeGenerator*(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEGENERATOR_1_OFFSET))(this, output);
		}

		::System::CodeDom::Compiler::ICodeGenerator* CreateGenerator_2(::System::String* fileName)
		{
			return ((::System::CodeDom::Compiler::ICodeGenerator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEGENERATOR_2_OFFSET))(this, fileName);
		}

		::System::CodeDom::Compiler::ICodeParser* CreateParser()
		{
			return ((::System::CodeDom::Compiler::ICodeParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPARSER_OFFSET))(this);
		}

		static ::System::CodeDom::Compiler::CodeDomProvider* CreateProvider(::System::String* language)
		{
			return ((::System::CodeDom::Compiler::CodeDomProvider*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPROVIDER_OFFSET))(language);
		}

		static ::System::CodeDom::Compiler::CodeDomProvider* CreateProvider_1(::System::String* language, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* providerOptions)
		{
			return ((::System::CodeDom::Compiler::CodeDomProvider*(*)(::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEPROVIDER_1_OFFSET))(language, providerOptions);
		}

		::System::String* CreateValidIdentifier(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_CREATEVALIDIDENTIFIER_OFFSET))(this, value);
		}

		::System::Void GenerateCodeFromCompileUnit(::System::CodeDom::CodeCompileUnit* compileUnit, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCompileUnit*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMCOMPILEUNIT_OFFSET))(this, compileUnit, writer, options);
		}

		::System::Void GenerateCodeFromExpression(::System::CodeDom::CodeExpression* expression, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMEXPRESSION_OFFSET))(this, expression, writer, options);
		}

		::System::Void GenerateCodeFromMember(::System::CodeDom::CodeTypeMember* member, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMember*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMMEMBER_OFFSET))(this, member, writer, options);
		}

		::System::Void GenerateCodeFromNamespace(::System::CodeDom::CodeNamespace* codeNamespace, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMNAMESPACE_OFFSET))(this, codeNamespace, writer, options);
		}

		::System::Void GenerateCodeFromStatement(::System::CodeDom::CodeStatement* statement, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMSTATEMENT_OFFSET))(this, statement, writer, options);
		}

		::System::Void GenerateCodeFromType(::System::CodeDom::CodeTypeDeclaration* codeType, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GENERATECODEFROMTYPE_OFFSET))(this, codeType, writer, options);
		}

		static ::Il2CppArray<::System::CodeDom::Compiler::CompilerInfo*>* GetAllCompilerInfo()
		{
			return ((::Il2CppArray<::System::CodeDom::Compiler::CompilerInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETALLCOMPILERINFO_OFFSET))();
		}

		static ::System::CodeDom::Compiler::CompilerInfo* GetCompilerInfo(::System::String* language)
		{
			return ((::System::CodeDom::Compiler::CompilerInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETCOMPILERINFO_OFFSET))(language);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETCONVERTER_OFFSET))(this, type);
		}

		static ::System::String* GetLanguageFromExtension(::System::String* extension)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETLANGUAGEFROMEXTENSION_OFFSET))(extension);
		}

		::System::String* GetTypeOutput(::System::CodeDom::CodeTypeReference* type)
		{
			return ((::System::String*(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_GETTYPEOUTPUT_OFFSET))(this, type);
		}

		static ::System::Boolean IsDefinedExtension(::System::String* extension)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISDEFINEDEXTENSION_OFFSET))(extension);
		}

		static ::System::Boolean IsDefinedLanguage(::System::String* language)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISDEFINEDLANGUAGE_OFFSET))(language);
		}

		::System::Boolean IsValidIdentifier(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_ISVALIDIDENTIFIER_OFFSET))(this, value);
		}

		::System::CodeDom::CodeCompileUnit* Parse(::System::IO::TextReader* codeStream)
		{
			return ((::System::CodeDom::CodeCompileUnit*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_PARSE_OFFSET))(this, codeStream);
		}

		::System::Boolean Supports(::System::CodeDom::Compiler::GeneratorSupport generatorSupport)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::Compiler::GeneratorSupport))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEDOMPROVIDER_SUPPORTS_OFFSET))(this, generatorSupport);
		}
	};
}
