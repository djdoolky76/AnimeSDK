#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICMJACOKIPI;
class KOBALACAPKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOBALACAPKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AC340)
#define KOBALACAPKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AC700)
#define KOBALACAPKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8ABD50)
#define KOBALACAPKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8ABC20)
#define KOBALACAPKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8ABB90)
#define KOBALACAPKF_DJEOJNCPAGI_OFFSET UNITYSDK_OFFSET(0x1E8ABDE0)
#define KOBALACAPKF_EGLGKOAFDGJ_OFFSET UNITYSDK_OFFSET(0x1E8ABDD0)
#define KOBALACAPKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ABE60)
#define KOBALACAPKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8ABE00)
#define KOBALACAPKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ABFC0)
#define KOBALACAPKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8ABB20)
#define KOBALACAPKF_KHINOGAEHBI_OFFSET UNITYSDK_OFFSET(0x1E8ABDF0)
#define KOBALACAPKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AC590)
#define KOBALACAPKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AC4C0)
#define KOBALACAPKF_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E8ABDC0)
#define KOBALACAPKF_NHJDKLCFPPP_OFFSET UNITYSDK_OFFSET(0x1E8ABDA0)
#define KOBALACAPKF_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E8ABDB0)
#define KOBALACAPKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8ABB80)
#define KOBALACAPKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AC110)
#define KOBALACAPKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AC170)

inline static constexpr unsigned int KOBALACAPKF_TypeDefinitionIndex = 26984;

	class KOBALACAPKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::ICMJACOKIPI*>* IMFLPFHCLLE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FLHOIFJLDCM; // 0x20
		::System::UInt32 ABPDPMHFFNN; // 0x28
		::System::Boolean HAEKCLLKFIE; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_JNLOIKKDOFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KOBALACAPKF")->GetStaticField(0x2B280);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AGOMCLEMOCM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KOBALACAPKF")->GetStaticField(0x2B288);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOBALACAPKF")->GetStaticField(0x2B290);
		}

		// static const ::System::Object OGMPFFNLOGI; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object FMFKHGPLEFN; // 0x0
		// static const ::System::Object PMGMOKACFAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOBALACAPKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBALACAPKF*))((::PBYTE)hIl2Cpp + KOBALACAPKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOBALACAPKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOBALACAPKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOBALACAPKF* Clone()
		{
			return ((::KOBALACAPKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ICMJACOKIPI*>* NHJDKLCFPPP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ICMJACOKIPI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_NHJDKLCFPPP_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOBALACAPKF_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean EGLGKOAFDGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_EGLGKOAFDGJ_OFFSET))(this);
		}

		::System::Void DJEOJNCPAGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOBALACAPKF_DJEOJNCPAGI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHINOGAEHBI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_KHINOGAEHBI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOBALACAPKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOBALACAPKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOBALACAPKF*))((::PBYTE)hIl2Cpp + KOBALACAPKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOBALACAPKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBALACAPKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOBALACAPKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOBALACAPKF*))((::PBYTE)hIl2Cpp + KOBALACAPKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOBALACAPKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
