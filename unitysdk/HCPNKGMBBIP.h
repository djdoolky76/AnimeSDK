#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLHODCINBI;
class HCPNKGMBBIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCPNKGMBBIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5455C0)
#define HCPNKGMBBIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5458C0)
#define HCPNKGMBBIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5451A0)
#define HCPNKGMBBIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5450F0)
#define HCPNKGMBBIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5450A0)
#define HCPNKGMBBIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E545320)
#define HCPNKGMBBIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5451E0)
#define HCPNKGMBBIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E545440)
#define HCPNKGMBBIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E545060)
#define HCPNKGMBBIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E545700)
#define HCPNKGMBBIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E545660)
#define HCPNKGMBBIP_MMLCKIGKLDB_OFFSET UNITYSDK_OFFSET(0x1E5451D0)
#define HCPNKGMBBIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E545090)
#define HCPNKGMBBIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5454B0)
#define HCPNKGMBBIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E545510)

	class HCPNKGMBBIP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DDLHODCINBI*>* PLBGCPABAKK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCPNKGMBBIP")->GetStaticField(0x30C00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CJLDLEDIDAC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HCPNKGMBBIP")->GetStaticField(0x30C08);
		}

		// static const ::System::Object DMIILHALCHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCPNKGMBBIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCPNKGMBBIP*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPNKGMBBIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCPNKGMBBIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCPNKGMBBIP* Clone()
		{
			return ((::HCPNKGMBBIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DDLHODCINBI*>* MMLCKIGKLDB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DDLHODCINBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_MMLCKIGKLDB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCPNKGMBBIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCPNKGMBBIP*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCPNKGMBBIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCPNKGMBBIP*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCPNKGMBBIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
