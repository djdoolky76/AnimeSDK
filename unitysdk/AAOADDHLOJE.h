#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOADDHLOJE;
class DDBHIOHEHHC;
class EGAKKAGNPFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AAOADDHLOJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC3530)
#define AAOADDHLOJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC3990)
#define AAOADDHLOJE_CHGHEAPFJNJ_OFFSET UNITYSDK_OFFSET(0x1DDC30C0)
#define AAOADDHLOJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC3080)
#define AAOADDHLOJE_CPIPGEHNHLF_OFFSET UNITYSDK_OFFSET(0x1DDC30E0)
#define AAOADDHLOJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC2F70)
#define AAOADDHLOJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC2F00)
#define AAOADDHLOJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC3140)
#define AAOADDHLOJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC3110)
#define AAOADDHLOJE_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1DDC3100)
#define AAOADDHLOJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC32A0)
#define AAOADDHLOJE_HILICOPKLFP_OFFSET UNITYSDK_OFFSET(0x1DDC30B0)
#define AAOADDHLOJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC2EC0)
#define AAOADDHLOJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC3840)
#define AAOADDHLOJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC3730)
#define AAOADDHLOJE_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1DDC30F0)
#define AAOADDHLOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC2EF0)
#define AAOADDHLOJE_PLEKFEEAHOD_OFFSET UNITYSDK_OFFSET(0x1DDC30D0)
#define AAOADDHLOJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC3330)
#define AAOADDHLOJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC3390)

inline static constexpr unsigned int AAOADDHLOJE_TypeDefinitionIndex = 28231;

	class AAOADDHLOJE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DDBHIOHEHHC*>* OBGIFKKJFOD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::EGAKKAGNPFH*>* LDELHDNAAHO; // 0x20
		::System::UInt32 AFFBGDFNCBG; // 0x28
		::System::UInt32 ABGGFEAJHAH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::AAOADDHLOJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AAOADDHLOJE*>**)UnitySDK::FromName("", "AAOADDHLOJE")->GetStaticField(0x37A30);
		}

		static ::Google::Protobuf::FieldCodec_1<::DDBHIOHEHHC*>** StaticGet_FNPPMPNKFLE()
		{
			return (::Google::Protobuf::FieldCodec_1<::DDBHIOHEHHC*>**)UnitySDK::FromName("", "AAOADDHLOJE")->GetStaticField(0x37A38);
		}

		static ::Google::Protobuf::FieldCodec_1<::EGAKKAGNPFH*>** StaticGet_ACJGDHMKKJO()
		{
			return (::Google::Protobuf::FieldCodec_1<::EGAKKAGNPFH*>**)UnitySDK::FromName("", "AAOADDHLOJE")->GetStaticField(0x37A40);
		}

		// static const ::System::Object GOCMFEFHEBM; // 0x0
		// static const ::System::Object HNCINKBJDIN; // 0x0
		// static const ::System::Object LIFIJBIKBDJ; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AAOADDHLOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAOADDHLOJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AAOADDHLOJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AAOADDHLOJE*>*(*)())((::PBYTE)hIl2Cpp + AAOADDHLOJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AAOADDHLOJE* Clone()
		{
			return ((::AAOADDHLOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DDBHIOHEHHC*>* HILICOPKLFP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DDBHIOHEHHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_HILICOPKLFP_OFFSET))(this);
		}

		::System::UInt32 CHGHEAPFJNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CHGHEAPFJNJ_OFFSET))(this);
		}

		::System::Void PLEKFEEAHOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAOADDHLOJE_PLEKFEEAHOD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EGAKKAGNPFH*>* CPIPGEHNHLF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EGAKKAGNPFH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CPIPGEHNHLF_OFFSET))(this);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAOADDHLOJE_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AAOADDHLOJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAOADDHLOJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AAOADDHLOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AAOADDHLOJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
