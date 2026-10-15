#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOBHGFOGHP;
class MDKHMNKAECP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MDKHMNKAECP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA05990)
#define MDKHMNKAECP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA05C90)
#define MDKHMNKAECP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA05510)
#define MDKHMNKAECP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA05460)
#define MDKHMNKAECP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA05410)
#define MDKHMNKAECP_DDJBLHGAGDF_OFFSET UNITYSDK_OFFSET(0x1EA05560)
#define MDKHMNKAECP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA056F0)
#define MDKHMNKAECP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA05570)
#define MDKHMNKAECP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA05810)
#define MDKHMNKAECP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA053A0)
#define MDKHMNKAECP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA05AD0)
#define MDKHMNKAECP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA05A30)
#define MDKHMNKAECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA05400)
#define MDKHMNKAECP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA05880)
#define MDKHMNKAECP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA058E0)

	class MDKHMNKAECP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>* LGHDGPNJLLG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MDKHMNKAECP")->GetStaticField(0x49C00);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PNMKGCHGFML()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MDKHMNKAECP")->GetStaticField(0x49C08);
		}

		// static const ::System::Object LFKIHOHCPJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDKHMNKAECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDKHMNKAECP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MDKHMNKAECP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MDKHMNKAECP* Clone()
		{
			return ((::MDKHMNKAECP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>* DDJBLHGAGDF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JJOBHGFOGHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_DDJBLHGAGDF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MDKHMNKAECP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKHMNKAECP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MDKHMNKAECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKHMNKAECP*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MDKHMNKAECP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
