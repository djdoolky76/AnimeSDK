#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
class KIFHJJILCHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIFHJJILCHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E859700)
#define KIFHJJILCHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E859A90)
#define KIFHJJILCHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E859260)
#define KIFHJJILCHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8591D0)
#define KIFHJJILCHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E859190)
#define KIFHJJILCHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E859410)
#define KIFHJJILCHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8592C0)
#define KIFHJJILCHH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8592B0)
#define KIFHJJILCHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E859530)
#define KIFHJJILCHH_HHCCENGCMMN_OFFSET UNITYSDK_OFFSET(0x1E859290)
#define KIFHJJILCHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E859150)
#define KIFHJJILCHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8598D0)
#define KIFHJJILCHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E859830)
#define KIFHJJILCHH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8592A0)
#define KIFHJJILCHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E859180)
#define KIFHJJILCHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8595A0)
#define KIFHJJILCHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E859600)

inline static constexpr unsigned int KIFHJJILCHH_TypeDefinitionIndex = 33282;

	class KIFHJJILCHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>* BCCLEIHGCBI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JMHGPLFGGCK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KIFHJJILCHH")->GetStaticField(0x1A060);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIFHJJILCHH")->GetStaticField(0x1A068);
		}

		// static const ::System::Object MDBBDDEIBCC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIFHJJILCHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIFHJJILCHH*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIFHJJILCHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIFHJJILCHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIFHJJILCHH* Clone()
		{
			return ((::KIFHJJILCHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>* HHCCENGCMMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_HHCCENGCMMN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIFHJJILCHH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIFHJJILCHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIFHJJILCHH*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFHJJILCHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIFHJJILCHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIFHJJILCHH*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIFHJJILCHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
