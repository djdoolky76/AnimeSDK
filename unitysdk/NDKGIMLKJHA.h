#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGIHHJGCFA;
class NDKGIMLKJHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDKGIMLKJHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE8B10)
#define NDKGIMLKJHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE8E90)
#define NDKGIMLKJHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE8650)
#define NDKGIMLKJHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE85C0)
#define NDKGIMLKJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE8580)
#define NDKGIMLKJHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE8800)
#define NDKGIMLKJHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE86B0)
#define NDKGIMLKJHA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAE8690)
#define NDKGIMLKJHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE8930)
#define NDKGIMLKJHA_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1EAE86A0)
#define NDKGIMLKJHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE8540)
#define NDKGIMLKJHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE8CC0)
#define NDKGIMLKJHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE8C20)
#define NDKGIMLKJHA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAE8680)
#define NDKGIMLKJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE8570)
#define NDKGIMLKJHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE89A0)
#define NDKGIMLKJHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE8A00)

	class NDKGIMLKJHA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* EFHEPAJIOHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NDKGIMLKJHA")->GetStaticField(0x5D630);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NDKGIMLKJHA")->GetStaticField(0x5D638);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDPIDBDJDLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDKGIMLKJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDKGIMLKJHA*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDKGIMLKJHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NDKGIMLKJHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDKGIMLKJHA* Clone()
		{
			return ((::NDKGIMLKJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_INJLCGGALGC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDKGIMLKJHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDKGIMLKJHA*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDKGIMLKJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDKGIMLKJHA*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDKGIMLKJHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
