#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/NewLineHandling.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoder; }
namespace System::Text { class Encoding; }
namespace System::Xml { class CharEntityEncoderFallback; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x192AB980)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x192ABA20)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET UNITYSDK_OFFSET(0x192A8090)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x192ABEE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x192AABE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x192A7780)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_2_OFFSET UNITYSDK_OFFSET(0x192A78E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x192A72F0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET UNITYSDK_OFFSET(0x192AB6B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x192ABF60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x192ABA60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x192AB410)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x192AB0C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x192AB280)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x192A8CB0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET UNITYSDK_OFFSET(0x192AC020)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x192AB9C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x192ABB60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x192ABA40)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x192AB9A0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x192AB9E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x192ABEA0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x192ABEC0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x192ABCB0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x192A8130)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x192A85B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x192ABA00)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x192A7420)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x192A9DE0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x192A8E60)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x192A8CC0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x192A9B70)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x192AA6E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x192A93E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x192A92E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x192A8240)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x192AA150)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x192A89B0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x192A85F0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x192A8C50)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x192A9A50)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x192A8770)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x192A8A10)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x192ABC40)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x192A9920)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x192AA7E0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x192AAB80)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x192AA760)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x192A8890)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x192A84D0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x192A8AF0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x192AA550)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x192AA5C0)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x192A9D70)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x192A8160)
#define SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x192A7E40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEncodedRawTextWriter_TypeDefinitionIndex = 1834;

	class XmlEncodedRawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::Il2CppArray<::System::Byte>* bufBytes; // 0x20
		::System::Xml::XmlCharType xmlCharType; // 0x28
		::Il2CppArray<::System::Int32>* textContentMarks; // 0x30
		::System::Xml::CharEntityEncoderFallback* charEntityFallback; // 0x38
		::System::Text::Encoding* encoding; // 0x40
		::System::Text::Encoder* encoder; // 0x48
		::System::IO::TextWriter* writer; // 0x50
		::System::IO::Stream* stream; // 0x58
		::Il2CppArray<::System::Char>* bufChars; // 0x60
		::System::String* newLineChars; // 0x68
		::System::Int32 bufBytesUsed; // 0x70
		::System::Int32 bufPos; // 0x74
		::System::Xml::XmlStandalone standalone; // 0x78
		::System::Boolean checkCharacters; // 0x7C
		::System::Boolean hadDoubleBracket; // 0x7D
		::System::Boolean inTextContent; // 0x7E
		::System::Boolean autoXmlDeclaration; // 0x7F
		::System::Boolean trackTextContent; // 0x80
		::System::Boolean mergeCDataSections; // 0x81
		::System::Boolean writeToNull; // 0x82
		::System::Byte _padding0[0x1];
		::System::Int32 cdataPos; // 0x84
		::System::Xml::XmlOutputMethod outputMethod; // 0x88
		::System::Int32 lastMarkPos; // 0x8C
		::System::Int32 textPos; // 0x90
		::System::Int32 contentPos; // 0x94
		::System::Int32 bufLen; // 0x98
		::System::Int32 attrEndPos; // 0x9C
		::System::Boolean closeOutput; // 0xA0
		::System::Boolean useAsync; // 0xA1
		::System::Boolean inAttributeValue; // 0xA2
		::System::Boolean omitXmlDeclaration; // 0xA3
		::System::Xml::NewLineHandling newLineHandling; // 0xA4
		::System::Void _ctor(::System::Xml::XmlWriterSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void EncodeChars(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FlushEncoder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_FLUSHENCODER_OFFSET))(this);
		}

		::System::Void WriteAttributeTextBlock(::PVOID a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteElementTextBlock(::PVOID a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Void RawText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_OFFSET))(this, a1);
		}

		::System::Void RawText_1(::PVOID a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWTEXT_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRawWithCharChecking(::PVOID a1, ::PVOID a2)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCommentOrPi(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECOMMENTORPI_OFFSET))(this, a1, a2);
		}

		::System::Void WriteCDataSection(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITECDATASECTION_OFFSET))(this, a1);
		}

		static ::PVOID EncodeSurrogate(::PVOID a1, ::PVOID a2, ::PVOID a3)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODESURROGATE_OFFSET))(a1, a2, a3);
		}

		::PVOID InvalidXmlChar(::System::Int32 a1, ::PVOID a2, ::System::Boolean a3)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_INVALIDXMLCHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EncodeChar(::System::Object* a1, ::PVOID a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_ENCODECHAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ChangeTextContentMark(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHANGETEXTCONTENTMARK_OFFSET))(this, a1);
		}

		::System::Void GrowTextContentMarks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GROWTEXTCONTENTMARKS_OFFSET))(this);
		}

		::PVOID WriteNewLine(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_WRITENEWLINE_OFFSET))(this, a1);
		}

		static ::PVOID LtEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LTENTITY_OFFSET))(a1);
		}

		static ::PVOID GtEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_GTENTITY_OFFSET))(a1);
		}

		static ::PVOID AmpEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_AMPENTITY_OFFSET))(a1);
		}

		static ::PVOID QuoteEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_QUOTEENTITY_OFFSET))(a1);
		}

		static ::PVOID TabEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_TABENTITY_OFFSET))(a1);
		}

		static ::PVOID LineFeedEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_LINEFEEDENTITY_OFFSET))(a1);
		}

		static ::PVOID CarriageReturnEntity(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET))(a1);
		}

		static ::PVOID CharEntity(::PVOID a1, ::System::Char a2)
		{
			return ((::PVOID(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_CHARENTITY_OFFSET))(a1, a2);
		}

		static ::PVOID RawStartCData(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWSTARTCDATA_OFFSET))(a1);
		}

		static ::PVOID RawEndCData(::PVOID a1)
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_RAWENDCDATA_OFFSET))(a1);
		}

		::System::Void ValidateContentChars(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENCODEDRAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET))(this, a1, a2, a3);
		}

	};
}
