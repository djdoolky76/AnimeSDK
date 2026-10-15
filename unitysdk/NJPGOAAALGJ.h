#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
class NJPGOAAALGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJPGOAAALGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB53B20)
#define NJPGOAAALGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB53E00)
#define NJPGOAAALGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB53700)
#define NJPGOAAALGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB53670)
#define NJPGOAAALGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB53630)
#define NJPGOAAALGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB53880)
#define NJPGOAAALGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB53740)
#define NJPGOAAALGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB539A0)
#define NJPGOAAALGJ_HHCCENGCMMN_OFFSET UNITYSDK_OFFSET(0x1EB53730)
#define NJPGOAAALGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB535F0)
#define NJPGOAAALGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB53C60)
#define NJPGOAAALGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB53BC0)
#define NJPGOAAALGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB53620)
#define NJPGOAAALGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB53A10)
#define NJPGOAAALGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB53A70)

inline static constexpr unsigned int NJPGOAAALGJ_TypeDefinitionIndex = 33292;

	class NJPGOAAALGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>* BCCLEIHGCBI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NJPGOAAALGJ")->GetStaticField(0x65C40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JMHGPLFGGCK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NJPGOAAALGJ")->GetStaticField(0x65C48);
		}

		// static const ::System::Object MDBBDDEIBCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJPGOAAALGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJPGOAAALGJ*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJPGOAAALGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NJPGOAAALGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJPGOAAALGJ* Clone()
		{
			return ((::NJPGOAAALGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>* HHCCENGCMMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HFEOGNAMHCG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_HHCCENGCMMN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJPGOAAALGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJPGOAAALGJ*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJPGOAAALGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJPGOAAALGJ*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJPGOAAALGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
