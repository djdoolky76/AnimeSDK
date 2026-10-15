#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJFJACCGDGA;
class PNHCOJNOCHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJFJACCGDGA_BLHGEALKFEG_OFFSET UNITYSDK_OFFSET(0x1E2B5A20)
#define EJFJACCGDGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B5DE0)
#define EJFJACCGDGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B60E0)
#define EJFJACCGDGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B59F0)
#define EJFJACCGDGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B5960)
#define EJFJACCGDGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B5920)
#define EJFJACCGDGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B5B70)
#define EJFJACCGDGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B5A30)
#define EJFJACCGDGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B5C90)
#define EJFJACCGDGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B58E0)
#define EJFJACCGDGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B5F20)
#define EJFJACCGDGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B5E80)
#define EJFJACCGDGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B5910)
#define EJFJACCGDGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B5D00)
#define EJFJACCGDGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B5D60)

	class EJFJACCGDGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PNHCOJNOCHP*>* IBCMEGHNAAK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJFJACCGDGA")->GetStaticField(0x4B640);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KKGGFPGEGBM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EJFJACCGDGA")->GetStaticField(0x4B648);
		}

		// static const ::System::Object PIKOKMMPPCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJFJACCGDGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJFJACCGDGA*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFJACCGDGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJFJACCGDGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJFJACCGDGA* Clone()
		{
			return ((::EJFJACCGDGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PNHCOJNOCHP*>* BLHGEALKFEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PNHCOJNOCHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_BLHGEALKFEG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJFJACCGDGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJFJACCGDGA*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFJACCGDGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJFJACCGDGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJFJACCGDGA*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJFJACCGDGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
