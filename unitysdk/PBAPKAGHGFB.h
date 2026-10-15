#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBAPKAGHGFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBAPKAGHGFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC6650)
#define PBAPKAGHGFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6910)
#define PBAPKAGHGFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC61D0)
#define PBAPKAGHGFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC6140)
#define PBAPKAGHGFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC60F0)
#define PBAPKAGHGFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC6350)
#define PBAPKAGHGFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC6230)
#define PBAPKAGHGFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC6440)
#define PBAPKAGHGFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC6080)
#define PBAPKAGHGFB_JPLANDCKNFD_OFFSET UNITYSDK_OFFSET(0x1DEC6220)
#define PBAPKAGHGFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC6740)
#define PBAPKAGHGFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC66F0)
#define PBAPKAGHGFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC60E0)
#define PBAPKAGHGFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC6540)
#define PBAPKAGHGFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC65A0)

inline static constexpr unsigned int PBAPKAGHGFB_TypeDefinitionIndex = 31921;

	class PBAPKAGHGFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JCBPJMLLDFO; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KDDJKDICIHF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PBAPKAGHGFB")->GetStaticField(0x2C420);
		}

		static ::Google::Protobuf::MessageParser_1<::PBAPKAGHGFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBAPKAGHGFB*>**)UnitySDK::FromName("", "PBAPKAGHGFB")->GetStaticField(0x2C428);
		}

		// static const ::System::Object GHOJPJHEBDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBAPKAGHGFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBAPKAGHGFB*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBAPKAGHGFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBAPKAGHGFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBAPKAGHGFB*>*(*)())((::PBYTE)hIl2Cpp + PBAPKAGHGFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBAPKAGHGFB* Clone()
		{
			return ((::PBAPKAGHGFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JPLANDCKNFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_JPLANDCKNFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBAPKAGHGFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBAPKAGHGFB*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBAPKAGHGFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBAPKAGHGFB*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBAPKAGHGFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
