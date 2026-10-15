#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFEEHEBBLCI;
class HIEMNHKDOJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEMNHKDOJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E566410)
#define HIEMNHKDOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E566760)
#define HIEMNHKDOJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E565DF0)
#define HIEMNHKDOJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E565D80)
#define HIEMNHKDOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E565D70)
#define HIEMNHKDOJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E566000)
#define HIEMNHKDOJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E565E90)
#define HIEMNHKDOJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5662D0)
#define HIEMNHKDOJE_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E565E70)
#define HIEMNHKDOJE_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E565E80)
#define HIEMNHKDOJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E565D30)
#define HIEMNHKDOJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E566590)
#define HIEMNHKDOJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E566470)
#define HIEMNHKDOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E565D60)
#define HIEMNHKDOJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E566320)
#define HIEMNHKDOJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E566380)

inline static constexpr unsigned int HIEMNHKDOJE_TypeDefinitionIndex = 31380;

	class HIEMNHKDOJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FFEEHEBBLCI* JEFEMOPFJOP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HIEMNHKDOJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIEMNHKDOJE*>**)UnitySDK::FromName("", "HIEMNHKDOJE")->GetStaticField(0x33910);
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

		static ::Google::Protobuf::MessageParser_1<::HIEMNHKDOJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIEMNHKDOJE*>*(*)())((::PBYTE)hIl2Cpp + HIEMNHKDOJE_JJGHOBBFNJD_OFFSET))();
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
