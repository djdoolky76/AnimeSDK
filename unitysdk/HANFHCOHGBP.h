#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABNBDDCDBCA;
class HANFHCOHGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HANFHCOHGBP_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E4DB430)
#define HANFHCOHGBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DB8E0)
#define HANFHCOHGBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBC60)
#define HANFHCOHGBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DB3D0)
#define HANFHCOHGBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DB310)
#define HANFHCOHGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DB2C0)
#define HANFHCOHGBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DB5E0)
#define HANFHCOHGBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DB450)
#define HANFHCOHGBP_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E4DB420)
#define HANFHCOHGBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DB710)
#define HANFHCOHGBP_IGHNFKAHBOC_OFFSET UNITYSDK_OFFSET(0x1E4DB440)
#define HANFHCOHGBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DB250)
#define HANFHCOHGBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DBA90)
#define HANFHCOHGBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DB9F0)
#define HANFHCOHGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DB2B0)
#define HANFHCOHGBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DB780)
#define HANFHCOHGBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DB7E0)

inline static constexpr unsigned int HANFHCOHGBP_TypeDefinitionIndex = 25907;

	class HANFHCOHGBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ABNBDDCDBCA*>* OPIOOBIKHBB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MLCHFINKHHM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HANFHCOHGBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HANFHCOHGBP*>**)UnitySDK::FromName("", "HANFHCOHGBP")->GetStaticField(0x24FB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::ABNBDDCDBCA*>** StaticGet_MDDHMPAJBFL()
		{
			return (::Google::Protobuf::FieldCodec_1<::ABNBDDCDBCA*>**)UnitySDK::FromName("", "HANFHCOHGBP")->GetStaticField(0x24FB8);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		// static const ::System::Object LNHANBMJLFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HANFHCOHGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANFHCOHGBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HANFHCOHGBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HANFHCOHGBP*>*(*)())((::PBYTE)hIl2Cpp + HANFHCOHGBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HANFHCOHGBP* Clone()
		{
			return ((::HANFHCOHGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HANFHCOHGBP_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ABNBDDCDBCA*>* IGHNFKAHBOC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ABNBDDCDBCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_IGHNFKAHBOC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HANFHCOHGBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HANFHCOHGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HANFHCOHGBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
