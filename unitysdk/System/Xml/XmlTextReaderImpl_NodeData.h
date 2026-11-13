#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/LineInfo.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlTextReaderImpl_NodeData; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET UNITYSDK_OFFSET(0x1FC9DB20)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FC9D9A0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1FC9DD00)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1FC9DDE0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9D930)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x1FC9DD80)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1FC9DA60)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1FC9DA30)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x1FC9DA10)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x1FC9DA20)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1FC9D840)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1FC9DAA0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET UNITYSDK_OFFSET(0x1FC9DA90)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET UNITYSDK_OFFSET(0x1FC9DCC0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET UNITYSDK_OFFSET(0x1FC9DB70)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1FC9DB60)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET UNITYSDK_OFFSET(0x1FC9DC60)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x1FC9DC20)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET UNITYSDK_OFFSET(0x1FC9DBD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x1FC9DB80)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1FC9DCA0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1FC9C9C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1FC9DA80)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1FC9DA50)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1FC9DE40)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET UNITYSDK_OFFSET(0x1FC9DAE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NodeData_TypeDefinitionIndex = 1858;

	class XmlTextReaderImpl_NodeData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* chars; // 0x10
		::System::Object* schemaType; // 0x18
		::System::String* prefix; // 0x20
		::System::String* localName; // 0x28
		::System::Object* typedValue; // 0x30
		::System::String* value; // 0x38
		::System::String* ns; // 0x40
		::System::Xml::XmlTextReaderImpl_NodeData* nextAttrValueChunk; // 0x48
		::System::String* nameWPrefix; // 0x50
		::System::Xml::XmlNodeType type; // 0x58
		::System::Int32 valueStartPos; // 0x5C
		::System::Int32 entityId; // 0x60
		::System::Xml::LineInfo lineInfo2; // 0x64
		::System::Char quoteChar; // 0x6C
		::System::Boolean xmlContextPushed; // 0x6E
		::System::Boolean isEmptyOrDefault; // 0x6F
		::System::Xml::LineInfo lineInfo; // 0x70
		::System::Int32 depth; // 0x78
		::System::Int32 valueLength; // 0x7C
		static ::System::Xml::XmlTextReaderImpl_NodeData** StaticGet_s_None()
		{
			return (::System::Xml::XmlTextReaderImpl_NodeData**)UnitySDK::FromName("System.Xml", "NodeData")->GetStaticField(0x2BF20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Xml::XmlTextReaderImpl_NodeData* get_None()
		{
			return ((::System::Xml::XmlTextReaderImpl_NodeData*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_NONE_OFFSET))();
		}

		::System::Int32 get_LineNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINENO_OFFSET))(this);
		}

		::System::Int32 get_LinePos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_LINEPOS_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Void set_IsEmptyElement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISEMPTYELEMENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDefaultAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IsDefaultAttribute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_ValueBuffered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_VALUEBUFFERED_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void TrimSpacesInValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_TRIMSPACESINVALUE_OFFSET))(this);
		}

		::System::Void Clear(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEAR_OFFSET))(this, a1);
		}

		::System::Void ClearName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CLEARNAME_OFFSET))(this);
		}

		::System::Void SetLineInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void SetLineInfo2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETLINEINFO2_OFFSET))(this, a1, a2);
		}

		::System::Void SetValueNode(::System::Xml::XmlNodeType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetValueNode_1(::System::Xml::XmlNodeType a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUENODE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetNamedNode(::System::Xml::XmlNodeType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_OFFSET))(this, a1, a2);
		}

		::System::Void SetNamedNode_1(::System::Xml::XmlNodeType a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETNAMEDNODE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_OFFSET))(this, a1);
		}

		::System::Void SetValue_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SETVALUE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBufferInvalidated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_ONBUFFERINVALIDATED_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::String* GetNameWPrefix(::System::Xml::XmlNameTable* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_GETNAMEWPREFIX_OFFSET))(this, a1);
		}

		::System::String* CreateNameWPrefix(::System::Xml::XmlNameTable* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_CREATENAMEWPREFIX_OFFSET))(this, a1);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NODEDATA_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, a1);
		}

	};
}
