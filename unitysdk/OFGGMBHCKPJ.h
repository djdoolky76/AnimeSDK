#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
class OFGGMBHCKPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFGGMBHCKPJ_ADFJLJCNOPK_OFFSET UNITYSDK_OFFSET(0x1DE43D10)
#define OFGGMBHCKPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE44170)
#define OFGGMBHCKPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE444E0)
#define OFGGMBHCKPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE43CC0)
#define OFGGMBHCKPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE43C30)
#define OFGGMBHCKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE43BF0)
#define OFGGMBHCKPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE43E70)
#define OFGGMBHCKPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE43D20)
#define OFGGMBHCKPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE43FA0)
#define OFGGMBHCKPJ_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1DE43D00)
#define OFGGMBHCKPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE43BB0)
#define OFGGMBHCKPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE44320)
#define OFGGMBHCKPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE44280)
#define OFGGMBHCKPJ_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1DE43CF0)
#define OFGGMBHCKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE43BE0)
#define OFGGMBHCKPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE44010)
#define OFGGMBHCKPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE44070)

inline static constexpr unsigned int OFGGMBHCKPJ_TypeDefinitionIndex = 33087;

	class OFGGMBHCKPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>* MIKPPLIHHFO; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_JBLJOHABIHO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OFGGMBHCKPJ")->GetStaticField(0x171C0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFGGMBHCKPJ")->GetStaticField(0x171C8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object PEBEFKEJDEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFGGMBHCKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGGMBHCKPJ*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFGGMBHCKPJ* Clone()
		{
			return ((::OFGGMBHCKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>* ADFJLJCNOPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_ADFJLJCNOPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFGGMBHCKPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFGGMBHCKPJ*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFGGMBHCKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGGMBHCKPJ*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFGGMBHCKPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
