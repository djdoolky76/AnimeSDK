#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGHIMGPGBNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGHIMGPGBNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E351B00)
#define FGHIMGPGBNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E351D20)
#define FGHIMGPGBNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E351620)
#define FGHIMGPGBNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E351580)
#define FGHIMGPGBNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E351530)
#define FGHIMGPGBNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E351730)
#define FGHIMGPGBNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3516A0)
#define FGHIMGPGBNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E351840)
#define FGHIMGPGBNF_HHFMOCAFBCC_OFFSET UNITYSDK_OFFSET(0x1E351690)
#define FGHIMGPGBNF_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x1E351660)
#define FGHIMGPGBNF_IOGGOBLLOLF_OFFSET UNITYSDK_OFFSET(0x1E351680)
#define FGHIMGPGBNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3514F0)
#define FGHIMGPGBNF_LMCPMDLLIAC_OFFSET UNITYSDK_OFFSET(0x1E351650)
#define FGHIMGPGBNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E351C50)
#define FGHIMGPGBNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E351BF0)
#define FGHIMGPGBNF_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x1E351670)
#define FGHIMGPGBNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E351520)
#define FGHIMGPGBNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E351940)
#define FGHIMGPGBNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3519A0)

inline static constexpr unsigned int FGHIMGPGBNF_TypeDefinitionIndex = 33594;

	class FGHIMGPGBNF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEEBADOPGMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HIKLJGLJLIC; // 0x20
		::System::Boolean OMNLDFMILAK; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FGHIMGPGBNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGHIMGPGBNF*>**)UnitySDK::FromName("", "FGHIMGPGBNF")->GetStaticField(0x556B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JLLFAGBEJPB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FGHIMGPGBNF")->GetStaticField(0x556B8);
		}

		// static const ::System::Object GDBFGJNNEKP; // 0x0
		// static const ::System::Object JOIMLOCMAMK; // 0x0
		// static const ::System::Object ICKDAJBKAIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGHIMGPGBNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGHIMGPGBNF*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGHIMGPGBNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGHIMGPGBNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGHIMGPGBNF*>*(*)())((::PBYTE)hIl2Cpp + FGHIMGPGBNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGHIMGPGBNF* Clone()
		{
			return ((::FGHIMGPGBNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LMCPMDLLIAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_LMCPMDLLIAC_OFFSET))(this);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::System::UInt32 IOGGOBLLOLF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_IOGGOBLLOLF_OFFSET))(this);
		}

		::System::Void HHFMOCAFBCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_HHFMOCAFBCC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGHIMGPGBNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGHIMGPGBNF*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGHIMGPGBNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGHIMGPGBNF*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGHIMGPGBNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
