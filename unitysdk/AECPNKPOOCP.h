#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECPNKPOOCP;
class BEDLDBOAPPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AECPNKPOOCP_BNJPFNACCLG_OFFSET UNITYSDK_OFFSET(0x1DDBBDE0)
#define AECPNKPOOCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDBC260)
#define AECPNKPOOCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBC600)
#define AECPNKPOOCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDBBDB0)
#define AECPNKPOOCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDBBCF0)
#define AECPNKPOOCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBBCA0)
#define AECPNKPOOCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDBBF60)
#define AECPNKPOOCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDBBE10)
#define AECPNKPOOCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDBBE00)
#define AECPNKPOOCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDBC080)
#define AECPNKPOOCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDBBC60)
#define AECPNKPOOCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDBC430)
#define AECPNKPOOCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDBC390)
#define AECPNKPOOCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDBBDF0)
#define AECPNKPOOCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDBBC90)
#define AECPNKPOOCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDBC0F0)
#define AECPNKPOOCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDBC150)

inline static constexpr unsigned int AECPNKPOOCP_TypeDefinitionIndex = 26056;

	class AECPNKPOOCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BEDLDBOAPPM*>* FIIJLGNIBOP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AECPNKPOOCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AECPNKPOOCP*>**)UnitySDK::FromName("", "AECPNKPOOCP")->GetStaticField(0x33970);
		}

		static ::Google::Protobuf::FieldCodec_1<::BEDLDBOAPPM*>** StaticGet_BONLPACGCEC()
		{
			return (::Google::Protobuf::FieldCodec_1<::BEDLDBOAPPM*>**)UnitySDK::FromName("", "AECPNKPOOCP")->GetStaticField(0x33978);
		}

		// static const ::System::Object IKIBIAPHPEG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AECPNKPOOCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AECPNKPOOCP*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AECPNKPOOCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AECPNKPOOCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AECPNKPOOCP*>*(*)())((::PBYTE)hIl2Cpp + AECPNKPOOCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AECPNKPOOCP* Clone()
		{
			return ((::AECPNKPOOCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BEDLDBOAPPM*>* BNJPFNACCLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BEDLDBOAPPM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_BNJPFNACCLG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AECPNKPOOCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AECPNKPOOCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AECPNKPOOCP*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AECPNKPOOCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AECPNKPOOCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AECPNKPOOCP*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AECPNKPOOCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
