#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLEADGIIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABFLEADGIIF_BHAGPDKHKEO_OFFSET UNITYSDK_OFFSET(0x20319B70)
#define ABFLEADGIIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20319F40)
#define ABFLEADGIIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2031A1A0)
#define ABFLEADGIIF_CLONE_OFFSET UNITYSDK_OFFSET(0x20319B40)
#define ABFLEADGIIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20319AB0)
#define ABFLEADGIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x20319A60)
#define ABFLEADGIIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20319C70)
#define ABFLEADGIIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x20319B80)
#define ABFLEADGIIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20319D60)
#define ABFLEADGIIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20319A20)
#define ABFLEADGIIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2031A000)
#define ABFLEADGIIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20319FB0)
#define ABFLEADGIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20319A50)
#define ABFLEADGIIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20319E60)
#define ABFLEADGIIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x20319EC0)

inline static constexpr unsigned int ABFLEADGIIF_TypeDefinitionIndex = 31893;

	class ABFLEADGIIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPBBBBBKOMB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ABFLEADGIIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABFLEADGIIF*>**)UnitySDK::FromName("", "ABFLEADGIIF")->GetStaticField(0x34330);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BMCFHBLKBIM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ABFLEADGIIF")->GetStaticField(0x34338);
		}

		// static const ::System::Object MENDOAPHGON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABFLEADGIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFLEADGIIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABFLEADGIIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABFLEADGIIF*>*(*)())((::PBYTE)hIl2Cpp + ABFLEADGIIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABFLEADGIIF* Clone()
		{
			return ((::ABFLEADGIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BHAGPDKHKEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_BHAGPDKHKEO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABFLEADGIIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABFLEADGIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
