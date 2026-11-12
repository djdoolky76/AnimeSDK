#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOKGDDDHHPD;
class KBCNABANJLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBCNABANJLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAFF670)
#define KBCNABANJLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAFFA10)
#define KBCNABANJLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAFF1C0)
#define KBCNABANJLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAFF100)
#define KBCNABANJLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFF0B0)
#define KBCNABANJLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAFF370)
#define KBCNABANJLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAFF220)
#define KBCNABANJLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAFF490)
#define KBCNABANJLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAFF070)
#define KBCNABANJLF_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1FAFF200)
#define KBCNABANJLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAFF840)
#define KBCNABANJLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAFF7A0)
#define KBCNABANJLF_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1FAFF1F0)
#define KBCNABANJLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAFF0A0)
#define KBCNABANJLF_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1FAFF210)
#define KBCNABANJLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAFF500)
#define KBCNABANJLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAFF560)

inline static constexpr unsigned int KBCNABANJLF_TypeDefinitionIndex = 35934;

	class KBCNABANJLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MPFELJLKAFH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KBCNABANJLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBCNABANJLF*>**)UnitySDK::FromName("", "KBCNABANJLF")->GetStaticField(0x4D670);
		}

		static ::Google::Protobuf::FieldCodec_1<::IOKGDDDHHPD*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::IOKGDDDHHPD*>**)UnitySDK::FromName("", "KBCNABANJLF")->GetStaticField(0x4D678);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object CODFBJPPBGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBCNABANJLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCNABANJLF*))((::PBYTE)hIl2Cpp + KBCNABANJLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBCNABANJLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBCNABANJLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBCNABANJLF*>*(*)())((::PBYTE)hIl2Cpp + KBCNABANJLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBCNABANJLF* Clone()
		{
			return ((::KBCNABANJLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IOKGDDDHHPD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBCNABANJLF_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBCNABANJLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBCNABANJLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBCNABANJLF*))((::PBYTE)hIl2Cpp + KBCNABANJLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBCNABANJLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCNABANJLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBCNABANJLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCNABANJLF*))((::PBYTE)hIl2Cpp + KBCNABANJLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBCNABANJLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
