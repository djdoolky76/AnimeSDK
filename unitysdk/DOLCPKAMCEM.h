#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOLCPKAMCEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOLCPKAMCEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D7710)
#define DOLCPKAMCEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7970)
#define DOLCPKAMCEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D7310)
#define DOLCPKAMCEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D7280)
#define DOLCPKAMCEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7230)
#define DOLCPKAMCEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D7440)
#define DOLCPKAMCEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D7350)
#define DOLCPKAMCEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D7530)
#define DOLCPKAMCEM_HLJPGIAMGBD_OFFSET UNITYSDK_OFFSET(0x1E1D7340)
#define DOLCPKAMCEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D71F0)
#define DOLCPKAMCEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D77D0)
#define DOLCPKAMCEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D7780)
#define DOLCPKAMCEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7220)
#define DOLCPKAMCEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D7630)
#define DOLCPKAMCEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D7690)

inline static constexpr unsigned int DOLCPKAMCEM_TypeDefinitionIndex = 29853;

	class DOLCPKAMCEM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKEOPFNABME; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DOLCPKAMCEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DOLCPKAMCEM*>**)UnitySDK::FromName("", "DOLCPKAMCEM")->GetStaticField(0x38260);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FNHJCKOIEON()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DOLCPKAMCEM")->GetStaticField(0x38268);
		}

		// static const ::System::Object NIEBGNHGDIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOLCPKAMCEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOLCPKAMCEM*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOLCPKAMCEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DOLCPKAMCEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DOLCPKAMCEM*>*(*)())((::PBYTE)hIl2Cpp + DOLCPKAMCEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOLCPKAMCEM* Clone()
		{
			return ((::DOLCPKAMCEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLJPGIAMGBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_HLJPGIAMGBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOLCPKAMCEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOLCPKAMCEM*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOLCPKAMCEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOLCPKAMCEM*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOLCPKAMCEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
