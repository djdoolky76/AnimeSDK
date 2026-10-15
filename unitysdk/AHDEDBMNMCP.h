#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHDEDBMNMCP;
class BPAGBAALHMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHDEDBMNMCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26DA20)
#define AHDEDBMNMCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26DD90)
#define AHDEDBMNMCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26D560)
#define AHDEDBMNMCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26D4D0)
#define AHDEDBMNMCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26D490)
#define AHDEDBMNMCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26D710)
#define AHDEDBMNMCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26D5C0)
#define AHDEDBMNMCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E26D5A0)
#define AHDEDBMNMCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26D840)
#define AHDEDBMNMCP_IIDODGOLCNL_OFFSET UNITYSDK_OFFSET(0x1E26D5B0)
#define AHDEDBMNMCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26D450)
#define AHDEDBMNMCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26DBD0)
#define AHDEDBMNMCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26DB30)
#define AHDEDBMNMCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E26D590)
#define AHDEDBMNMCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26D480)
#define AHDEDBMNMCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26D8B0)
#define AHDEDBMNMCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26D910)

	class AHDEDBMNMCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BPAGBAALHMP*>* KODKPBCPMIA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KHHKBFGFEHM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "AHDEDBMNMCP")->GetStaticField(0x318E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHDEDBMNMCP")->GetStaticField(0x318E8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FKOOMEIBDDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHDEDBMNMCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHDEDBMNMCP*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHDEDBMNMCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHDEDBMNMCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHDEDBMNMCP* Clone()
		{
			return ((::AHDEDBMNMCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BPAGBAALHMP*>* IIDODGOLCNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BPAGBAALHMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_IIDODGOLCNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHDEDBMNMCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHDEDBMNMCP*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHDEDBMNMCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHDEDBMNMCP*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHDEDBMNMCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
