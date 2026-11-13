#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlWriter.h"
namespace System { class String; }
namespace System::Threading::Tasks { class Task; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET UNITYSDK_OFFSET(0x18A59920)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18A5A860)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x18A598B0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A5AAC0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18A5A8F0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x18A5A7D0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x18A5A980)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x18A5A670)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x18A5A720)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x18A59F50)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18A5A1E0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18A5A470)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18A59FF0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x18A59B80)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18A59EC0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x18A59AF0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18A59CF0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x18A5A140)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18A59D80)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18A5A090)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x18A5A5D0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x18A5A520)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18A59E10)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x18A59A50)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x18A599C0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18A59C40)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x18A5A320)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18A5A3C0)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x18A5AA20)
#define SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18A5A280)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckWriter_TypeDefinitionIndex = 1832;

	class XmlAsyncCheckWriter : public ::System::Xml::XmlWriter
	{
	public:
		::System::Xml::XmlWriter* coreWriter; // 0x10
		::System::Threading::Tasks::Task* lastTask; // 0x18
		::System::Void _ctor(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CTOR_OFFSET))(this, a1);
		}

		::System::Void CheckAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CHECKASYNC_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, a1);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_LOOKUPPREFIX_OFFSET))(this, a1);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKWRITER_DISPOSE_OFFSET))(this, a1);
		}

	};
}
