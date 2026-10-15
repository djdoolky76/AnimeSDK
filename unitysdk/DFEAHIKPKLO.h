#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFEAHIKPKLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFEAHIKPKLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E19EF60)
#define DFEAHIKPKLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19F320)
#define DFEAHIKPKLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E19EA50)
#define DFEAHIKPKLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E19E9C0)
#define DFEAHIKPKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19E970)
#define DFEAHIKPKLO_DPMFBFIOPNB_OFFSET UNITYSDK_OFFSET(0x1E19EAA0)
#define DFEAHIKPKLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E19EC00)
#define DFEAHIKPKLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E19EAD0)
#define DFEAHIKPKLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E19ECF0)
#define DFEAHIKPKLO_HJLLEMGEGOF_OFFSET UNITYSDK_OFFSET(0x1E19EAB0)
#define DFEAHIKPKLO_IBBDOOEEIIO_OFFSET UNITYSDK_OFFSET(0x1E19EAC0)
#define DFEAHIKPKLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E19E900)
#define DFEAHIKPKLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E19F0C0)
#define DFEAHIKPKLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E19F070)
#define DFEAHIKPKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E19E960)
#define DFEAHIKPKLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E19EDF0)
#define DFEAHIKPKLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E19EE50)

	class DFEAHIKPKLO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LIPCHONLEED; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 ICMABDIPKEA; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_EAAJALHDCGO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DFEAHIKPKLO")->GetStaticField(0x32420);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFEAHIKPKLO")->GetStaticField(0x32428);
		}

		// static const ::System::Object EELGEJPHDHP; // 0x0
		// static const ::System::Object NCLCCKBEBCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFEAHIKPKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFEAHIKPKLO*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEAHIKPKLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFEAHIKPKLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFEAHIKPKLO* Clone()
		{
			return ((::DFEAHIKPKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 DPMFBFIOPNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_DPMFBFIOPNB_OFFSET))(this);
		}

		::System::Void HJLLEMGEGOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_HJLLEMGEGOF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IBBDOOEEIIO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_IBBDOOEEIIO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFEAHIKPKLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFEAHIKPKLO*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFEAHIKPKLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFEAHIKPKLO*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFEAHIKPKLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
