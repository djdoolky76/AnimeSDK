#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHBCJNLOLMB;
class KICPDGKGGHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CHBCJNLOLMB_ABLJICHDECC_OFFSET UNITYSDK_OFFSET(0x1E0BAE30)
#define CHBCJNLOLMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BB260)
#define CHBCJNLOLMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB560)
#define CHBCJNLOLMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BADE0)
#define CHBCJNLOLMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BAD30)
#define CHBCJNLOLMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BACE0)
#define CHBCJNLOLMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BAFC0)
#define CHBCJNLOLMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BAE40)
#define CHBCJNLOLMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BB0E0)
#define CHBCJNLOLMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BAC70)
#define CHBCJNLOLMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BB3A0)
#define CHBCJNLOLMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BB300)
#define CHBCJNLOLMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BACD0)
#define CHBCJNLOLMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BB150)
#define CHBCJNLOLMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BB1B0)

inline static constexpr unsigned int CHBCJNLOLMB_TypeDefinitionIndex = 31757;

	class CHBCJNLOLMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KICPDGKGGHO*>* IBKGDBEBHBB; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_IOAHGHLKHIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CHBCJNLOLMB")->GetStaticField(0x152D0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CHBCJNLOLMB")->GetStaticField(0x152D8);
		}

		// static const ::System::Object JOBJPGCNNCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CHBCJNLOLMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHBCJNLOLMB*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHBCJNLOLMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CHBCJNLOLMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CHBCJNLOLMB* Clone()
		{
			return ((::CHBCJNLOLMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KICPDGKGGHO*>* ABLJICHDECC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KICPDGKGGHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_ABLJICHDECC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CHBCJNLOLMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHBCJNLOLMB*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CHBCJNLOLMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHBCJNLOLMB*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CHBCJNLOLMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
