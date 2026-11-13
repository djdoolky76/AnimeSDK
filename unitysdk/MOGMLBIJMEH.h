#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOGMLBIJMEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOGMLBIJMEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FF11300)
#define MOGMLBIJMEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF115C0)
#define MOGMLBIJMEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1FF10E80)
#define MOGMLBIJMEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF10DF0)
#define MOGMLBIJMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF10DA0)
#define MOGMLBIJMEH_EBPKBBDOBNC_OFFSET UNITYSDK_OFFSET(0x1FF10ED0)
#define MOGMLBIJMEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FF11000)
#define MOGMLBIJMEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FF10EE0)
#define MOGMLBIJMEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FF110F0)
#define MOGMLBIJMEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FF10D30)
#define MOGMLBIJMEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FF113F0)
#define MOGMLBIJMEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FF113A0)
#define MOGMLBIJMEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FF10D90)
#define MOGMLBIJMEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FF111F0)
#define MOGMLBIJMEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FF11250)

inline static constexpr unsigned int MOGMLBIJMEH_TypeDefinitionIndex = 25994;

	class MOGMLBIJMEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MOGMLBIJMEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MOGMLBIJMEH*>**)UnitySDK::FromName("", "MOGMLBIJMEH")->GetStaticField(0x53DC0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MOGMLBIJMEH")->GetStaticField(0x53DC8);
		}

		// static const ::System::Object MPGNKBCIMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOGMLBIJMEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOGMLBIJMEH*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOGMLBIJMEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MOGMLBIJMEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MOGMLBIJMEH*>*(*)())((::PBYTE)hIl2Cpp + MOGMLBIJMEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOGMLBIJMEH* Clone()
		{
			return ((::MOGMLBIJMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBPKBBDOBNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_EBPKBBDOBNC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOGMLBIJMEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOGMLBIJMEH*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOGMLBIJMEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOGMLBIJMEH*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOGMLBIJMEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
