#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class IMessage; }
namespace Google::Protobuf { class JsonFormatter; }
namespace Google::Protobuf { class JsonFormatter_Settings; }
namespace Google::Protobuf::Reflection { class IFieldAccessor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::IO { class TextWriter; }

#define GOOGLE_PROTOBUF_JSONFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEAD650)
#define GOOGLE_PROTOBUF_JSONFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAE500)
#define GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1BEAE5D0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET UNITYSDK_OFFSET(0x1BEAE570)
#define GOOGLE_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1BEAD5F0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET UNITYSDK_OFFSET(0x1BEAE510)
#define GOOGLE_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET UNITYSDK_OFFSET(0x1BEB6A40)
#define GOOGLE_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BEB0190)
#define GOOGLE_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1BEAF650)
#define GOOGLE_PROTOBUF_JSONFORMATTER_TOJSONNAME_OFFSET UNITYSDK_OFFSET(0x1BEB1970)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET UNITYSDK_OFFSET(0x1BEB5620)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET UNITYSDK_OFFSET(0x1BEB5FC0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1BEB1D30)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET UNITYSDK_OFFSET(0x1BEB3920)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET UNITYSDK_OFFSET(0x1BEB3FD0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET UNITYSDK_OFFSET(0x1BEB2750)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET UNITYSDK_OFFSET(0x1BEAF7F0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BEAF280)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x1BEAF750)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1BEB0B40)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET UNITYSDK_OFFSET(0x1BEB4E80)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET UNITYSDK_OFFSET(0x1BEB43A0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BEB3270)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1BEB11A0)
#define GOOGLE_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET UNITYSDK_OFFSET(0x1BEAEA50)

namespace Google::Protobuf
{
	inline static constexpr unsigned int JsonFormatter_TypeDefinitionIndex = 5407;

	class JsonFormatter : public ::System::Object
	{
	public:
		::Google::Protobuf::JsonFormatter_Settings* settings; // 0x10
		static ::Il2CppArray<::System::String*>** StaticGet_CommonRepresentations()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("Google.Protobuf", "JsonFormatter")->GetStaticField(0x1D700);
		}

		static ::Google::Protobuf::JsonFormatter** StaticGet__Default_k__BackingField()
		{
			return (::Google::Protobuf::JsonFormatter**)UnitySDK::FromName("Google.Protobuf", "JsonFormatter")->GetStaticField(0x1D708);
		}

		static ::Google::Protobuf::JsonFormatter** StaticGet_diagnosticFormatter()
		{
			return (::Google::Protobuf::JsonFormatter**)UnitySDK::FromName("Google.Protobuf", "JsonFormatter")->GetStaticField(0x1D710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Google::Protobuf::JsonFormatter_Settings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::JsonFormatter_Settings*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_CTOR_OFFSET))(this, a1);
		}

		static ::Google::Protobuf::JsonFormatter* get_Default()
		{
			return ((::Google::Protobuf::JsonFormatter*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_GET_DEFAULT_OFFSET))();
		}

		::System::Boolean get_DiagnosticOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_GET_DIAGNOSTICONLY_OFFSET))(this);
		}

		::System::String* Format(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_OFFSET))(this, a1);
		}

		::System::Void Format_1(::Google::Protobuf::IMessage* a1, ::System::IO::TextWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_FORMAT_1_OFFSET))(this, a1, a2);
		}

		static ::System::String* ToDiagnosticString(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::String*(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_TODIAGNOSTICSTRING_OFFSET))(a1);
		}

		::System::Void WriteMessage(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean WriteMessageFields(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEMESSAGEFIELDS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* ToJsonName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_TOJSONNAME_OFFSET))(a1);
		}

		static ::System::Void WriteNull(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITENULL_OFFSET))(a1);
		}

		static ::System::Boolean IsDefaultValue(::Google::Protobuf::Reflection::IFieldAccessor* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::Reflection::IFieldAccessor*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_ISDEFAULTVALUE_OFFSET))(a1, a2);
		}

		::System::Void WriteValue(::System::IO::TextWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWellKnownTypeValue(::System::IO::TextWriter* a1, ::Google::Protobuf::Reflection::MessageDescriptor* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEWELLKNOWNTYPEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteTimestamp(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITETIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDuration(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDURATION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteFieldMask(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEFIELDMASK_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAny(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEANY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDiagnosticOnlyAny(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDIAGNOSTICONLYANY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteStruct(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteStructFieldValue(::System::IO::TextWriter* a1, ::Google::Protobuf::IMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRUCTFIELDVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteList(::System::IO::TextWriter* a1, ::System::Collections::IList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITELIST_OFFSET))(this, a1, a2);
		}

		::System::Void WriteDictionary(::System::IO::TextWriter* a1, ::System::Collections::IDictionary* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITEDICTIONARY_OFFSET))(this, a1, a2);
		}

		static ::System::Void WriteString(::System::IO::TextWriter* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_WRITESTRING_OFFSET))(a1, a2);
		}

		static ::System::Void HexEncodeUtf16CodeUnit(::System::IO::TextWriter* a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::System::IO::TextWriter*, ::System::Char))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_JSONFORMATTER_HEXENCODEUTF16CODEUNIT_OFFSET))(a1, a2);
		}

	};
}
