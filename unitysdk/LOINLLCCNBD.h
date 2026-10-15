#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOINLLCCNBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOINLLCCNBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9C1140)
#define LOINLLCCNBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1440)
#define LOINLLCCNBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9C0CB0)
#define LOINLLCCNBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C0C20)
#define LOINLLCCNBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0BD0)
#define LOINLLCCNBD_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E9C0CE0)
#define LOINLLCCNBD_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E9C0CF0)
#define LOINLLCCNBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9C0E10)
#define LOINLLCCNBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9C0D10)
#define LOINLLCCNBD_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E9C0D00)
#define LOINLLCCNBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9C0F00)
#define LOINLLCCNBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9C0B90)
#define LOINLLCCNBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9C1280)
#define LOINLLCCNBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9C1230)
#define LOINLLCCNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0BC0)
#define LOINLLCCNBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9C1000)
#define LOINLLCCNBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9C1060)

inline static constexpr unsigned int LOINLLCCNBD_TypeDefinitionIndex = 27379;

	class LOINLLCCNBD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LOINLLCCNBD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOINLLCCNBD*>**)UnitySDK::FromName("", "LOINLLCCNBD")->GetStaticField(0x520E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LOINLLCCNBD")->GetStaticField(0x520E8);
		}

		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOINLLCCNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOINLLCCNBD*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOINLLCCNBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOINLLCCNBD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOINLLCCNBD*>*(*)())((::PBYTE)hIl2Cpp + LOINLLCCNBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOINLLCCNBD* Clone()
		{
			return ((::LOINLLCCNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOINLLCCNBD_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOINLLCCNBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOINLLCCNBD*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOINLLCCNBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOINLLCCNBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOINLLCCNBD*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOINLLCCNBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
