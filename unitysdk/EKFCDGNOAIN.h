#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFCDGNOAIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKFCDGNOAIN_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E2C03B0)
#define EKFCDGNOAIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2C0840)
#define EKFCDGNOAIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C0B00)
#define EKFCDGNOAIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2C0360)
#define EKFCDGNOAIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2C0270)
#define EKFCDGNOAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C01E0)
#define EKFCDGNOAIN_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1E2C0390)
#define EKFCDGNOAIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2C0400)
#define EKFCDGNOAIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2C03D0)
#define EKFCDGNOAIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2C0520)
#define EKFCDGNOAIN_HHKNFHDPOOD_OFFSET UNITYSDK_OFFSET(0x1E2C03C0)
#define EKFCDGNOAIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2C01A0)
#define EKFCDGNOAIN_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E2C03A0)
#define EKFCDGNOAIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2C09E0)
#define EKFCDGNOAIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2C0970)
#define EKFCDGNOAIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2C01D0)
#define EKFCDGNOAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2C06E0)
#define EKFCDGNOAIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2C0740)

inline static constexpr unsigned int EKFCDGNOAIN_TypeDefinitionIndex = 32714;

	class EKFCDGNOAIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EHMGJDCEJOE; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x20
		::System::UInt32 HKMEMBIPHAN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::EKFCDGNOAIN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKFCDGNOAIN*>**)UnitySDK::FromName("", "EKFCDGNOAIN")->GetStaticField(0x4C970);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EKFCDGNOAIN")->GetStaticField(0x4C978);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJOPDFMOJNJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EKFCDGNOAIN")->GetStaticField(0x4C980);
		}

		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object DFPPCAJDBFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKFCDGNOAIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFCDGNOAIN*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKFCDGNOAIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKFCDGNOAIN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKFCDGNOAIN*>*(*)())((::PBYTE)hIl2Cpp + EKFCDGNOAIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKFCDGNOAIN* Clone()
		{
			return ((::EKFCDGNOAIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HHKNFHDPOOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_HHKNFHDPOOD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKFCDGNOAIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKFCDGNOAIN*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKFCDGNOAIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFCDGNOAIN*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKFCDGNOAIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
