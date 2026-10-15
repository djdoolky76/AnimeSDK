#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMFKDCCDNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGMFKDCCDNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9573B0)
#define LGMFKDCCDNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E957710)
#define LGMFKDCCDNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E956EA0)
#define LGMFKDCCDNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E956E10)
#define LGMFKDCCDNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956DC0)
#define LGMFKDCCDNN_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1E956F10)
#define LGMFKDCCDNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E957050)
#define LGMFKDCCDNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E956F20)
#define LGMFKDCCDNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E957140)
#define LGMFKDCCDNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E956D50)
#define LGMFKDCCDNN_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1E956F00)
#define LGMFKDCCDNN_MDCPLOEONPG_OFFSET UNITYSDK_OFFSET(0x1E956EF0)
#define LGMFKDCCDNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E957530)
#define LGMFKDCCDNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9574E0)
#define LGMFKDCCDNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E956DB0)
#define LGMFKDCCDNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E957240)
#define LGMFKDCCDNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9572A0)

	class LGMFKDCCDNN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANLOFEJACIF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IDPMGABNGKO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGMFKDCCDNN")->GetStaticField(0x3FB60);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KCAPMKNIJLM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LGMFKDCCDNN")->GetStaticField(0x3FB68);
		}

		// static const ::System::Object EPOLDFHNNFN; // 0x0
		// static const ::System::Object OOGKNMKNJNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGMFKDCCDNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGMFKDCCDNN*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGMFKDCCDNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGMFKDCCDNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGMFKDCCDNN* Clone()
		{
			return ((::LGMFKDCCDNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDCPLOEONPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_MDCPLOEONPG_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGMFKDCCDNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGMFKDCCDNN*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGMFKDCCDNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGMFKDCCDNN*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGMFKDCCDNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
