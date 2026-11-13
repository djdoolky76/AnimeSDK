#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Xml { class IXmlLineInfo; }

#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET UNITYSDK_OFFSET(0x192B22F0)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET UNITYSDK_OFFSET(0x192B2080)
#define SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET UNITYSDK_OFFSET(0x192AC080)
#define SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x192B0DA0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_10_OFFSET UNITYSDK_OFFSET(0x192B1920)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_11_OFFSET UNITYSDK_OFFSET(0x192B1C10)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_12_OFFSET UNITYSDK_OFFSET(0x192B1D10)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_13_OFFSET UNITYSDK_OFFSET(0x192B1E20)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_14_OFFSET UNITYSDK_OFFSET(0x192B1EE0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_15_OFFSET UNITYSDK_OFFSET(0x192B1FB0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_16_OFFSET UNITYSDK_OFFSET(0x192B15F0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x192B12F0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_2_OFFSET UNITYSDK_OFFSET(0x192B1320)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_3_OFFSET UNITYSDK_OFFSET(0x192B1350)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_4_OFFSET UNITYSDK_OFFSET(0x192B1370)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_5_OFFSET UNITYSDK_OFFSET(0x192B1540)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_6_OFFSET UNITYSDK_OFFSET(0x192B16D0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_7_OFFSET UNITYSDK_OFFSET(0x192B17C0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_8_OFFSET UNITYSDK_OFFSET(0x192B18B0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_9_OFFSET UNITYSDK_OFFSET(0x192B1BF0)
#define SYSTEM_XML_XMLEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x192B0930)
#define SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET UNITYSDK_OFFSET(0x192B14A0)
#define SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x192B1050)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x192B2350)
#define SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x192B2360)
#define SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x192B2370)
#define SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET UNITYSDK_OFFSET(0x192B2390)

namespace System::Xml
{
	inline static constexpr unsigned int XmlException_TypeDefinitionIndex = 1962;

	class XmlException : public ::System::SystemException
	{
	public:
		::System::String* message; // 0x88
		::System::String* res; // 0x90
		::System::String* sourceUri; // 0x98
		::Il2CppArray<::System::String*>* args; // 0xA0
		::System::Int32 linePosition; // 0xA8
		::System::Int32 lineNumber; // 0xAC
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Exception* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_5(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_5_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_6(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_6_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_7(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_8(::System::String* a1, ::System::String* a2, ::System::Xml::IXmlLineInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_9(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::IXmlLineInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_10(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Xml::IXmlLineInfo* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::IXmlLineInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_10_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_11(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_11_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_12(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_12_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_13(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_13_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_14(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_14_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_15(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Exception* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_15_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_16(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Exception* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CTOR_16_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::String* FormatUserMessage(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_FORMATUSERMESSAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CreateMessage(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_CREATEMESSAGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs(::System::String* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* BuildCharExceptionArgs_2(::System::Char a1, ::System::Char a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_BUILDCHAREXCEPTIONARGS_2_OFFSET))(a1, a2);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_ResString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEXCEPTION_GET_RESSTRING_OFFSET))(this);
		}

	};
}
