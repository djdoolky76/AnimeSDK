#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFEEHEBBLCI;
class HIEMNHKDOJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEMNHKDOJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5939D0)
#define HIEMNHKDOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E593D20)
#define HIEMNHKDOJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5933B0)
#define HIEMNHKDOJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E593340)
#define HIEMNHKDOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E593330)
#define HIEMNHKDOJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5935C0)
#define HIEMNHKDOJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E593450)
#define HIEMNHKDOJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E593890)
#define HIEMNHKDOJE_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E593430)
#define HIEMNHKDOJE_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E593440)
#define HIEMNHKDOJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5932F0)
#define HIEMNHKDOJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E593B50)
#define HIEMNHKDOJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E593A30)
#define HIEMNHKDOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E593320)
#define HIEMNHKDOJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5938E0)
#define HIEMNHKDOJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E593940)

inline static constexpr unsigned int HIEMNHKDOJE_TypeDefinitionIndex = 31380;

	class HIEMNHKDOJE : public ::System::Object
	{
	public:
		::FFEEHEBBLCI* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIEMNHKDOJE")->GetStaticField(0x3C7D0);
		}

		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEMNHKDOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEMNHKDOJE*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEMNHKDOJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIEMNHKDOJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEMNHKDOJE* Clone()
		{
			return ((::HIEMNHKDOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_CLONE_OFFSET))(this);
		}

		::FFEEHEBBLCI* GLPCHDFCIJF()
		{
			return ((::FFEEHEBBLCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::FFEEHEBBLCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFEEHEBBLCI*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEMNHKDOJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEMNHKDOJE*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEMNHKDOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEMNHKDOJE*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEMNHKDOJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
