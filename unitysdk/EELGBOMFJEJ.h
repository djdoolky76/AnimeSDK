#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EELGBOMFJEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EELGBOMFJEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2884F0)
#define EELGBOMFJEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E288770)
#define EELGBOMFJEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E288030)
#define EELGBOMFJEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E287FA0)
#define EELGBOMFJEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E287F50)
#define EELGBOMFJEJ_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E288080)
#define EELGBOMFJEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E288190)
#define EELGBOMFJEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E288090)
#define EELGBOMFJEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E288290)
#define EELGBOMFJEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E287F10)
#define EELGBOMFJEJ_KGGGJOOFIPB_OFFSET UNITYSDK_OFFSET(0x1E288070)
#define EELGBOMFJEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2885B0)
#define EELGBOMFJEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E288560)
#define EELGBOMFJEJ_OJFLCFCBJJI_OFFSET UNITYSDK_OFFSET(0x1E288060)
#define EELGBOMFJEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E287F40)
#define EELGBOMFJEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E288390)
#define EELGBOMFJEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2883F0)

	class EELGBOMFJEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::Boolean LJJNFNNJDIE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EELGBOMFJEJ")->GetStaticField(0x44170);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EELGBOMFJEJ")->GetStaticField(0x44178);
		}

		// static const ::System::Object IPODPIPIFLL; // 0x0
		// static const ::System::Object NDFHHFGKMAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EELGBOMFJEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EELGBOMFJEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EELGBOMFJEJ* Clone()
		{
			return ((::EELGBOMFJEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CLONE_OFFSET))(this);
		}

		::System::Boolean OJFLCFCBJJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_OJFLCFCBJJI_OFFSET))(this);
		}

		::System::Void KGGGJOOFIPB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_KGGGJOOFIPB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EELGBOMFJEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EELGBOMFJEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EELGBOMFJEJ*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EELGBOMFJEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
