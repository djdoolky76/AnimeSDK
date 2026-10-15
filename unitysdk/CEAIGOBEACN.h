#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAIGOBEACN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEAIGOBEACN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E08E050)
#define CEAIGOBEACN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08E3B0)
#define CEAIGOBEACN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E08DBC0)
#define CEAIGOBEACN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E08DB30)
#define CEAIGOBEACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08DAE0)
#define CEAIGOBEACN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E08DD20)
#define CEAIGOBEACN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E08DC20)
#define CEAIGOBEACN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E08DC00)
#define CEAIGOBEACN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E08DE10)
#define CEAIGOBEACN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E08DAA0)
#define CEAIGOBEACN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E08E180)
#define CEAIGOBEACN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E08E130)
#define CEAIGOBEACN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E08DBF0)
#define CEAIGOBEACN_OKDOJFKNAKF_OFFSET UNITYSDK_OFFSET(0x1E08DC10)
#define CEAIGOBEACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E08DAD0)
#define CEAIGOBEACN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E08DF10)
#define CEAIGOBEACN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E08DF70)

	class CEAIGOBEACN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBPMCOPILAL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NJHCNJONPJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CEAIGOBEACN")->GetStaticField(0x101C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEAIGOBEACN")->GetStaticField(0x101C8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LEBHJNCNOEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEAIGOBEACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAIGOBEACN*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAIGOBEACN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEAIGOBEACN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEAIGOBEACN* Clone()
		{
			return ((::CEAIGOBEACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEAIGOBEACN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKDOJFKNAKF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_OKDOJFKNAKF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEAIGOBEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEAIGOBEACN*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEAIGOBEACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEAIGOBEACN*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEAIGOBEACN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
